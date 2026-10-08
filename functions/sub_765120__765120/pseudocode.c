// Oblivion-authoritative NiDX9Renderer::Copy. Builds full-surface rectangles when either rectangle is null and maps Gamebryo CopyFilterPreference 1/2 to D3DTEXF_POINT/LINEAR (otherwise NONE), then performs IDirect3DDevice9::StretchRect.
bool __thiscall NiDX9Renderer::Copy(
        NiDX9Renderer *this,
        const Ni2DBuffer *source,
        Ni2DBuffer *destination,
        const void *sourceRect,
        const void *destinationRect,
        int filterPreference)
{
  NiDX92DBufferData *data; // edx
  NiDX92DBufferData *v8; // eax
  IDirect3DSurface9 *Surface; // esi
  IDirect3DSurface9 *v10; // edi
  UInt32 height; // eax
  UInt32 width; // edx
  UInt32 v13; // edx
  int v14; // ecx
  UInt32 v15; // edx
  UInt32 v16; // eax
  UInt32 v17; // ecx
  D3DTEXTUREFILTERTYPE v18; // edx
  HRESULT v19; // eax
  void *v20; // ecx
  int v22; // [esp+8h] [ebp-20h] BYREF
  int v23; // [esp+Ch] [ebp-1Ch]
  UInt32 v24; // [esp+10h] [ebp-18h]
  UInt32 v25; // [esp+14h] [ebp-14h]
  int v26; // [esp+18h] [ebp-10h] BYREF
  int v27; // [esp+1Ch] [ebp-Ch]
  UInt32 v28; // [esp+20h] [ebp-8h]
  UInt32 v29; // [esp+24h] [ebp-4h]

  if ( this->member.lostDevice ) /*0x765126*/
    return 0; /*0x765132*/
  data = destination->members.data; /*0x76513f*/
  v8 = source->members.data; /*0x765147*/
  if ( v8 && data && (Surface = v8->member.Surface, v10 = data->member.Surface, Surface) && v10 ) /*0x76516c*/
  {
    if ( sourceRect ) /*0x765178*/
    {
      v26 = *(_DWORD *)sourceRect; /*0x76517c*/
      v28 = *((_DWORD *)sourceRect + 1); /*0x765183*/
      height = *((_DWORD *)sourceRect + 3); /*0x76518a*/
      v27 = *((_DWORD *)sourceRect + 2); /*0x76518d*/
    }
    else
    {
      width = source->members.width; /*0x765193*/
      height = source->members.height; /*0x765196*/
      v26 = 0; /*0x765199*/
      v28 = width; /*0x76519d*/
      v27 = 0; /*0x7651a1*/
    }
    v29 = height; /*0x7651a5*/
    if ( destinationRect ) /*0x7651af*/
    {
      v13 = *((_DWORD *)destinationRect + 1); /*0x7651b3*/
      v22 = *(_DWORD *)destinationRect; /*0x7651b6*/
      v14 = *((_DWORD *)destinationRect + 2); /*0x7651ba*/
      v24 = v13; /*0x7651bd*/
      v15 = *((_DWORD *)destinationRect + 3); /*0x7651c1*/
      v23 = v14; /*0x7651c4*/
      v25 = v15; /*0x7651c8*/
    }
    else
    {
      v16 = destination->members.width; /*0x7651ce*/
      v17 = destination->members.height; /*0x7651d1*/
      v22 = 0; /*0x7651d4*/
      v24 = v16; /*0x7651d8*/
      v23 = 0; /*0x7651dc*/
      v25 = v17; /*0x7651e0*/
    }
    if ( filterPreference == 1 ) /*0x7651eb*/
    {
      v18 = D3DTEXF_POINT; /*0x7651fd*/
    }
    else if ( filterPreference == 2 ) /*0x7651f0*/
    {
      v18 = D3DTEXF_LINEAR; /*0x7651f6*/
    }
    else
    {
      v18 = D3DTEXF_NONE; /*0x7651f2*/
    }
    v19 = this->member.device->lpVtbl->StretchRect(this->member.device, Surface, &v26, v10, &v22, v18);// General Copy StretchRect commit; the final argument is the translated D3DTEXTUREFILTERTYPE. /*0x765222*/
    if ( (int)v19 >= 0 ) /*0x765226*/
    {
      return 1; /*0x76524b*/
    }
    else
    {
      D3D9_HResultToString((unsigned int)v19); /*0x765229*/
      Shared_NoOpVirtual_60D0A0(v20); /*0x765234*/
      return 0; /*0x76523f*/
    }
  }
  else
  {
    Shared_NoOpVirtual_60D0A0(destination); /*0x76527c*/
    return 0; /*0x765285*/
  }
}
