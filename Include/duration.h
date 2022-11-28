#ifndef _DURATION_CLASS_H_
#define _DURATION_CLASS_H_

class Duration {
   private:
    int time;

    int alarm;
    bool alarmHasBeenSet = false;

   public:
    Duration();
    ~Duration();
    Duration(int);

    bool tick();
    bool tick(int);

    void setAlarm(int);

    int getDuration();
    bool checkAndUpdateAlarm();
};

#endif