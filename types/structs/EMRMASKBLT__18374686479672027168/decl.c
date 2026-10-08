struct EMRMASKBLT
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
LONG xMask;
LONG yMask;
DWORD iUsageMask;
DWORD offBmiMask;
DWORD cbBmiMask;
DWORD offBitsMask;
DWORD cbBitsMask;
};
