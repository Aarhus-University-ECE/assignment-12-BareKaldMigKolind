#include "duration.h"

#include <assert.h>

int Duration::getDuration() { return time; }

// Opgave b
Duration::Duration() { time = 0; }

// Opgave c
Duration::Duration(int t) {
    assert(t >= 0);
    time = t;
}

// Opgave e
bool Duration::tick() {
    time++;
    checkAndUpdateAlarm();
}

// Opgave f

bool Duration::tick(int dt) {
    assert(dt > 0);
    time = time + dt;
    checkAndUpdateAlarm();
}

void Duration::setAlarm(int t) {
    if (t > time) {
        alarm = t;
        alarmHasBeenSet = true;
    }
}

bool Duration::checkAndUpdateAlarm() {
    if (alarmHasBeenSet == true && time >= alarm) {
        alarmHasBeenSet = false;
        return true;
    }
    return false;
}

Duration::~Duration() {}