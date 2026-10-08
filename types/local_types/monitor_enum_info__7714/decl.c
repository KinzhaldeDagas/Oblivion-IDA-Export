struct monitor_enum_info
{
RECT rect;
UINT max_area;
UINT min_distance;
HMONITOR primary __offset(OFF64|AUTO);
HMONITOR nearest __offset(OFF64|AUTO);
HMONITOR ret __offset(OFF64|AUTO);
};
