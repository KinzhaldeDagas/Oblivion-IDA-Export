struct SYSTEM_BATTERY_STATE
{
BOOLEAN AcOnLine;
BOOLEAN BatteryPresent;
BOOLEAN Charging;
BOOLEAN Discharging;
BOOLEAN Spare1[3];
BYTE Tag;
ULONG MaxCapacity;
ULONG RemainingCapacity;
ULONG Rate;
ULONG EstimatedTime;
ULONG DefaultAlert1;
ULONG DefaultAlert2;
};
