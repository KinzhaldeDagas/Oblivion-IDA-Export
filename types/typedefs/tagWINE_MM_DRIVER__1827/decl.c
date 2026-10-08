struct tagWINE_MM_DRIVER
{
HDRVR hDriver;
LPSTR drvname;
unsigned __int32 bIsMapper : 1;
WINE_MM_DRIVER_PART parts[6];
};
