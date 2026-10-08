struct IDirect3DQuery9Vtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3DQuery9 *This, const IID *const riid, void **ppvObj);
ULONG (__stdcall *AddRef)(IDirect3DQuery9 *This);
ULONG (__stdcall *Release)(IDirect3DQuery9 *This);
HRESULT (__stdcall *GetDevice)(IDirect3DQuery9 *This, IDirect3DDevice9 **ppDevice);
D3DQUERYTYPE (__stdcall *GetType)(IDirect3DQuery9 *This);
DWORD (__stdcall *GetDataSize)(IDirect3DQuery9 *This);
HRESULT (__stdcall *Issue)(IDirect3DQuery9 *This, DWORD dwIssueFlags); ///<
                                                                       ///< [Native contract plus DX11 implementation 2026-10-03] Documented TIMESTAMP/FREQ are END-only; DISJOINT supports BEGIN/END. Previously captured native host evidence supports types10/11/12, sizes8/4/8. Modern typed service uses independent real DX11 queries for overlapping/nested intervals and distinct replacement epochs on reissue. Required prior rendering/uploads complete before boundary submission. Failed pre-execution boundary retains prior result; submitted failures cannot expose stale state. Reset/final-release retirement issues no Begin/End/GetData. Scoped WARP/production validation passed; no new native probe or deployment.
HRESULT (__stdcall *GetData)(IDirect3DQuery9 *This, void *pData, DWORD dwSize, DWORD dwGetDataFlags); ///<
                                                                                                      ///< [DX11 timing result policy 2026-10-03] Modern TIMESTAMP/FREQ preserve full UINT64 GPU values; DISJOINT returns BOOL. Exact public data sizes8/4/8 or status-only0; documented flags0/FLUSH. Pending/failed/retired reads preserve caller bytes; cached values require current generation/device health. Fresh and unpaired-disjoint undefined answers are deterministic0, not measured clock/continuity evidence. Native host permissive partial/oversize/unknown-flag quirks remain explicitly outside this policy. No CPU/native-clock frequency substitution. Facade1830 and serviceWARP481 checks; production bridge281 verifies draw/copy/queued-upload completion, overlap and owned-native calls0. Physical device-removal injection and arbitrary adapters not tested in this stage.
};
