struct tagUPDATELAYEREDWINDOWINFO
{
DWORD cbSize;
HDC hdcDst;
const POINT *pptDst;
const SIZE *psize;
HDC hdcSrc;
const POINT *pptSrc;
COLORREF crKey;
const BLENDFUNCTION *pblend;
DWORD dwFlags;
const RECT *prcDirty;
};
