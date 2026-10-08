unsigned int __thiscall sub_462080(char *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  InteriorCellNewReferencesMap *v3; // eax
  InteriorCellNewReferencesMap *v4; // eax
  void (__thiscall ***v5)(_DWORD, int); // ecx
  ExteriorCellNewReferencesMap *v6; // eax
  ExteriorCellNewReferencesMap *v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx
  ExteriorCellNewReferencesMap *v9; // eax
  ExteriorCellNewReferencesMap *v10; // eax
  bool v11; // zf
  int v12; // edi
  _DWORD *v13; // eax
  unsigned int i; // ecx
  unsigned int *v15; // edi
  _DWORD *v16; // eax
  unsigned int j; // ecx
  unsigned int *v18; // esi
  InteriorCellNewReferencesMap *v20; // [esp+10h] [ebp-10h] BYREF
  int v21; // [esp+1Ch] [ebp-4h]

  v2 = *((void (__thiscall ****)(_DWORD, int))this + 2); /*0x4620a6*/
  if ( v2 ) /*0x4620ad*/
    (**v2)(v2, 1); /*0x4620b5*/
  v3 = (InteriorCellNewReferencesMap *)FormHeapAlloc(0x10u); /*0x4620b9*/
  v20 = v3; /*0x4620c1*/
  v21 = 0; /*0x4620c7*/
  if ( v3 ) /*0x4620cb*/
    v4 = InteriorCellNewReferencesMap::InteriorCellNewReferencesMap(v3); /*0x4620cf*/
  else
    v4 = 0; /*0x4620d6*/
  v5 = *((void (__thiscall ****)(_DWORD, int))this + 3); /*0x4620d8*/
  v21 = 0xFFFFFFFF; /*0x4620e0*/
  *((_DWORD *)this + 2) = v4; /*0x4620e4*/
  if ( v5 ) /*0x4620e7*/
    (**v5)(v5, 1); /*0x4620ef*/
  v6 = (ExteriorCellNewReferencesMap *)FormHeapAlloc(0x10u); /*0x4620f3*/
  v20 = v6; /*0x4620fb*/
  v21 = 1; /*0x462101*/
  if ( v6 ) /*0x462109*/
    v7 = ExteriorCellNewReferencesMap::ExteriorCellNewReferencesMap(v6); /*0x46210d*/
  else
    v7 = 0; /*0x462114*/
  v8 = *((void (__thiscall ****)(_DWORD, int))this + 4); /*0x462116*/
  v21 = 0xFFFFFFFF; /*0x46211b*/
  *((_DWORD *)this + 3) = v7; /*0x46211f*/
  if ( v8 ) /*0x462122*/
    (**v8)(v8, 1); /*0x46212a*/
  v9 = (ExteriorCellNewReferencesMap *)FormHeapAlloc(0x10u); /*0x46212e*/
  v20 = v9; /*0x462136*/
  v21 = 2; /*0x46213c*/
  if ( v9 ) /*0x462144*/
    v10 = ExteriorCellNewReferencesMap::ExteriorCellNewReferencesMap(v9); /*0x462148*/
  else
    v10 = 0; /*0x46214f*/
  *((_DWORD *)this + 4) = v10; /*0x462151*/
  v11 = *((_DWORD *)this + 9) == 0; /*0x462154*/
  v21 = 0xFFFFFFFF; /*0x462157*/
  if ( !v11 ) /*0x46215b*/
  {
    do /*0x462174*/
    {
      v12 = *(_DWORD *)(*((_DWORD *)this + 9) + 4); /*0x462163*/
      FormHeapFree(*((_DWORD *)this + 9)); /*0x462167*/
      *((_DWORD *)this + 9) = v12; /*0x462171*/
    }
    while ( v12 ); /*0x462174*/
  }
  *((_DWORD *)this + 8) = 0; /*0x462178*/
  SaveLoad_ClearCreatedObjList__(this); /*0x46217b*/
  v13 = *((_DWORD **)this + 0x1D); /*0x462180*/
  for ( i = 0; i < v13[3]; ++i ) /*0x462185*/
    *(_DWORD *)(v13[1] + 4 * i) = 0; /*0x462193*/
  v13[3] = 0; /*0x46219e*/
  v13[4] = 0; /*0x4621a1*/
  v15 = *((unsigned int **)this + 0x1D); /*0x4621a4*/
  v11 = v15[2] == 0; /*0x4621a7*/
  v20 = 0; /*0x4621aa*/
  if ( v11 ) /*0x4621ae*/
    NiTLargeArray_Resize32(v15, v15[5]); /*0x4621b6*/
  sub_446C50(v15, 0, &v20); /*0x4621c3*/
  v16 = *((_DWORD **)this + 0x1E); /*0x4621c8*/
  for ( j = 0; j < v16[3]; ++j ) /*0x4621cd*/
    *(_DWORD *)(v16[1] + 4 * j) = 0; /*0x4621d5*/
  v16[3] = 0; /*0x4621e0*/
  v16[4] = 0; /*0x4621e3*/
  v18 = *((unsigned int **)this + 0x1E); /*0x4621e6*/
  v11 = v18[2] == 0; /*0x4621e9*/
  v20 = 0; /*0x4621ec*/
  if ( v11 ) /*0x4621f0*/
    NiTLargeArray_Resize32(v18, v18[5]); /*0x4621f8*/
  return sub_446C50(v18, 0, &v20); /*0x46220a*/
}
