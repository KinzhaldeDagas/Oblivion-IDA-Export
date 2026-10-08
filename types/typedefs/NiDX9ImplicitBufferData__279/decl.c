struct NiDX9ImplicitBufferData
{
NiDX92DBufferDataVtbl *__vftable;
NiDX92DBufferDataMembr super;
D3DPRESENT_PARAMETERS PresentParams; ///< Verified Oblivion offset0x14, size0x38. Factory76DF70 memcpy at76DFBE; allocation size0x50. Earlier separate format pointer at0x14 was erroneous. Saved reset/presentation parameters, not a NiPixelFormat pointer.
IDirect3DDevice9 *device; ///< Verified retained device at0x4C, AddRef in factory76DFC7/76DFD3 and Recreate76D735/76D73E; Release in76DC72..76DC8B. Confirms total class size0x50.
};
