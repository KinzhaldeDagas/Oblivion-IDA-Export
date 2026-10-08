struct EMRSTRETCHBLT
{
EMR emr;
RECTL rclBounds;
LONG xDest;
LONG yDest;
LONG cxDest;
LONG cyDest;
DWORD dwRop;
LONG xSrc;
LONG ySrc;
XFORM xformSrc;
COLORREF crBkColorSrc;
DWORD iUsageSrc;
DWORD offBmiSrc;
DWORD cbBmiSrc;
DWORD offBitsSrc;
DWORD cbBitsSrc;
LONG cxSrc;
LONG cySrc;
};
