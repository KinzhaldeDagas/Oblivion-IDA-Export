void __usercall sub_5D5AB0(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // edi
  UInt32 v6; // eax
  Tile *v7; // ecx

  v5 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x34))( /*0x5d5abb*/
         a1,
         a4,
         a3,
         a2);
  if ( sub_578FE0() == v5 ) /*0x5d5ac4*/
  {
    if ( a1[0x13] ) /*0x5d5ac6*/
    {
      if ( a1[0xD] ) /*0x5d5acc*/
      {
        v6 = SkillsMenu_CountSelectedRows(a1); /*0x5d5ad4*/
        v7 = (Tile *)a1[0xD]; /*0x5d5add*/
        if ( v6 == a1[0x11] ) /*0x5d5ae0*/
        {
          Tile_SetFloat(v7, 0xFAFu, fConstant_2); /*0x5d5af0*/
          Tile_SetFloat((Tile *)a1[0xD], 0xFC9u, fConstant_2); /*0x5d5b07*/
        }
        else
        {
          Tile_SetFloat(v7, 0xFAFu, 1.0); /*0x5d5b19*/
          Tile_SetFloat((Tile *)a1[0xD], 0xFC9u, 1.0); /*0x5d5b2c*/
        }
      }
    }
  }
}
