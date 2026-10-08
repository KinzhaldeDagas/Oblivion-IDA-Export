void __usercall sub_4416F0(_DWORD *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  TESObjectCELL *v5; // ecx
  unsigned int v6; // eax
  unsigned int i; // edi
  unsigned int j; // esi
  TESObjectCELL *cell; // ecx

  if ( g_TESDataHandler ) /*0x4416f0*/
  {
    v5 = (TESObjectCELL *)*(this + 0xD); /*0x4416fc*/
    if ( v5 ) /*0x441704*/
    {
      if ( v5->members.cellProcessLevel == 6 ) /*0x441709*/
        sub_4CD090(v5, (char)this, a2, a3, a4); /*0x44170b*/
    }
    v6 = uGridsToLoad; /*0x441710*/
    for ( i = 0; i < v6; ++i ) /*0x441716*/
    {
      for ( j = 0; j < v6; ++j ) /*0x441724*/
      {
        cell = GetGridEntry((GridCellArray *)*(this + 2), i, j)->cell; /*0x441734*/
        if ( cell ) /*0x441738*/
        {
          if ( cell->members.cellProcessLevel == 6 ) /*0x44173d*/
            sub_4CD090(cell, (char)this, a2, a3, a4); /*0x44173f*/
        }
        v6 = uGridsToLoad; /*0x441744*/
      }
    }
  }
}
