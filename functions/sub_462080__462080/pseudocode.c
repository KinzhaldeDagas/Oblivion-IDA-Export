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

  v2 = *((void (__thiscall ****)(_DWORD, int))this + 2);
  if ( v2 )
    (**v2)(v2, 1);
  v3 = (InteriorCellNewReferencesMap *)FormHeapAlloc(0x10u);
  v20 = v3;
  v21 = 0;
  if ( v3 )
    v4 = InteriorCellNewReferencesMap::InteriorCellNewReferencesMap(v3);
  else
    v4 = 0;
  v5 = *((void (__thiscall ****)(_DWORD, int))this + 3);
  v21 = 0xFFFFFFFF;
  *((_DWORD *)this + 2) = v4;
  if ( v5 )
    (**v5)(v5, 1);
  v6 = (ExteriorCellNewReferencesMap *)FormHeapAlloc(0x10u);
  v20 = v6;
  v21 = 1;
  if ( v6 )
    v7 = ExteriorCellNewReferencesMap::ExteriorCellNewReferencesMap(v6);
  else
    v7 = 0;
  v8 = *((void (__thiscall ****)(_DWORD, int))this + 4);
  v21 = 0xFFFFFFFF;
  *((_DWORD *)this + 3) = v7;
  if ( v8 )
    (**v8)(v8, 1);
  v9 = (ExteriorCellNewReferencesMap *)FormHeapAlloc(0x10u);
  v20 = v9;
  v21 = 2;
  if ( v9 )
    v10 = ExteriorCellNewReferencesMap::ExteriorCellNewReferencesMap(v9);
  else
    v10 = 0;
  *((_DWORD *)this + 4) = v10;
  v11 = *((_DWORD *)this + 9) == 0;
  v21 = 0xFFFFFFFF;
  if ( !v11 )
  {
    do
    {
      v12 = *(_DWORD *)(*((_DWORD *)this + 9) + 4);
      FormHeapFree(*((_DWORD *)this + 9));
      *((_DWORD *)this + 9) = v12;
    }
    while ( v12 );
  }
  *((_DWORD *)this + 8) = 0;
  SaveLoad_ClearCreatedObjList__(this);
  v13 = *((_DWORD **)this + 0x1D);
  for ( i = 0; i < v13[3]; ++i )
    *(_DWORD *)(v13[1] + 4 * i) = 0;
  v13[3] = 0;
  v13[4] = 0;
  v15 = *((unsigned int **)this + 0x1D);
  v11 = v15[2] == 0;
  v20 = 0;
  if ( v11 )
    sub_452910(v15, v15[5]);
  sub_446C50(v15, 0, &v20);
  v16 = *((_DWORD **)this + 0x1E);
  for ( j = 0; j < v16[3]; ++j )
    *(_DWORD *)(v16[1] + 4 * j) = 0;
  v16[3] = 0;
  v16[4] = 0;
  v18 = *((unsigned int **)this + 0x1E);
  v11 = v18[2] == 0;
  v20 = 0;
  if ( v11 )
    sub_452910(v18, v18[5]);
  return sub_446C50(v18, 0, &v20);
}
