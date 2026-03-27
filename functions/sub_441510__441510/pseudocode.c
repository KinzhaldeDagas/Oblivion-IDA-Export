void __usercall sub_441510(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int i; // esi
  int v6; // eax
  bool v7; // zf
  _BYTE **v8; // eax
  _BYTE *v9; // ecx
  int j; // esi
  void **v11; // eax

  for ( i = 0; i < uInteriorCellBuffer; ++i )
  {
    v6 = *(_DWORD *)(a1 + 0x38);
    v7 = *(_DWORD *)(v6 + 4 * i) == 0;
    v8 = (_BYTE **)(v6 + 4 * i);
    if ( !v7 )
    {
      v9 = *v8;
      if ( *v8 )
      {
        switch ( v9[0x26] )
        {
          case 5:
          case 6:
            sub_4CB590(v9, a2, a3, a4, 1);
            break;
          default:
            continue;
        }
      }
    }
  }
  for ( j = 0; j < uExteriorCellBuffer; ++j )
  {
    v11 = (void **)(*(_DWORD *)(a1 + 0x3C) + 4 * j);
    if ( *v11 )
    {
      switch ( *((_BYTE *)*v11 + 0x26) )
      {
        case 5:
        case 6:
          sub_4CB590(*v11, a2, a3, a4, 1);
          break;
        default:
          continue;
      }
    }
  }
}
