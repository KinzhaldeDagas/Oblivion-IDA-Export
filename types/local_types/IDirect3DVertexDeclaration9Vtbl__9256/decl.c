struct IDirect3DVertexDeclaration9Vtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3DVertexDeclaration9 *This, const IID *const riid, void **ppvObj);
ULONG (__stdcall *AddRef)(IDirect3DVertexDeclaration9 *This);
ULONG (__stdcall *Release)(IDirect3DVertexDeclaration9 *This);
HRESULT (__stdcall *GetDevice)(IDirect3DVertexDeclaration9 *This, IDirect3DDevice9 **ppDevice);
HRESULT (__stdcall *GetDeclaration)(IDirect3DVertexDeclaration9 *This, D3DVERTEXELEMENT9 *pElement, UINT *pNumElements); ///<
                                                                                                                         ///<
                                                                                                                         ///< [Scoped native API measurements 2026-10-02; stage-owned-declaration-factory] GetDeclaration pNumElements is OUTPUT, not an input capacity: tested initial 0,1,2,3,256,UINT_MAX all wrote the full 3-element declaration, exact bytes including END, with intact following guard. Null pElement queried count. Existing declaration GetDeclaration during a failed native Reset returned D3DERR_INVALIDCALL. Owned implementation mirrors these measured rules, with safe invalid-pointer rejection and retained operation/object lifetime. Measurements are native D3D9 host evidence, not a newly observed Oblivion engine callsite.
};
