#include <stdio.h>

struct Flight {
    int flightNo;
    char departure[20];
    char destination[20];
    char date[15];
    int seats;
};

void bookSeat(struct Flight *f) {
    if (f->seats > 0) {
        f->seats--;
        printf("Seat booked! Remaining seats: %d\n", f->seats);
    } else {
        printf("No seats available!\n");
    }
}

void display(struct Flight f) {
    printf("Flight No: %d\nDeparture: %s\nDestination: %s\nDate: %s\nSeats: %d\n",
           f.flightNo, f.departure, f.destination, f.date, f.seats);
}

int main() {
    struct Flight f = {101, "Karachi", "Lahore", "12-12-2025", 5};
    display(f);
    bookSeat(&f);
    return 0;
}

