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

  v1 = (_DWORD *)dword_B350D8;
  InitSurfacEData(&v52);
  v2 = v1[0xA0];
  v3 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v1 + 0x8C))(v1) + 0x10);
  if ( v3 )
    v4 = (const void *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0xC))(v3);
  else
    v4 = 0;
  qmemcpy(&v52, v4, sizeof(v52));
  sub_76BEF0((int)&v52);
  if ( (*(int (__stdcall **)(int, _DWORD, _DWORD, _DWORD, int *))(*(_DWORD *)v2 + 0x48))(v2, 0, 0, 0, &v25) )
    return PrintError("ScreenShot: Unable to get back buffer.");
  if ( (*(int (__stdcall **)(int, char *))(*(_DWORD *)v25 + 0x30))(v25, v53) )
  {
    PrintError("ScreenShot: Unable to aquire BackBuffer Description");
    return (*(int (__stdcall **)(int))(*(_DWORD *)v25 + 8))(v25);
  }
  if ( (*(int (__stdcall **)(int, _DWORD *, _DWORD, int))(*(_DWORD *)v25 + 0x34))(v25, v35, 0, 0x800) )
  {
    if ( iMultisample < 2 )
      PrintError("ScreenShot: Not enabled. Add 'bAllowScreenShot = 1' to the [Display] section of Oblivion.INI file.");
    else
      PrintError("ScreenShot: Not enabled. Can't lock the backbuffer when multisampling is enabled.");
    return (*(int (__stdcall **)(int))(*(_DWORD *)v25 + 8))(v25);
  }
  v6 = (NiPixelData *)FormHeapAlloc(0x70u);
  v29 = (int)v6;
  v56 = 0;
  if ( v6 )
  {
    v7 = NiPixelData::NiPixelData(v6, nWidth, nHeight, (int)&v52, 1u, 1);
    v27 = v7;
  }
  else
  {
    v7 = 0;
    v27 = 0;
  }
  v8 = *((_DWORD *)v7 + 0x19) * **((_DWORD **)v7 + 0x15);
  v9 = (char *)(*((_DWORD *)v7 + 0x14) + **((_DWORD **)v7 + 0x17));
  v10 = (char *)v35[1];
  v56 = 0xFFFFFFFF;
  for ( i = 0; i < nHeight; ++i )
  {
    *(_DWORD *)&v24[4] = v8;
    memcpy(v9, v10, *(size_t *)&v24[4]);
    v10 += v35[0];
    v9 += v8;
  }
  (*(void (__stdcall **)(int))(*(_DWORD *)v25 + 0x38))(v25);
  (*(void (__stdcall **)(int))(*(_DWORD *)v25 + 8))(v25);
  v11 = a1;
  if ( a1 )
  {
    do
    {
      v12 = *v11;
      v11[(char *)v54 - a1] = *v11;
      ++v11;
    }
    while ( v12 );
  }
  else
  {
    _sprintf((char *)v54, "%s%d.bmp", off_B03164[0], dword_B0316C);
  }
  v29 = _wopen(v54, 0x8301, 0x180);
  if ( v29 == 0xFFFFFFFF )
  {
    PrintError("ScreenShot: Unable to create file '%s'.", (const char *)v54);
  }
  else
  {
    v13 = **((_DWORD **)v7 + 0x15);
    v14 = *((_DWORD *)v7 + 0x19);
    v15 = *((_DWORD *)v7 + 0x14) + **((_DWORD **)v7 + 0x17);
    v30 = nHeight;
    v32 = v14;
    *(_DWORD *)&v24[4] = 1;
    *(_DWORD *)v24 = 3 * v13 * nHeight;
    v31 = v13;
    v16 = j_MemoryHeap_Alloc(&FormHeap, v15, *(size_t *)v24, *(int *)&v24[8]);
    v17 = 0;
    i = v30 - 1;
    if ( v30 - 1 >= 0 )
    {
      v18 = v13 * v32 * (v30 - 1);
      v28 = v18;
      v34 = -(v13 * v32);
      do
      {
        if ( v13 )
        {
          v19 = (_BYTE *)(v15 + 1 + v18);
          v20 = v31;
          v33 = 1;
          do
          {
            *((_BYTE *)&v16->prev + v17) = v19[0xFFFFFFFF];
            *((_BYTE *)&v16->prev + v17 + 1) = *v19;
            v21 = v19[v33];
            v19 += v32;
            *((_BYTE *)&v16->prev + v17 + 2) = v21;
            v17 += 3;
            --v20;
          }
          while ( v20 );
          v7 = v27;
          v18 = v28;
          v13 = v31;
        }
        v18 += v34;
        --i;
        v28 = v18;
      }
      while ( i >= 0 );
    }
    v38 = 0;
    v39 = 0;
    v46 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v22 = 3 * v13 * v30;
    v42 = v13;
    v23 = v29;
    v36 = 0x4D42;
    v37 = v22 + 0x36;
    v40 = 0x36;
    v41 = 0x28;
    v43 = v30;
    v44 = 1;
    v45 = 0x18;
    v47 = v22;
    _write(v29, &v36, 0x36u);
    _write(v23, v16, v22);
    _close(v23);
    MemoryHeap_Free_checked(v16);
    if ( !a1 )
    {
      _sprintf(v55, "ScreenShot: File '%s' created.", (const char *)v54);
      GameUI_QueueMessage(v55, 0, 1u, 5.0);
      ++dword_B0316C;
    }
  }
  return (**(int (__thiscall ***)(NiPixelData *, int))v7)(v7, 1);
}
