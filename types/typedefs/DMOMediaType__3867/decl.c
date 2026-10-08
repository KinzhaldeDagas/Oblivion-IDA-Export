struct _DMOMediaType
{
GUID majortype;
GUID subtype;
BOOL bFixedSizeSamples;
BOOL bTemporalCompression;
ULONG lSampleSize;
GUID formattype;
IUnknown_0 *pUnk;
ULONG cbFormat;
BYTE *pbFormat;
};
