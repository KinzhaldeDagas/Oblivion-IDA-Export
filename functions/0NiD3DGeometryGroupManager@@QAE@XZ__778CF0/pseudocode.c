// Pass225: NiD3DGeometryGroupManager constructor; stores D3D device and vertex-buffer manager used for screen-texture +0x1C admission.
// DX11 authority audit 2026-10-01: Verified factory, not a thiscall constructor: allocates 1C bytes, calls base ctor, installs A8A778, zeroes fields, retains device through COM +4 at 778D34 and stores it at +10; vertex-buffer-manager argument stored at +14. Caller NiRenderer_Create 76A81D. Verified Fallout family 827C2938 Create has same allocation/initialization/ownership, with Xenon-specific device ABI.
NiD3DGeometryGroupManager *__cdecl NiD3DGeometryGroupManager_Create(
        IDirect3DDevice9 *device,
        void *vertexBufferManager)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)FormHeapAlloc(0x1Cu); /*0x778cf4*/
  v3 = v2; /*0x778cf9*/
  if ( v2 ) /*0x778d02*/
  {
    NiGeometryGroupManager::NiGeometryGrouypManager(v2); /*0x778d06*/
    *v3 = &NiD3DGeometryGroupManager::`vftable'; /*0x778d0b*/
    v3[1] = 0; /*0x778d11*/
    v3[2] = 0; /*0x778d14*/
    v3[3] = 0; /*0x778d17*/
    v3[4] = 0; /*0x778d1a*/
    v3[5] = 0; /*0x778d1d*/
    *((_BYTE *)v3 + 0x18) = 0; /*0x778d20*/
  }
  else
  {
    v3 = 0; /*0x778d25*/
  }
  v3[4] = device; /*0x778d2b*/
  device->lpVtbl->AddRef(device); /*0x778d34*/
  v3[5] = vertexBufferManager; /*0x778d3a*/
  return (NiD3DGeometryGroupManager *)v3; /*0x778d3f*/
}
