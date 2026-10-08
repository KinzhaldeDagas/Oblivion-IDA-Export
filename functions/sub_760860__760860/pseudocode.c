// DX10OBSE resource decode: copies one source mip/slice into a locked D3D9 texture surface, preserving pitch and DXT block row layout.
void __usercall sub_760860(int a1@<edi>, _DWORD *a2, int a3, int a4, int a5)
{
  signed int v5; // eax
  void *v6; // ecx
  signed int v7; // eax
  void *v8; // ecx
  unsigned int v9; // esi
  int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // edi
  int v13; // ebp
  unsigned int v14; // edi
  char *v15; // ebx
  char *v16; // esi
  unsigned int v17; // ebp
  size_t v18; // [esp+4h] [ebp-40h]
  int Size; // [esp+18h] [ebp-2Ch]
  unsigned int v20; // [esp+1Ch] [ebp-28h] BYREF
  void *Dst; // [esp+20h] [ebp-24h]
  int v22[7]; // [esp+24h] [ebp-20h] BYREF
  unsigned int v23; // [esp+40h] [ebp-4h]

  v5 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)a4 + 0x30))(a4, v22); /*0x760873*/
  if ( v5 >= 0 ) /*0x760877*/
  {
    v7 = (*(int (__stdcall **)(int, unsigned int *, _DWORD, _DWORD))(*(_DWORD *)a4 + 0x34))(a4, &v20, 0, 0);// DX11 ownership audit (OblivionNew, 2026-09-19): source mip upload calls IDirect3DSurface9::LockRect at vtable+34h with RECT=null and flags=0, after GetDesc at +30h. CPU writes therefore arrive through a surface alias, not only IDirect3DTexture9::LockRect; parent/subresource alias ownership must be migrated together. /*0x7608a1*/
    if ( v7 >= 0 ) /*0x7608a5*/
    {
      v9 = v20; /*0x7608c7*/
      v10 = *(_DWORD *)(a2[0x15] + 4 * a3);     // Per-level copy reads the source width/height arrays for the selected mip and preserves locked-surface pitch; DXT formats use block-row sizing. /*0x7608d0*/
      v11 = *(_DWORD *)(a2[0x16] + 4 * a3); /*0x7608d6*/
      HIDWORD(v18) = a1; /*0x7608de*/
      v12 = v10 * a2[0x19]; /*0x7608e2*/
      if ( v11 > v23 ) /*0x7608e7*/
        v11 = v23; /*0x7608e9*/
      v13 = a2[3]; /*0x7608eb*/
      if ( v13 >= 4 && v13 <= 6 ) /*0x7608f6*/
      {
        v9 = v20 >> 2; /*0x7608f8*/
        v14 = v10 + 3; /*0x760903*/
        if ( v22[0] == 0x31545844 ) /*0x760906*/
          v12 = (v14 >> 1) & 0x7FFFFFE; /*0x76090a*/
        else
          v12 = v14 & 0xFFFFFFC; /*0x760912*/
        v11 = (v11 + 3) & 0xFFFFFFC; /*0x76091b*/
      }
      if ( v12 == v9 )                          // Verified native compressed-copy arithmetic: for NiPixelData format values 4..6, compare (locked Pitch >> 2) against source pseudo-row bytes: DXT1 ((width+3)>>1)&07FFFFFEh, other DXT (width+3)&~3; pseudo-row count=(min(sourceHeight,surfaceHeight)+3)&~3. Equality takes contiguous memcpy of pseudo-row bytes*count, equal to packed BC storage. Unequal branch copies min(pseudo-row bytes, Pitch>>2) per iteration but advances destination by ORIGINAL Pitch and source by pseudo-row bytes. Do not assume arbitrary padded BC pitch has ordinary block-row behavior here; owned frontend pitch policy must account for this exact observed caller. /*0x760923*/
      {
        LODWORD(v18) = v12 * v11; /*0x760984*/
        memcpy( /*0x76099c*/
          Dst,
          (const void *)(a2[0x14] + *(_DWORD *)(a2[0x17] + 4 * a3) + a5 * *(_DWORD *)(a2[0x17] + 4 * a2[0x18])),
          v18);
      }
      else
      {
        Size = v9; /*0x760925*/
        if ( v12 <= v9 ) /*0x760929*/
          Size = v12; /*0x76092b*/
        v15 = (char *)Dst; /*0x760940*/
        v16 = (char *)(a2[0x14] + *(_DWORD *)(a2[0x17] + 4 * a3) + a5 * *(_DWORD *)(a2[0x17] + 4 * a2[0x18])); /*0x760944*/
        if ( v11 ) /*0x760949*/
        {
          v17 = v11; /*0x76094b*/
          do /*0x760968*/
          {
            LODWORD(v18) = Size; /*0x760954*/
            memcpy(v15, v16, v18); /*0x760957*/
            v15 += v20; /*0x76095c*/
            v16 += v12; /*0x760963*/
            --v17; /*0x760965*/
          }
          while ( v17 ); /*0x760968*/
        }
      }
      (*(void (__stdcall **)(int))(*(_DWORD *)a4 + 0x38))(a4);// DX11 ownership audit: after native CPU mip copy, calls IDirect3DSurface9::UnlockRect at vtable+38h. Return HRESULT is not tested by this caller. Renderer migration still must stage bytes before Original Unlock and publish only with its actual completion result; caller behavior does not prove successful upload. /*0x7609ae*/
    }
    else
    {
      D3D9_HResultToString(v7); /*0x7608a8*/
      Shared_NoOpVirtual_60D0A0(v8); /*0x7608b3*/
    }
  }
  else
  {
    D3D9_HResultToString(v5); /*0x76087a*/
    Shared_NoOpVirtual_60D0A0(v6); /*0x760885*/
  }
}
