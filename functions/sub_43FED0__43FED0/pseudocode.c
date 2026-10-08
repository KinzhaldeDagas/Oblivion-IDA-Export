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

  cellProcessLevel = a1->members.cellProcessLevel; /*0x43fed5*/
  v7 = cellProcessLevel == 6 || cellProcessLevel == 5; /*0x43fee8*/
  i = uGridsToLoad * uGridsToLoad; /*0x43fef3*/
  if ( !*(_DWORD *)(*(this + 0xF) + 4 * i - 4) ) /*0x43fef6*/
    v7 = 1; /*0x43fefd*/
  v9 = a1; /*0x43ff01*/
  if ( !v7 && i < uExteriorCellBuffer ) /*0x43ff0b*/
    goto LABEL_11; /*0x43ff0b*/
  for ( i = 0; i < uExteriorCellBuffer; ++i ) /*0x43ff0d*/
  {
LABEL_11:
    v10 = *(this + 0xF); /*0x43ff18*/
    v11 = *(TESObjectCELL **)(v10 + 4 * i); /*0x43ff1b*/
    *(_DWORD *)(v10 + 4 * i) = v9; /*0x43ff23*/
    if ( v11 == a1 ) /*0x43ff25*/
      return; /*0x43ff25*/
    v9 = v11; /*0x43ff27*/
  }
  if ( v9 ) /*0x43ff30*/
  {
    if ( GetObjectPointerAt_054(v9) ) /*0x43ff34*/
      GetObjectPointerAt_054(v9); /*0x43ff3f*/
    for ( j = 0; j < uExteriorCellBuffer && *(TESObjectCELL **)(*(this + 0xF) + 4 * j) != v9; ++j ) /*0x43ff4a*/
      ; /*0x43ff5c*/
    TESObjectCELL_Deactivate(st5_0, a3, a4, v9); /*0x43ff68*/
    *((_BYTE *)this + 0x69) = 1; /*0x43ff6d*/
  }
}
