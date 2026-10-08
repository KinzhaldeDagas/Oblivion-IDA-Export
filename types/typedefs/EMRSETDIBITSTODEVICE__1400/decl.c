struct EMRSETDIBITSTODEVICE
{
EMR emr;
RECTL rclBounds;
LONG xDest;
LONG yDest;
LONG xSrc;
LONG ySrc;
LONG cxSrc;
LONG cySrc;
DWORD offBmiSrc;
DWORD cbBmiSrc;
DWORD offBitsSrc;
DWORD cbBitsSrc;
DWORD iUsageSrc;
DWORD iStartScan;
DWORD cScans;
};
