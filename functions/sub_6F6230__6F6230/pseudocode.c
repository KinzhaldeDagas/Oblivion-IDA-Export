char __thiscall sub_6F6230(_DWORD *this, OB_stString28_010201A0 source)
{
  FILE *v3; // eax
  OB_stStringStorage16_010201A0 *heapData; // eax
  bool v5; // cf
  FILE *v6; // eax
  _DWORD *v8; // eax
  OB_stString28_010201A0 v9; // [esp-1Ch] [ebp-40h] BYREF
  size_t v10; // [esp+0h] [ebp-24h]
  OB_stString28_010201A0 *v11; // [esp+14h] [ebp-10h]
  int v12; // [esp+20h] [ebp-4h]

  v3 = (FILE *)*(this + 0xF); /*0x6f6257*/
  v12 = 0; /*0x6f625e*/
  if ( v3 ) /*0x6f6262*/
    fclose(v3); /*0x6f6265*/
  OB_stString28_AssignBytes_010201A0((OB_stString28_010201A0 *)(this + 1), EmptyString, 0); /*0x6f6278*/
  heapData = (OB_stStringStorage16_010201A0 *)source.storage.heapData; /*0x6f627d*/
  v5 = source.capacity < 0x10; /*0x6f6286*/
  *(this + 0xF) = 0; /*0x6f628a*/
  if ( v5 ) /*0x6f628d*/
    heapData = &source.storage; /*0x6f628f*/
  v6 = fopen(heapData->inlineData, "wb"); /*0x6f6299*/
  *(this + 0xF) = v6; /*0x6f62a3*/
  if ( !v6 ) /*0x6f62a6*/
  {
    v11 = &v9; /*0x6f62ad*/
    *(_QWORD *)&v9.size = 0xF00000000LL; /*0x6f62bf*/
    v9.storage.inlineData[0] = 0; /*0x6f62c3*/
    OB_stString28_AssignSubstring_010201A0(&v9, &source, 0, 0xFFFFFFFF); /*0x6f62c6*/
    sub_6F6BF0( /*0x6f62cd*/
      5,
      v9.allocatorState,
      (void **)v9.storage.heapData,
      *((int *)&v9.storage.heapData + 1),
      *((int *)&v9.storage.heapData + 2),
      *((int *)&v9.storage.heapData + 3),
      *(size_t *)&v9.size);
    if ( source.capacity >= 0x10 ) /*0x6f62d9*/
      FormHeapFree((unsigned int)source.storage.heapData); /*0x6f62e0*/
    return 0; /*0x6f62ea*/
  }
  if ( *(this + 0xE) < 0x10u ) /*0x6f62f5*/
    v8 = this + 9; /*0x6f62fc*/
  else
    v8 = (_DWORD *)*(this + 9); /*0x6f62f7*/
  if ( sub_6F5FD0(this, v8, (unsigned int)*(this + 0xD) | 0x100000000LL, v10) ) /*0x6f6305*/
  {
    OB_stString28_AssignSubstring_010201A0((OB_stString28_010201A0 *)(this + 1), &source, 0, 0xFFFFFFFF); /*0x6f637c*/
    if ( source.capacity >= 0x10 ) /*0x6f6385*/
      FormHeapFree((unsigned int)source.storage.heapData); /*0x6f638c*/
    return 1; /*0x6f6394*/
  }
  else
  {
    v11 = &v9; /*0x6f6313*/
    *(_QWORD *)&v9.size = 0xF00000000LL; /*0x6f6325*/
    v9.storage.inlineData[0] = 0; /*0x6f6329*/
    OB_stString28_AssignSubstring_010201A0(&v9, &source, 0, 0xFFFFFFFF); /*0x6f632c*/
    sub_6F6BF0( /*0x6f6333*/
      5,
      v9.allocatorState,
      (void **)v9.storage.heapData,
      *((int *)&v9.storage.heapData + 1),
      *((int *)&v9.storage.heapData + 2),
      *((int *)&v9.storage.heapData + 3),
      *(size_t *)&v9.size);
    if ( *(this + 0xF) ) /*0x6f6338*/
      fclose((FILE *)*(this + 0xF)); /*0x6f6343*/
    OB_stString28_AssignBytes_010201A0((OB_stString28_010201A0 *)(this + 1), EmptyString, 0); /*0x6f6353*/
    v5 = source.capacity < 0x10; /*0x6f6358*/
    *(this + 0xF) = 0; /*0x6f635c*/
    if ( v5 ) /*0x6f635f*/
      return 0; /*0x6f635f*/
    FormHeapFree((unsigned int)source.storage.heapData); /*0x6f6366*/
    return 0; /*0x6f636e*/
  }
}
