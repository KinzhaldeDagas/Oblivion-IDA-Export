struct IThumbnailExtractorVtbl
{
HRESULT_0 (*QueryInterface)(IThumbnailExtractor_0 *, const IID *, void **);
ULONG (*AddRef)(IThumbnailExtractor_0 *);
ULONG (*Release)(IThumbnailExtractor_0 *);
HRESULT_0 (*ExtractThumbnail)(IThumbnailExtractor_0 *, IStorage_0 *, ULONG, ULONG, ULONG *, ULONG *, HBITMAP *);
HRESULT_0 (*OnFileUpdated)(IThumbnailExtractor_0 *, IStorage_0 *);
};
