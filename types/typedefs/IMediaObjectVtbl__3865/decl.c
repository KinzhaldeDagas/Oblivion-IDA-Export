struct IMediaObjectVtbl
{
HRESULT_0 (*QueryInterface)(IMediaObject_0 *, const IID *const, void **);
ULONG (*AddRef)(IMediaObject_0 *);
ULONG (*Release)(IMediaObject_0 *);
HRESULT_0 (*GetStreamCount)(IMediaObject_0 *, DWORD *, DWORD *);
HRESULT_0 (*GetInputStreamInfo)(IMediaObject_0 *, DWORD, DWORD *);
HRESULT_0 (*GetOutputStreamInfo)(IMediaObject_0 *, DWORD, DWORD *);
HRESULT_0 (*GetInputType)(IMediaObject_0 *, DWORD, DWORD, DMO_MEDIA_TYPE *);
HRESULT_0 (*GetOutputType)(IMediaObject_0 *, DWORD, DWORD, DMO_MEDIA_TYPE *);
HRESULT_0 (*SetInputType)(IMediaObject_0 *, DWORD, const DMO_MEDIA_TYPE *, DWORD);
HRESULT_0 (*SetOutputType)(IMediaObject_0 *, DWORD, const DMO_MEDIA_TYPE *, DWORD);
HRESULT_0 (*GetInputCurrentType)(IMediaObject_0 *, DWORD, DMO_MEDIA_TYPE *);
HRESULT_0 (*GetOutputCurrentType)(IMediaObject_0 *, DWORD, DMO_MEDIA_TYPE *);
HRESULT_0 (*GetInputSizeInfo)(IMediaObject_0 *, DWORD, DWORD *, DWORD *, DWORD *);
HRESULT_0 (*GetOutputSizeInfo)(IMediaObject_0 *, DWORD, DWORD *, DWORD *);
HRESULT_0 (*GetInputMaxLatency)(IMediaObject_0 *, DWORD, REFERENCE_TIME *);
HRESULT_0 (*SetInputMaxLatency)(IMediaObject_0 *, DWORD, REFERENCE_TIME);
HRESULT_0 (*Flush)(IMediaObject_0 *);
HRESULT_0 (*Discontinuity)(IMediaObject_0 *, DWORD);
HRESULT_0 (*AllocateStreamingResources)(IMediaObject_0 *);
HRESULT_0 (*FreeStreamingResources)(IMediaObject_0 *);
HRESULT_0 (*GetInputStatus)(IMediaObject_0 *, DWORD, DWORD *);
HRESULT_0 (*ProcessInput)(IMediaObject_0 *, DWORD, IMediaBuffer_0 *, DWORD, REFERENCE_TIME, REFERENCE_TIME);
HRESULT_0 (*ProcessOutput)(IMediaObject_0 *, DWORD, DWORD, DMO_OUTPUT_DATA_BUFFER *, DWORD *);
HRESULT_0 (*Lock)(IMediaObject_0 *, LONG);
};
