struct _D3DTRANSFORMDATA
{
DWORD dwSize;
LPVOID lpIn;
DWORD dwInSize;
LPVOID lpOut;
DWORD dwOutSize;
LPD3DHVERTEX lpHOut;
DWORD dwClip;
DWORD dwClipIntersection;
DWORD dwClipUnion;
D3DRECT drExtent;
};
