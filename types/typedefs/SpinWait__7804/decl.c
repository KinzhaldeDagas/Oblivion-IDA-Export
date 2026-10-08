struct SpinWait
{
ULONG spin;
ULONG unknown;
SpinWait_state state;
yield_func yield_func __offset(OFF64|AUTO);
};
