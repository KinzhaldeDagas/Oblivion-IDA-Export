void __usercall sub_5D5AB0(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v6; // edi
  int v7; // eax
  Tile *v8; // ecx

  v6 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x34))(
         a1,
         a4,
         a3,
         a2);
  if ( sub_578FE0() == v6 )
  {
    if ( a1[0x13] )
    {
      if ( a1[0xD] )
      {
        v7 = sub_5D5A00(a1);
        v8 = (Tile *)a1[0xD];
        if ( v7 == a1[0x11] )
        {
          Tile_SetFloat(v8, (_DWORD *)0xFAF, fConstant_2);
          Tile_SetFloat((Tile *)a1[0xD], (_DWORD *)0xFC9, fConstant_2);
        }
        else
        {
          Tile_SetFloat(v8, (_DWORD *)0xFAF, 1.0);
          Tile_SetFloat((Tile *)a1[0xD], (_DWORD *)0xFC9, 1.0);
        }
      }
    }
  }
}
