NiSourceTexture *__userpurge sub_45D5F0@<eax>(
        _DWORD *this@<ecx>,
        char bp0@<bpl>,
        int a3,
        int a4,
        _DWORD *a5,
        void *Dst,
        _WORD *a7,
        _BYTE *a8,
        float *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12)
{
  int v13; // edi
  FreeEntry *v14; // eax
  void (__cdecl *v15)(int, void *, int, int *, int); // edx
  _DWORD *v16; // ecx
  int *v17; // eax
  int v18; // edx
  _BYTE *v19; // eax
  unsigned __int8 v20; // cl
  void *v21; // edx
  char *v22; // eax
  bool v23; // zf
  int v24; // edi
  bool v25; // cf
  __int16 *v26; // eax
  __int16 v27; // cx
  _BYTE *v28; // ecx
  unsigned __int8 v29; // al
  _BYTE *v30; // edx
  char *v31; // ecx
  int v32; // edi
  char *v33; // ecx
  char v34; // al
  int *v35; // eax
  int v36; // ecx
  int v37; // ecx
  int *v38; // eax
  int v39; // ecx
  int v40; // edx
  int v41; // edi
  int v42; // ebp
  int *v43; // eax
  LPSYSTEMTIME v44; // eax
  _DWORD *v45; // eax
  _DWORD *v46; // eax
  int v47; // ecx
  unsigned int *v48; // eax
  NiSourceTexture *TexturePixelData; // edi
  _DWORD *v50; // edx
  unsigned int v51; // ebx
  int *v52; // eax
  int v53; // edi
  NiPixelData *v54; // eax
  NiPixelData *v55; // ebp
  int v56; // edi
  void *v58; // [esp-10h] [ebp-94h]
  void *v59; // [esp-Ch] [ebp-90h]
  const void *v60; // [esp-8h] [ebp-8Ch]
  size_t v61; // [esp-4h] [ebp-88h]
  int v62; // [esp+0h] [ebp-84h]
  void *v63; // [esp+14h] [ebp-70h]
  PixelLayout a2[3]; // [esp+18h] [ebp-6Ch] BYREF
  struct _SYSTEMTIME LocalTime; // [esp+24h] [ebp-60h] BYREF
  _BYTE v66[68]; // [esp+34h] [ebp-50h] BYREF
  unsigned int v67; // [esp+80h] [ebp-4h]

  v13 = a4;
  v14 = j_MemoryHeap_Alloc(&FormHeap, bp0, (unsigned int)a4 | 0x100000000LL, v62);
  *(this + 5) = v14;
  if ( !v14 )
    sub_404EC0("Could not create save buffer, out of memory.");
  v15 = *(void (__cdecl **)(int, void *, int, int *, int))(a3 + 4);
  v58 = (void *)*(this + 5);
  v63 = v58;
  a4 = 1;
  v15(a3, v58, v13, &a4, 1);
  v16 = a5;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x38u )
  {
    v17 = (int *)*(this + 5);
    v18 = *v17;
    *(this + 5) = v17 + 1;
    if ( v16 )
      *v16 = v18;
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x38u )
  {
    if ( v16 )
      *v16 = 0;
  }
  v19 = (_BYTE *)*(this + 5);
  v20 = *v19;
  v21 = Dst;
  v22 = v19 + 1;
  v23 = Dst == 0;
  *(this + 5) = v22;
  if ( v23 )
  {
    *(this + 5) = &v22[v20];
  }
  else
  {
    v24 = v20;
    LODWORD(v61) = v20;
    memcpy(v21, v22, v61);
    *(this + 5) += v24;
  }
  v25 = LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x34u;
  *(float *)&a4 = 0.0;
  if ( v25 )
  {
    v27 = a4;
  }
  else
  {
    v26 = (__int16 *)*(this + 5);
    v27 = *v26;
    *(this + 5) = v26 + 1;
  }
  if ( a7 )
    *a7 = v27;
  v28 = (_BYTE *)*(this + 5);
  v29 = *v28;
  v30 = a8;
  v31 = v28 + 1;
  v23 = a8 == 0;
  *(this + 5) = v31;
  if ( v23 )
  {
    if ( v29 )
      *(this + 5) = &v31[v29];
  }
  else if ( v29 )
  {
    v32 = v29;
    LODWORD(v61) = v29;
    memcpy(v30, v31, v61);
    *(this + 5) += v32;
  }
  else
  {
    v33 = (char *)dword_B38728;
    do
    {
      v34 = *v33;
      *v30++ = *v33++;
    }
    while ( v34 );
  }
  v35 = (int *)*(this + 5);
  v36 = *v35;
  *(this + 5) = v35 + 1;
  a4 = v36;
  if ( a9 )
    *a9 = *(float *)&a4;
  v37 = 0;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x1Du )
  {
    v38 = (int *)*(this + 5);
    v37 = *v38;
    *(this + 5) = v38 + 1;
  }
  if ( a11 )
    *a11 = v37;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x38u )
  {
    v43 = (int *)*(this + 5);
    v39 = *v43;
    v40 = v43[1];
    v41 = v43[2];
    v42 = v43[3];
    *(this + 5) = v43 + 4;
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x38u )
  {
    v44 = sub_4301A0(a3, &LocalTime);
    v39 = *(_DWORD *)&v44->wYear;
    v40 = *(_DWORD *)&v44->wDayOfWeek;
    v41 = *(_DWORD *)&v44->wHour;
    v42 = *(_DWORD *)&v44->wSecond;
  }
  v45 = a10;
  if ( a10 )
  {
    *a10 = v39;
    v45[1] = v40;
    v45[2] = v41;
    v45[3] = v42;
  }
  v46 = (_DWORD *)*(this + 5);
  v47 = *v46;
  v48 = v46 + 1;
  TexturePixelData = 0;
  *(this + 5) = v48;
  if ( v47 )
  {
    v50 = a12;
    if ( a12 )
    {
      v51 = *v48;
      v52 = (int *)(v48 + 1);
      *(this + 5) = v52;
      v53 = *v52;
      *(this + 5) = v52 + 1;
      *v50 = v53;
      if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x2Eu )
        *(this + 5) += 0x24;
      sub_70F010(v66, &unk_B25E48);
      v54 = (NiPixelData *)FormHeapAlloc(0x70u);
      a4 = (int)v54;
      v55 = 0;
      v67 = 0;
      if ( v54 )
        v55 = NiPixelData::NiPixelData(v54, v51, v51, (int)v66, 1u, 1);
      v56 = 3 * v51 * v53;
      LODWORD(v61) = v56;
      v60 = (const void *)*(this + 5);
      v59 = (void *)(*((_DWORD *)v55 + 0x14) + **((_DWORD **)v55 + 0x17));
      v67 = 0xFFFFFFFF;
      memcpy(v59, v60, v61);
      *(this + 5) += v56;
      a2[0] = kPixelLayout_TrueColor32;
      a2[2] = kPixelLayout_Palettized8;
      a2[1] = kPixelLayout_Palettized8;
      TexturePixelData = NiSourceTexture::LoadTexturePixelData(v55, a2);
      InterlockedIncrement((volatile LONG *)&TexturePixelData->members);
    }
    else
    {
      *(this + 5) = (char *)v48 + v47;
    }
  }
  MemoryHeap_Free_checked(v63);
  *(this + 5) = 0;
  return TexturePixelData;
}
