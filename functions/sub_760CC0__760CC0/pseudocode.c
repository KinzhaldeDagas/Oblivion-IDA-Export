// DX10OBSE resource decode: fills the D3D9 texture levels from converted NiPixelData by locking each texture level/surface and copying rows/blocks.
void __thiscall sub_760CC0(NiDX9SourceTextureData *this, _DWORD *a2)
{
  IDirect3DBaseTexture9 *dTexture; // eax
  IDirect3DBaseTexture9 *v4; // ebx
  UInt32 v5; // eax
  int v6; // edi
  signed int v7; // eax
  void *v8; // ecx
  int v9; // [esp+14h] [ebp-4h] BYREF

  dTexture = this->dTexture; /*0x760cc4*/
  if ( dTexture ) /*0x760cc9*/
  {
    if ( dTexture->lpVtbl->GetType(dTexture) != D3DRTYPE_CUBETEXTURE /*0x760cee*/
      && this->dTexture->lpVtbl->GetType(this->dTexture) != D3DRTYPE_VOLUMETEXTURE )
    {
      v4 = this->dTexture; /*0x760cf1*/
      v5 = a2[0x18];                            // Upload records source NiPixelData level count (a2[0x18], byte +0x60) before iterating every non-skipped D3D level. /*0x760cf9*/
      this->Levels = v5; /*0x760cfd*/
      v6 = 0; /*0x760d00*/
      if ( v5 != this->LevelsSkipped ) /*0x760d02*/
      {
        while ( 1 ) /*0x760d13*/
        {
          v7 = ((int (__stdcall *)(IDirect3DBaseTexture9 *, int, int *))v4->lpVtbl[1].AddRef)(v4, v6, &v9);// Verified call through texture vtable+48h = IDirect3DTexture9::GetSurfaceLevel(level, &surface). Each returned alias is passed to full-surface lock/copy/unlock helper 760860, then COM Release at 760D39. Source mip = destination level + LevelsSkipped. A texture-Create/Texture-Unlock-only publication queue misses this actual Oblivion upload route. /*0x760d13*/
          if ( v7 < 0 ) /*0x760d17*/
            break; /*0x760d17*/
          OB_NiDX9SourceTextureData_CopyMipToSurface_010201A0(v6, a2, v6 + this->LevelsSkipped, v9, 0);// Uploads source mip (level + LevelsSkipped) into the matching D3D9 surface. This proves authored/generated DDS mip contents are consumed per level rather than ignored. /*0x760d27*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x760d39*/
          if ( ++v6 >= this->Levels - this->LevelsSkipped ) /*0x760d46*/
            return; /*0x760d46*/
        }
        D3D9_HResultToString(v7); /*0x760d51*/
        Shared_NoOpVirtual_60D0A0(v8); /*0x760d5d*/
      }
    }
  }
}
