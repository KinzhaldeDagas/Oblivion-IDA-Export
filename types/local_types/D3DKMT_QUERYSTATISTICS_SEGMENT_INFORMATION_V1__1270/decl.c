struct _D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION_V1
{
ULONG CommitLimit;
ULONG BytesCommitted;
ULONG BytesResident;
__declspec(align(8)) D3DKMT_QUERYSTATISTICS_MEMORY Memory;
ULONG Aperture;
__declspec(align(8)) ULONGLONG TotalBytesEvictedByPriority[5];
ULONG64 SystemMemoryEndAddress;
$6755D7271A681E90454AB1583A43C093 PowerFlags;
ULONG64 Reserved[7];
};
