// Oblivion-authoritative NiDX9Renderer::FastCopy. Rejects lost-device, missing-surface, and incompatible-format cases; converts an optional source rectangle plus destination X/Y into D3D RECTs and calls IDirect3DDevice9::StretchRect with D3DTEXF_NONE. Intended for format-compatible copies.
bool __thiscall NiDX9Renderer::FastCopy(
        NiDX9Renderer *this,
        const Ni2DBuffer *source,
        Ni2DBuffer *destination,
        const void *sourceRect,
        unsigned int destinationX,
        unsigned int destinationY)
{
  Ni2DBuffer *Surface; // ecx
  NiDX92DBufferData *data; // esi
  NiDX92DBufferData *v10; // edi
  NiSurfaceData *v11; // eax
  IDirect3DSurface9 *v12; // edi
  IDirect3DDevice9 *device; // eax
  IDirect3DDevice9Vtbl *lpVtbl; // edx
  signed int v15; // eax
  void *v16; // ecx
  int v17; // [esp-Ch] [ebp-30h]
  _DWORD v18[2]; // [esp+4h] [ebp-20h] BYREF
  int v19; // [esp+Ch] [ebp-18h]
  int v20; // [esp+10h] [ebp-14h]
  _DWORD v21[4]; // [esp+14h] [ebp-10h] BYREF

  if ( this->member.lostDevice ) /*0x764fe6*/
    return 0; /*0x764fef*/
  Surface = destination; /*0x764ffc*/
  data = source->members.data; /*0x765001*/
  v10 = destination->members.data; /*0x765007*/
  if ( data /*0x765050*/
    && v10
    && (v17 = (int)v10->__vftable->GetSurfaceData(destination->members.data),
        v11 = data->__vftable->GetSurfaceData(data),
        !sub_70E260(v11, v17))
    && (Surface = (Ni2DBuffer *)data->member.Surface, v12 = v10->member.Surface, Surface)
    && v12 )
  {
    if ( sourceRect ) /*0x76505c*/
    {
      v18[0] = *(_DWORD *)sourceRect; /*0x765060*/
      v19 = *((_DWORD *)sourceRect + 1); /*0x765067*/
      v18[1] = *((_DWORD *)sourceRect + 2); /*0x76506e*/
      v20 = *((_DWORD *)sourceRect + 3); /*0x765075*/
    }
    v21[2] = destinationX + v19; /*0x765083*/
    v21[0] = destinationX; /*0x76508b*/
    device = this->member.device; /*0x765097*/
    v21[1] = destinationY; /*0x76509d*/
    v21[3] = destinationY + v20; /*0x7650a1*/
    lpVtbl = device->lpVtbl; /*0x7650a5*/
    if ( sourceRect ) /*0x7650a9*/
      v15 = (signed int)lpVtbl->StretchRect( /*0x7650b6*/
                          device,
                          (IDirect3DSurface9 *)Surface,
                          (const RECT *)v18,
                          v12,
                          (const RECT *)v21,
                          D3DTEXF_NONE);        // FastCopy StretchRect commit: source/destination surfaces with optional rectangles, filter D3DTEXF_NONE.
    else
      v15 = (signed int)lpVtbl->StretchRect(device, (IDirect3DSurface9 *)Surface, 0, v12, 0, D3DTEXF_NONE); /*0x7650c5*/
    if ( v15 >= 0 ) /*0x7650c9*/
    {
      return 1; /*0x7650ec*/
    }
    else
    {
      D3D9_HResultToString(v15); /*0x7650cc*/
      Shared_NoOpVirtual_60D0A0(v16); /*0x7650d7*/
      return 0; /*0x7650e1*/
    }
  }
  else
  {
    Shared_NoOpVirtual_60D0A0(Surface); /*0x765106*/
    return 0; /*0x765110*/
  }
}
