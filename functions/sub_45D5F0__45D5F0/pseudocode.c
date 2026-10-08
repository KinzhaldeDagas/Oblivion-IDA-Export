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

  v13 = a4; /*0x45d619*/
  v14 = j_MemoryHeap_Alloc(&FormHeap, bp0, (unsigned int)a4 | 0x100000000LL, v62); /*0x45d628*/
  *(this + 5) = v14; /*0x45d62f*/
  if ( !v14 ) /*0x45d632*/
    sub_404EC0("Could not create save buffer, out of memory."); /*0x45d639*/
  v15 = *(void (__cdecl **)(int, void *, int, int *, int))(a3 + 4); /*0x45d64b*/
  v58 = (void *)*(this + 5); /*0x45d659*/
  v63 = v58; /*0x45d65b*/
  a4 = 1; /*0x45d65f*/
  v15(a3, v58, v13, &a4, 1); /*0x45d66a*/
  v16 = a5; /*0x45d674*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x38u ) /*0x45d680*/
  {
    v17 = (int *)*(this + 5); /*0x45d682*/
    v18 = *v17; /*0x45d685*/
    *(this + 5) = v17 + 1; /*0x45d68c*/
    if ( v16 ) /*0x45d68f*/
      *v16 = v18; /*0x45d691*/
  }
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x38u ) /*0x45d69d*/
  {
    if ( v16 ) /*0x45d6a1*/
      *v16 = 0; /*0x45d6a3*/
  }
  v19 = (_BYTE *)*(this + 5);                   // First length-prefixed header string is the exact player/character name. /*0x45d6a9*/
  v20 = *v19; /*0x45d6ac*/
  v21 = Dst; /*0x45d6ae*/
  v22 = v19 + 1; /*0x45d6b5*/
  v23 = Dst == 0; /*0x45d6b8*/
  *(this + 5) = v22; /*0x45d6ba*/
  if ( v23 ) /*0x45d6bd*/
  {
    *(this + 5) = &v22[v20]; /*0x45d6d7*/
  }
  else
  {
    v24 = v20; /*0x45d6bf*/
    LODWORD(v61) = v20; /*0x45d6c2*/
    memcpy(v21, v22, v61); /*0x45d6c5*/
    *(this + 5) += v24; /*0x45d6cd*/
  }
  v25 = LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x34u; /*0x45d6df*/
  *(float *)&a4 = 0.0; /*0x45d6e3*/
  if ( v25 ) /*0x45d6ee*/
  {
    v27 = a4; /*0x45d6fe*/
  }
  else
  {
    v26 = (__int16 *)*(this + 5); /*0x45d6f0*/
    v27 = *v26; /*0x45d6f3*/
    *(this + 5) = v26 + 1; /*0x45d6f9*/
  }
  if ( a7 ) /*0x45d70f*/
    *a7 = v27; /*0x45d711*/
  v28 = (_BYTE *)*(this + 5); /*0x45d714*/
  v29 = *v28; /*0x45d717*/
  v30 = a8; /*0x45d719*/
  v31 = v28 + 1; /*0x45d720*/
  v23 = a8 == 0; /*0x45d723*/
  *(this + 5) = v31; /*0x45d725*/
  if ( v23 ) /*0x45d728*/
  {
    if ( v29 ) /*0x45d759*/
      *(this + 5) = &v31[v29]; /*0x45d760*/
  }
  else if ( v29 ) /*0x45d72c*/
  {
    v32 = v29; /*0x45d72e*/
    LODWORD(v61) = v29; /*0x45d731*/
    memcpy(v30, v31, v61); /*0x45d734*/
    *(this + 5) += v32; /*0x45d73c*/
  }
  else
  {
    v33 = (char *)stru_B38728; /*0x45d741*/
    do /*0x45d753*/
    {
      v34 = *v33; /*0x45d747*/
      *v30++ = *v33++; /*0x45d749*/
    }
    while ( v34 ); /*0x45d753*/
  }
  v35 = (int *)*(this + 5); /*0x45d763*/
  v36 = *v35; /*0x45d766*/
  *(this + 5) = v35 + 1; /*0x45d76b*/
  a4 = v36; /*0x45d777*/
  if ( a9 ) /*0x45d77e*/
    *a9 = *(float *)&a4; /*0x45d787*/
  v37 = 0; /*0x45d78f*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x1Du ) /*0x45d795*/
  {
    v38 = (int *)*(this + 5); /*0x45d797*/
    v37 = *v38; /*0x45d79a*/
    *(this + 5) = v38 + 1; /*0x45d79f*/
  }
  if ( a11 ) /*0x45d7ab*/
    *a11 = v37; /*0x45d7ad*/
  v39 = 0; /*0x45d7b4*/
  v40 = 0; /*0x45d7ba*/
  v41 = 0; /*0x45d7bc*/
  v42 = 0; /*0x45d7be*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x38u ) /*0x45d7c0*/
  {
    v43 = (int *)*(this + 5); /*0x45d7c2*/
    v39 = *v43; /*0x45d7c5*/
    v40 = v43[1]; /*0x45d7c7*/
    v41 = v43[2]; /*0x45d7ca*/
    v42 = v43[3]; /*0x45d7cd*/
    *(this + 5) = v43 + 4; /*0x45d7d3*/
  }
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x38u ) /*0x45d7df*/
  {
    v44 = sub_4301A0(a3, &LocalTime); /*0x45d7e8*/
    v39 = *(_DWORD *)&v44->wYear; /*0x45d7ed*/
    v40 = *(_DWORD *)&v44->wDayOfWeek; /*0x45d7ef*/
    v41 = *(_DWORD *)&v44->wHour; /*0x45d7f2*/
    v42 = *(_DWORD *)&v44->wSecond; /*0x45d7f5*/
  }
  v45 = a10; /*0x45d7f8*/
  if ( a10 ) /*0x45d801*/
  {
    *a10 = v39; /*0x45d803*/
    v45[1] = v40; /*0x45d805*/
    v45[2] = v41; /*0x45d808*/
    v45[3] = v42; /*0x45d80b*/
  }
  v46 = (_DWORD *)*(this + 5); /*0x45d80e*/
  v47 = *v46; /*0x45d811*/
  v48 = v46 + 1; /*0x45d813*/
  TexturePixelData = 0; /*0x45d816*/
  *(this + 5) = v48; /*0x45d81a*/
  if ( v47 ) /*0x45d81d*/
  {
    v50 = a12; /*0x45d823*/
    if ( a12 ) /*0x45d82c*/
    {
      v51 = *v48; /*0x45d832*/
      v52 = (int *)(v48 + 1); /*0x45d834*/
      *(this + 5) = v52; /*0x45d837*/
      v53 = *v52; /*0x45d83a*/
      *(this + 5) = v52 + 1; /*0x45d83f*/
      *v50 = v53; /*0x45d842*/
      if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x2Eu ) /*0x45d84e*/
        *(this + 5) += 0x24; /*0x45d850*/
      sub_70F010(v66, &unk_B25E48); /*0x45d85d*/
      v54 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x45d864*/
      a4 = (int)v54; /*0x45d86c*/
      v55 = 0; /*0x45d873*/
      v67 = 0; /*0x45d877*/
      if ( v54 ) /*0x45d87e*/
        v55 = NiPixelData::NiPixelData(v54, v51, v51, (int)v66, 1u, 1); /*0x45d892*/
      v56 = 3 * v51 * v53; /*0x45d8a2*/
      LODWORD(v61) = v56; /*0x45d8a5*/
      v60 = (const void *)*(this + 5); /*0x45d8a6*/
      v59 = (void *)(*((_DWORD *)v55 + 0x14) + **((_DWORD **)v55 + 0x17)); /*0x45d8a7*/
      v67 = 0xFFFFFFFF; /*0x45d8a8*/
      memcpy(v59, v60, v61); /*0x45d8b3*/
      *(this + 5) += v56; /*0x45d8b8*/
      a2[0] = kPixelLayout_TrueColor32; /*0x45d8c3*/
      a2[2] = kPixelLayout_Palettized8; /*0x45d8cb*/
      a2[1] = kPixelLayout_Palettized8; /*0x45d8cf*/
      TexturePixelData = NiSourceTexture::LoadTexturePixelData(v55, a2); /*0x45d8d8*/
      InterlockedIncrement((volatile LONG *)&TexturePixelData->members); /*0x45d8e1*/
    }
    else
    {
      *(this + 5) = (char *)v48 + v47; /*0x45d8eb*/
    }
  }
  MemoryHeap_Free_checked(v63); /*0x45d8f8*/
  *(this + 5) = 0; /*0x45d8fd*/
  return TexturePixelData; /*0x45d906*/
}
