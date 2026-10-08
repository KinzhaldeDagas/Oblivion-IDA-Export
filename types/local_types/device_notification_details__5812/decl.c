struct device_notification_details
{
DWORD (*cb)(HANDLE, DWORD, DEV_BROADCAST_HDR *) __offset(OFF64|AUTO);
HANDLE handle __offset(OFF64|AUTO);
};
