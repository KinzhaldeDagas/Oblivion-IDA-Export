char __thiscall sub_6F63B0(_DWORD *this, OB_stString28_010201A0 source)
{
  FILE *v3; // eax
  OB_stStringStorage16_010201A0 *heapData; // eax
  FILE *v5; // eax
  bool v6; // cf
  int v8; // eax
  void *v9; // eax
  unsigned int v10; // esi
  unsigned int *begin; // esi
  unsigned int *end; // ebx
  __int64 v13; // rax
  _BYTE *v14; // esi
  char *v15; // esi
  _BYTE *v16; // eax
  char v17; // cl
  OB_stString28_010201A0 v18; // [esp-1Ch] [ebp-68h] BYREF
  size_t v19; // [esp+0h] [ebp-4Ch]
  _BYTE v20[17]; // [esp+17h] [ebp-35h] BYREF
  OB_stString28_010201A0 *v21; // [esp+28h] [ebp-24h]
  _DWORD *v22; // [esp+2Ch] [ebp-20h]
  OB_stVector4_010201A0 v23; // [esp+30h] [ebp-1Ch] BYREF
  int v24; // [esp+48h] [ebp-4h]

  v3 = (FILE *)*(this + 0xF); /*0x6f63d9*/
  v24 = 0; /*0x6f63e0*/
  if ( v3 ) /*0x6f63e4*/
    fclose(v3); /*0x6f63e7*/
  v21 = (OB_stString28_010201A0 *)(this + 1); /*0x6f63f8*/
  OB_stString28_AssignBytes_010201A0((OB_stString28_010201A0 *)(this + 1), EmptyString, 0); /*0x6f63fc*/
  heapData = (OB_stStringStorage16_010201A0 *)source.storage.heapData; /*0x6f6401*/
  v6 = source.capacity < 0x10; /*0x6f640a*/
  *(this + 0xF) = 0; /*0x6f640e*/
  if ( v6 ) /*0x6f6411*/
    heapData = &source.storage; /*0x6f6413*/
  v5 = fopen(heapData->inlineData, "rb"); /*0x6f641d*/
  *(this + 0xF) = v5; /*0x6f6427*/
  if ( !v5 ) /*0x6f642a*/
  {
    v21 = &v18; /*0x6f6431*/
    *(_QWORD *)&v18.size = 0xF00000000LL; /*0x6f6443*/
    v18.storage.inlineData[0] = 0; /*0x6f6447*/
    OB_stString28_AssignSubstring_010201A0(&v18, &source, 0, 0xFFFFFFFF); /*0x6f644a*/
    sub_6F6BF0( /*0x6f6451*/
      4,
      v18.allocatorState,
      (void **)v18.storage.heapData,
      *((int *)&v18.storage.heapData + 1),
      *((int *)&v18.storage.heapData + 2),
      *((int *)&v18.storage.heapData + 3),
      *(size_t *)&v18.size);
    v6 = source.capacity < 0x10; /*0x6f6459*/
LABEL_7:
    if ( !v6 ) /*0x6f645d*/
      FormHeapFree((unsigned int)source.storage.heapData); /*0x6f6464*/
    return 0; /*0x6f646e*/
  }
  v8 = *(this + 0xD); /*0x6f6473*/
  v20[0] = 0; /*0x6f6483*/
  sub_6F2CD0(&v20[1], (char *)(v8 + 1), v20); /*0x6f6487*/
  v9 = *(void **)&v20[5]; /*0x6f648c*/
  v10 = *(this + 0xD); /*0x6f6492*/
  LOBYTE(v24) = 1; /*0x6f6495*/
  if ( !*(_DWORD *)&v20[5] || *(_DWORD *)&v20[9] == *(_DWORD *)&v20[5] ) /*0x6f64a2*/
  {
    _invalid_parameter_noinfo(); /*0x6f64a4*/
    v9 = *(void **)&v20[5]; /*0x6f64a9*/
  }
  if ( sub_6F6060(this, v9, v10 | 0x100000000LL, v19) ) /*0x6f64b3*/
  {
    sub_6F61A0(&v23, 0x10, (int)&v20[1]); /*0x6f64fc*/
    v6 = *(this + 0xD) < 5u; /*0x6f6501*/
    LOBYTE(v24) = 2; /*0x6f6508*/
    if ( v6 ) /*0x6f650d*/
      _invalid_parameter_noinfo(); /*0x6f650f*/
    if ( *(this + 0xE) < 0x10u ) /*0x6f6518*/
      v22 = this + 9; /*0x6f6526*/
    else
      v22 = (_DWORD *)*(this + 9); /*0x6f651d*/
    begin = v23.begin; /*0x6f652a*/
    end = v23.end; /*0x6f6530*/
    if ( !v23.begin || (unsigned int)((char *)v23.end - (char *)v23.begin) <= 5 ) /*0x6f653d*/
      _invalid_parameter_noinfo(); /*0x6f653f*/
    *((_BYTE *)begin + 5) = *((_BYTE *)v22 + 5); /*0x6f654d*/
    if ( end == begin ) /*0x6f6544*/
      _invalid_parameter_noinfo(); /*0x6f6552*/
    if ( sub_6F5DE0(this + 8, 0, *(this + 0xD), begin, strlen((const char *)begin)) ) /*0x6f6576*/
    {
      v21 = &v18; /*0x6f6584*/
      *(_QWORD *)&v18.size = 0xF00000000LL; /*0x6f6596*/
      v18.storage.inlineData[0] = 0; /*0x6f659a*/
      OB_stString28_AssignSubstring_010201A0(&v18, &source, 0, 0xFFFFFFFF); /*0x6f659d*/
      sub_6F6BF0( /*0x6f65a4*/
        2,
        v18.allocatorState,
        (void **)v18.storage.heapData,
        *((int *)&v18.storage.heapData + 1),
        *((int *)&v18.storage.heapData + 2),
        *((int *)&v18.storage.heapData + 3),
        *(size_t *)&v18.size);
      sub_6F5FA0((FILE **)this); /*0x6f65ae*/
      FormHeapFree((unsigned int)begin); /*0x6f65b4*/
      if ( *(_DWORD *)&v20[5] ) /*0x6f65c2*/
        FormHeapFree(*(unsigned int *)&v20[5]); /*0x6f65c5*/
      v6 = source.capacity < 0x10; /*0x6f65cd*/
      memset(&v20[5], 0, 0xC); /*0x6f65d2*/
      goto LABEL_7; /*0x6f65de*/
    }
    LODWORD(v13) = *(_DWORD *)&v20[5]; /*0x6f65e3*/
    if ( !*(_DWORD *)&v20[5] /*0x6f65f6*/
      || (HIDWORD(v13) = *(_DWORD *)&v20[9], (unsigned int)(*(_DWORD *)&v20[9] - *(_DWORD *)&v20[5]) <= 5) )
    {
      _invalid_parameter_noinfo(); /*0x6f65f8*/
      v13 = *(_QWORD *)&v20[5]; /*0x6f6601*/
    }
    if ( *(char *)(v13 + 5) > 0x30 ) /*0x6f6609*/
    {
      v14 = (_BYTE *)sub_6EDA70(this + 8, 5u); /*0x6f661a*/
      if ( *v14 != *(_BYTE *)sub_6F1210(&v20[1], 5u) ) /*0x6f6625*/
      {
        v21 = &v18; /*0x6f6630*/
        sub_414680(&v18, &source); /*0x6f6635*/
        sub_6F6BF0( /*0x6f663c*/
          4,
          v18.allocatorState,
          (void **)v18.storage.heapData,
          *((int *)&v18.storage.heapData + 1),
          *((int *)&v18.storage.heapData + 2),
          *((int *)&v18.storage.heapData + 3),
          *(size_t *)&v18.size);
        sub_6F5FA0((FILE **)this); /*0x6f6646*/
        OB_stVector4_DestroyThiscall_010201A0(&v23); /*0x6f664f*/
        OB_stVector4_DestroyThiscall_010201A0((OB_stVector4_010201A0 *)&v20[1]); /*0x6f6658*/
        OB_stString28_Dtor_010201A0(&source); /*0x6f6661*/
        return 0; /*0x6f6668*/
      }
      v13 = *(_QWORD *)&v20[5]; /*0x6f666e*/
    }
    if ( !(_DWORD)v13 || (unsigned int)(HIDWORD(v13) - v13) <= 5 ) /*0x6f667b*/
    {
      _invalid_parameter_noinfo(); /*0x6f667d*/
      LODWORD(v13) = *(_DWORD *)&v20[5]; /*0x6f6682*/
    }
    v15 = (char *)(v13 + 5); /*0x6f668a*/
    v16 = (_BYTE *)sub_6EDA70(this + 8, 5u); /*0x6f668d*/
    v17 = *v15; /*0x6f6692*/
    v18.capacity = 0xFFFFFFFF; /*0x6f6694*/
    v18.size = 0; /*0x6f6696*/
    *v16 = v17; /*0x6f669b*/
    OB_stString28_AssignSubstring_010201A0(v21, &source, v18.size, v18.capacity); /*0x6f66a2*/
    OB_stVector4_DestroyThiscall_010201A0(&v23); /*0x6f66ab*/
    OB_stVector4_DestroyThiscall_010201A0((OB_stVector4_010201A0 *)&v20[1]); /*0x6f66b4*/
    OB_stString28_Dtor_010201A0(&source); /*0x6f66bd*/
    return 1; /*0x6f66c2*/
  }
  else
  {
    if ( *(_DWORD *)&v20[5] ) /*0x6f64c2*/
      FormHeapFree(*(unsigned int *)&v20[5]); /*0x6f64c5*/
    memset(&v20[5], 0, 0xC); /*0x6f64d1*/
    if ( source.capacity < 0x10 ) /*0x6f64dd*/
      return 0; /*0x6f64dd*/
    FormHeapFree((unsigned int)source.storage.heapData); /*0x6f64e4*/
    return 0; /*0x6f64ec*/
  }
}
