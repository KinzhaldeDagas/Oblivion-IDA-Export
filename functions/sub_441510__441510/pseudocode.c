void __usercall sub_441510(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int i; // esi
  int v6; // eax
  bool v7; // zf
  TESObjectCELL **v8; // eax
  TESObjectCELL *v9; // ecx
  int j; // esi
  TESObjectCELL **v11; // eax

  for ( i = 0; i < uInteriorCellBuffer; ++i ) /*0x441514*/
  {
    v6 = *(_DWORD *)(a1 + 0x38); /*0x44151e*/
    v7 = *(_DWORD *)(v6 + 4 * i) == 0; /*0x441521*/
    v8 = (TESObjectCELL **)(v6 + 4 * i); /*0x441525*/
    if ( !v7 ) /*0x441528*/
    {
      v9 = *v8; /*0x44152a*/
      if ( *v8 ) /*0x44152a*/
      {
        switch ( v9->members.cellProcessLevel ) /*0x44153c*/
        {
          case 5u: /*0x44153c*/
          case 6u: /*0x44153c*/
            sub_4CB590(v9, a2, a3, a4, 1); /*0x441545*/
            break; /*0x441545*/
          default:
            continue;
        }
      }
    }
  }
  for ( j = 0; j < uExteriorCellBuffer; ++j ) /*0x44154f*/
  {
    v11 = (TESObjectCELL **)(*(_DWORD *)(a1 + 0x3C) + 4 * j); /*0x441560*/
    if ( *v11 ) /*0x44155c*/
    {
      switch ( (*v11)->members.cellProcessLevel ) /*0x441577*/
      {
        case 5u: /*0x441577*/
        case 6u: /*0x441577*/
          sub_4CB590(*v11, a2, a3, a4, 1); /*0x441580*/
          break; /*0x441580*/
        default:
          continue;
      }
    }
  }
}
