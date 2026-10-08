//
// Verified OblivionNew 2026-09-26 for DX11 audit: manual screenshot uses renderer+0x280 device; GetBackBuffer(0,0,MONO,&surface) at 0x4117E9 (device vtable+0x48), surface GetDesc at 0x411813 (+0x30), LockRect(full surface, flags0x800=D3DLOCK_NOSYSLOCK) at 0x41184D (+0x34), then UnlockRect0x411915 and Release0x411921. It copies locked rows to CPU NiPixelData/BMP. No GetFrontBufferData call occurs in this function. This is distinct from save-thumbnail Screenshot_RenderTexture at0x411B70. No claim about other modules/frontbuffer callers.
int __cdecl TakeScreenshot(char *a1)
{
  _DWORD *v1; // esi
  int v2; // ebx
  int v3; // ecx
  const void *v4; // eax
  NiPixelData *v6; // eax
  NiPixelData *v7; // edi
  int v8; // ebx
  char *v9; // esi
  char *v10; // ebp
  char *v11; // eax
  char v12; // cl
  int v13; // ebx
  int v14; // edx
  int v15; // ebp
  FreeEntry *v16; // esi
  int v17; // ecx
  int v18; // eax
  _BYTE *v19; // eax
  int v20; // edx
  char v21; // bl
  unsigned int v22; // ebp
  int v23; // ebx
  _BYTE v24[12]; // [esp+30h] [ebp-300h]
  int v25; // [esp+4Ch] [ebp-2E4h] BYREF
  int i; // [esp+50h] [ebp-2E0h]
  NiPixelData *v27; // [esp+54h] [ebp-2DCh]
  int v28; // [esp+58h] [ebp-2D8h]
  int v29; // [esp+5Ch] [ebp-2D4h]
  int v30; // [esp+60h] [ebp-2D0h]
  int v31; // [esp+64h] [ebp-2CCh]
  int v32; // [esp+68h] [ebp-2C8h]
  int v33; // [esp+6Ch] [ebp-2C4h]
  int v34; // [esp+70h] [ebp-2C0h]
  _DWORD v35[2]; // [esp+74h] [ebp-2BCh] BYREF
  __int16 v36; // [esp+7Ch] [ebp-2B4h] BYREF
  unsigned int v37; // [esp+7Eh] [ebp-2B2h]
  __int16 v38; // [esp+82h] [ebp-2AEh]
  __int16 v39; // [esp+84h] [ebp-2ACh]
  int v40; // [esp+86h] [ebp-2AAh]
  int v41; // [esp+8Ah] [ebp-2A6h]
  int v42; // [esp+8Eh] [ebp-2A2h]
  int v43; // [esp+92h] [ebp-29Eh]
  __int16 v44; // [esp+96h] [ebp-29Ah]
  __int16 v45; // [esp+98h] [ebp-298h]
  int v46; // [esp+9Ah] [ebp-296h]
  unsigned int v47; // [esp+9Eh] [ebp-292h]
  int v48; // [esp+A2h] [ebp-28Eh]
  int v49; // [esp+A6h] [ebp-28Ah]
  int v50; // [esp+AAh] [ebp-286h]
  int v51; // [esp+AEh] [ebp-282h]
  NiSurfaceData v52; // [esp+B4h] [ebp-27Ch] BYREF
  char v53[32]; // [esp+F8h] [ebp-238h] BYREF
  wchar_t v54[130]; // [esp+118h] [ebp-218h] BYREF
  char v55[260]; // [esp+21Ch] [ebp-114h] BYREF
  unsigned int v56; // [esp+32Ch] [ebp-4h]

  v1 = (_DWORD *)MEMORY[0xB350D8]; /*0x41178b*/
  InitSurfacEData(&v52); /*0x411795*/
  v2 = v1[0xA0]; /*0x4117a2*/
  v3 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v1 + 0x8C))(v1) + 0x10); /*0x4117ac*/
  if ( v3 ) /*0x4117b1*/
    v4 = (const void *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0xC))(v3); /*0x4117b8*/
  else
    v4 = 0; /*0x4117bc*/
  qmemcpy(&v52, v4, sizeof(v52)); /*0x4117ce*/
  NiDX9Renderer_ConvertPixelFormatToD3DFormat((int)&v52); /*0x4117d0*/
  if ( (*(int (__stdcall **)(int, _DWORD, _DWORD, _DWORD, int *))(*(_DWORD *)v2 + 0x48))(v2, 0, 0, 0, &v25) )
    return PrintError("ScreenShot: Unable to get back buffer.");
  if ( (*(int (__stdcall **)(int, char *))(*(_DWORD *)v25 + 0x30))(v25, v53) )
  {
    PrintError("ScreenShot: Unable to aquire BackBuffer Description");
    return (*(int (__stdcall **)(int))(*(_DWORD *)v25 + 8))(v25); /*0x411832*/
  }
  if ( (*(int (__stdcall **)(int, _DWORD *, _DWORD, int))(*(_DWORD *)v25 + 0x34))(v25, v35, 0, 0x800) )
  {
    if ( MEMORY[0xB34FC0] < 2 )
      PrintError("ScreenShot: Not enabled. Add 'bAllowScreenShot = 1' to the [Display] section of Oblivion.INI file.");
    else
      PrintError("ScreenShot: Not enabled. Can't lock the backbuffer when multisampling is enabled.");
    return (*(int (__stdcall **)(int))(*(_DWORD *)v25 + 8))(v25); /*0x411861*/
  }
  v6 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x41186c*/
  v29 = (int)v6; /*0x411874*/
  v56 = 0; /*0x41187a*/
  if ( v6 ) /*0x411885*/
  {
    v7 = NiPixelData::NiPixelData(v6, nWidth, nHeight, (int)&v52, 1u, 1); /*0x4118a8*/
    v27 = v7; /*0x4118aa*/
  }
  else
  {
    v7 = 0; /*0x4118b0*/
    v27 = 0; /*0x4118b2*/
  }
  v8 = *((_DWORD *)v7 + 0x19) * **((_DWORD **)v7 + 0x15); /*0x4118c0*/
  v9 = (char *)(*((_DWORD *)v7 + 0x14) + **((_DWORD **)v7 + 0x17)); /*0x4118c4*/
  v10 = (char *)v35[1]; /*0x4118ce*/
  v56 = 0xFFFFFFFF; /*0x4118d2*/
  for ( i = 0; i < nHeight; ++i ) /*0x4118e5*/
  {
    *(_DWORD *)&v24[4] = v8; /*0x4118e7*/
    memcpy(v9, v10, *(size_t *)&v24[4]); /*0x4118ea*/
    v10 += v35[0]; /*0x4118f3*/
    v9 += v8; /*0x4118fd*/
  }
  (*(void (__stdcall **)(int))(*(_DWORD *)v25 + 0x38))(v25); /*0x411915*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v25 + 8))(v25); /*0x411921*/
  v11 = a1; /*0x411923*/
  if ( a1 ) /*0x411933*/
  {
    do /*0x411941*/
    {
      v12 = *v11; /*0x411937*/
      v11[(char *)v54 - a1] = *v11; /*0x411939*/
      ++v11; /*0x41193c*/
    }
    while ( v12 ); /*0x411941*/
  }
  else
  {
    _sprintf((char *)v54, "%s%d.bmp", off_B03164[0], dword_B0316C); /*0x411958*/
  }
  v29 = _wopen(v54, 0x8301, 0x180); /*0x41197d*/
  if ( v29 == 0xFFFFFFFF )
  {
    PrintError("ScreenShot: Unable to create file '%s'.", (const char *)v54);
  }
  else
  {
    v13 = **((_DWORD **)v7 + 0x15); /*0x41198a*/
    v14 = *((_DWORD *)v7 + 0x19); /*0x411991*/
    v15 = *((_DWORD *)v7 + 0x14) + **((_DWORD **)v7 + 0x17); /*0x411999*/
    v30 = nHeight; /*0x41199c*/
    v32 = v14; /*0x4119a3*/
    *(_DWORD *)&v24[4] = 1; /*0x4119a7*/
    *(_DWORD *)v24 = 3 * v13 * nHeight; /*0x4119ac*/
    v31 = v13; /*0x4119b2*/
    v16 = j_MemoryHeap_Alloc(&FormHeap, v15, *(size_t *)v24, *(int *)&v24[8]); /*0x4119bb*/
    v17 = 0; /*0x4119c4*/
    i = v30 - 1; /*0x4119c8*/
    if ( v30 - 1 >= 0 ) /*0x4119cc*/
    {
      v18 = v13 * v32 * (v30 - 1); /*0x4119dc*/
      v28 = v18; /*0x4119e1*/
      v34 = -(v13 * v32); /*0x4119e5*/
      do /*0x411a49*/
      {
        if ( v13 ) /*0x4119eb*/
        {
          v19 = (_BYTE *)(v15 + 1 + v18); /*0x4119f6*/
          v20 = v31; /*0x4119fa*/
          v33 = 1; /*0x411a01*/
          do /*0x411a29*/
          {
            *((_BYTE *)&v16->prev + v17) = v19[0xFFFFFFFF]; /*0x411a09*/
            *((_BYTE *)&v16->prev + v17 + 1) = *v19; /*0x411a0f*/
            v21 = v19[v33]; /*0x411a17*/
            v19 += v32; /*0x411a1b*/
            *((_BYTE *)&v16->prev + v17 + 2) = v21; /*0x411a1f*/
            v17 += 3; /*0x411a23*/
            --v20; /*0x411a26*/
          }
          while ( v20 ); /*0x411a29*/
          v7 = v27; /*0x411a2b*/
          v18 = v28; /*0x411a2f*/
          v13 = v31; /*0x411a33*/
        }
        v18 += v34; /*0x411a37*/
        --i; /*0x411a3b*/
        v28 = v18; /*0x411a45*/
      }
      while ( i >= 0 ); /*0x411a49*/
    }
    v38 = 0; /*0x411a56*/
    v39 = 0; /*0x411a5b*/
    v46 = 0; /*0x411a60*/
    v48 = 0; /*0x411a64*/
    v49 = 0; /*0x411a68*/
    v50 = 0; /*0x411a6c*/
    v51 = 0; /*0x411a70*/
    v22 = 3 * v13 * v30; /*0x411a74*/
    v42 = v13; /*0x411a7d*/
    v23 = v29; /*0x411a81*/
    v36 = 0x4D42; /*0x411a8a*/
    v37 = v22 + 0x36; /*0x411a91*/
    v40 = 0x36; /*0x411a95*/
    v41 = 0x28; /*0x411a9d*/
    v43 = v30; /*0x411aa5*/
    v44 = 1; /*0x411aa9*/
    v45 = 0x18; /*0x411ab0*/
    v47 = v22; /*0x411ab7*/
    _write(v29, &v36, 0x36u); /*0x411abb*/
    _write(v23, v16, v22); /*0x411ac3*/
    _close(v23); /*0x411ac9*/
    MemoryHeap_Free_checked(v16); /*0x411ad7*/
    if ( !a1 )
    {
      _sprintf(v55, "ScreenShot: File '%s' created.", (const char *)v54);
      GameUI_QueueMessage(v55, 0, 1u, 5.0); /*0x411b18*/
      ++dword_B0316C; /*0x411b20*/
    }
  }
  return (**(int (__thiscall ***)(NiPixelData *, int))v7)(v7, 1); /*0x411b48*/
}
