void __userpurge sub_43FED0(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectCELL *a1)
{
  UInt8 cellProcessLevel; // al
  bool v7; // al
  unsigned int i; // edx
  TESObjectCELL *v9; // esi
  int v10; // eax
  TESObjectCELL *v11; // ecx
  unsigned int j; // eax

  cellProcessLevel = a1->members.cellProcessLevel;
  v7 = cellProcessLevel == 6 || cellProcessLevel == 5;
  i = uGridsToLoad * uGridsToLoad;
  if ( !*(_DWORD *)(*(this + 0xF) + 4 * i - 4) )
    v7 = 1;
  v9 = a1;
  if ( !v7 && i < uExteriorCellBuffer )
    goto LABEL_11;
  for ( i = 0; i < uExteriorCellBuffer; ++i )
  {
LABEL_11:
    v10 = *(this + 0xF);
    v11 = *(TESObjectCELL **)(v10 + 4 * i);
    *(_DWORD *)(v10 + 4 * i) = v9;
    if ( v11 == a1 )
      return;
    v9 = v11;
  }
  if ( v9 )
  {
    if ( TESObjectCELL_GetNiNode_(v9) )
      TESObjectCELL_GetNiNode_(v9);
    for ( j = 0; j < uExteriorCellBuffer && *(TESObjectCELL **)(*(this + 0xF) + 4 * j) != v9; ++j )
      ;
    sub_447BA0(st5_0, a3, a4, v9);
    *((_BYTE *)this + 0x69) = 1;
  }
}
