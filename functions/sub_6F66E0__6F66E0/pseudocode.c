bool __thiscall sub_6F66E0(unsigned int *this, OB_stString28_010201A0 source, char a3)
{
  int v4; // eax
  OB_stStringStorage16_010201A0 *heapData; // ecx
  ArchiveFile *NiFile; // eax
  bool v7; // cf
  int v9; // eax
  int v10; // eax
  int v11; // edi
  unsigned int *begin; // edi
  unsigned int *end; // ebx
  void (__thiscall ***v14)(_DWORD, int); // ecx
  __int64 v15; // rax
  _BYTE *v16; // edi
  char *v17; // edi
  _BYTE *v18; // eax
  char v19; // cl
  bool v20; // bl
  OB_stString28_010201A0 v21; // [esp-1Ch] [ebp-64h] BYREF
  OB_stString28_010201A0 *v22; // [esp+14h] [ebp-34h]
  _BYTE v23[17]; // [esp+1Bh] [ebp-2Dh] BYREF
  OB_stVector4_010201A0 v24; // [esp+2Ch] [ebp-1Ch] BYREF
  int v25; // [esp+44h] [ebp-4h]

  v25 = 0; /*0x6f670f*/
  v4 = 1; /*0x6f6713*/
  if ( a3 ) /*0x6f6718*/
    v4 = 0x100; /*0x6f671a*/
  heapData = (OB_stStringStorage16_010201A0 *)source.storage.heapData; /*0x6f671f*/
  if ( source.capacity < 0x10 ) /*0x6f672c*/
    heapData = &source.storage; /*0x6f672e*/
  NiFile = FileFinder_LoadNiFile__(heapData->inlineData, 0, 0x2800, v4); /*0x6f673a*/
  *(this + 0x10) = (unsigned int)NiFile; /*0x6f6744*/
  if ( !NiFile ) /*0x6f6747*/
  {
    v22 = &v21; /*0x6f674e*/
    *(_QWORD *)&v21.size = 0xF00000000LL; /*0x6f6760*/
    v21.storage.inlineData[0] = 0; /*0x6f6764*/
    OB_stString28_AssignSubstring_010201A0(&v21, &source, 0, 0xFFFFFFFF); /*0x6f6767*/
    sub_6F6BF0( /*0x6f676e*/
      4,
      v21.allocatorState,
      (void **)v21.storage.heapData,
      *((int *)&v21.storage.heapData + 1),
      *((int *)&v21.storage.heapData + 2),
      *((int *)&v21.storage.heapData + 3),
      *(size_t *)&v21.size);
    v7 = source.capacity < 0x10; /*0x6f6776*/
LABEL_7:
    if ( !v7 ) /*0x6f677a*/
      FormHeapFree((unsigned int)source.storage.heapData); /*0x6f6781*/
    return 0; /*0x6f678b*/
  }
  v9 = *(this + 0xD); /*0x6f6790*/
  v23[0] = 0; /*0x6f67a0*/
  sub_6F2CD0(&v23[1], (char *)(v9 + 1), v23); /*0x6f67a4*/
  v10 = *(_DWORD *)&v23[5]; /*0x6f67a9*/
  v11 = *(this + 0xD); /*0x6f67af*/
  LOBYTE(v25) = 1; /*0x6f67b2*/
  if ( !*(_DWORD *)&v23[5] || *(_DWORD *)&v23[9] == *(_DWORD *)&v23[5] ) /*0x6f67bf*/
  {
    _invalid_parameter_noinfo(); /*0x6f67c1*/
    v10 = *(_DWORD *)&v23[5]; /*0x6f67c6*/
  }
  if ( sub_6F5E50(this, v10, v11, 1) ) /*0x6f67d0*/
  {
    sub_6F61A0(&v24, 0x10, (int)&v23[1]); /*0x6f6819*/
    v7 = *(this + 0xD) < 5; /*0x6f681e*/
    LOBYTE(v25) = 2; /*0x6f6825*/
    if ( v7 ) /*0x6f682a*/
      _invalid_parameter_noinfo(); /*0x6f682c*/
    if ( *(this + 0xE) < 0x10 ) /*0x6f6835*/
      v22 = (OB_stString28_010201A0 *)(this + 9); /*0x6f6843*/
    else
      v22 = (OB_stString28_010201A0 *)*(this + 9); /*0x6f683a*/
    begin = v24.begin; /*0x6f6847*/
    end = v24.end; /*0x6f684d*/
    if ( !v24.begin || (unsigned int)((char *)v24.end - (char *)v24.begin) <= 5 ) /*0x6f685a*/
      _invalid_parameter_noinfo(); /*0x6f685c*/
    *((_BYTE *)begin + 5) = v22->storage.inlineData[1]; /*0x6f686a*/
    if ( end == begin ) /*0x6f6861*/
      _invalid_parameter_noinfo(); /*0x6f686f*/
    if ( sub_6F5DE0(this + 8, 0, *(this + 0xD), begin, strlen((const char *)begin)) ) /*0x6f6896*/
    {
      v22 = &v21; /*0x6f68a4*/
      *(_QWORD *)&v21.size = 0xF00000000LL; /*0x6f68b6*/
      v21.storage.inlineData[0] = 0; /*0x6f68ba*/
      OB_stString28_AssignSubstring_010201A0(&v21, &source, 0, 0xFFFFFFFF); /*0x6f68bd*/
      sub_6F6BF0( /*0x6f68c4*/
        2,
        v21.allocatorState,
        (void **)v21.storage.heapData,
        *((int *)&v21.storage.heapData + 1),
        *((int *)&v21.storage.heapData + 2),
        *((int *)&v21.storage.heapData + 3),
        *(size_t *)&v21.size);
      v14 = (void (__thiscall ***)(_DWORD, int))*(this + 0x10); /*0x6f68c9*/
      if ( v14 ) /*0x6f68d1*/
        (**v14)(v14, 1); /*0x6f68d9*/
      v21.capacity = (unsigned int)begin; /*0x6f68db*/
      *(this + 0x10) = 0; /*0x6f68dc*/
      FormHeapFree(v21.capacity); /*0x6f68df*/
      if ( *(_DWORD *)&v23[5] ) /*0x6f68ed*/
        FormHeapFree(*(unsigned int *)&v23[5]); /*0x6f68f0*/
      v7 = source.capacity < 0x10; /*0x6f68f8*/
      memset(&v23[5], 0, 0xC); /*0x6f68fd*/
      goto LABEL_7; /*0x6f6909*/
    }
    LODWORD(v15) = *(_DWORD *)&v23[5]; /*0x6f690e*/
    if ( !*(_DWORD *)&v23[5] /*0x6f6921*/
      || (HIDWORD(v15) = *(_DWORD *)&v23[9], (unsigned int)(*(_DWORD *)&v23[9] - *(_DWORD *)&v23[5]) <= 5) )
    {
      _invalid_parameter_noinfo(); /*0x6f6923*/
      v15 = *(_QWORD *)&v23[5]; /*0x6f692c*/
    }
    if ( *(char *)(v15 + 5) > 0x30 ) /*0x6f6934*/
    {
      v16 = (_BYTE *)sub_6EDA70(this + 8, 5u); /*0x6f6945*/
      if ( *v16 != *(_BYTE *)sub_6F1210(&v23[1], 5u) ) /*0x6f6950*/
      {
        v22 = &v21; /*0x6f695b*/
        sub_414680(&v21, &source); /*0x6f6960*/
        sub_6F6BF0( /*0x6f6967*/
          4,
          v21.allocatorState,
          (void **)v21.storage.heapData,
          *((int *)&v21.storage.heapData + 1),
          *((int *)&v21.storage.heapData + 2),
          *((int *)&v21.storage.heapData + 3),
          *(size_t *)&v21.size);
        sub_6ED6F0(this); /*0x6f6971*/
        OB_stVector4_DestroyThiscall_010201A0(&v24); /*0x6f697a*/
        OB_stVector4_DestroyThiscall_010201A0((OB_stVector4_010201A0 *)&v23[1]); /*0x6f6983*/
        OB_stString28_Dtor_010201A0(&source); /*0x6f698c*/
        return 0; /*0x6f6993*/
      }
      v15 = *(_QWORD *)&v23[5]; /*0x6f6999*/
    }
    if ( !(_DWORD)v15 || (unsigned int)(HIDWORD(v15) - v15) <= 5 ) /*0x6f69a6*/
    {
      _invalid_parameter_noinfo(); /*0x6f69a8*/
      LODWORD(v15) = *(_DWORD *)&v23[5]; /*0x6f69ad*/
    }
    v17 = (char *)(v15 + 5); /*0x6f69b5*/
    v18 = (_BYTE *)sub_6EDA70(this + 8, 5u); /*0x6f69b8*/
    v19 = *v17; /*0x6f69bd*/
    v21.capacity = 0xFFFFFFFF; /*0x6f69bf*/
    v21.size = 0; /*0x6f69c1*/
    *v18 = v19; /*0x6f69c6*/
    OB_stString28_AssignSubstring_010201A0((OB_stString28_010201A0 *)(this + 1), &source, v21.size, v21.capacity); /*0x6f69cc*/
    v20 = *(this + 0x10) != 0; /*0x6f69d8*/
    OB_stVector4_DestroyThiscall_010201A0(&v24); /*0x6f69db*/
    OB_stVector4_DestroyThiscall_010201A0((OB_stVector4_010201A0 *)&v23[1]); /*0x6f69e4*/
    OB_stString28_Dtor_010201A0(&source); /*0x6f69ed*/
    return v20; /*0x6f69f2*/
  }
  else
  {
    if ( *(_DWORD *)&v23[5] ) /*0x6f67df*/
      FormHeapFree(*(unsigned int *)&v23[5]); /*0x6f67e2*/
    memset(&v23[5], 0, 0xC); /*0x6f67ee*/
    if ( source.capacity < 0x10 ) /*0x6f67fa*/
      return 0; /*0x6f67fa*/
    FormHeapFree((unsigned int)source.storage.heapData); /*0x6f6801*/
    return 0; /*0x6f6809*/
  }
}
