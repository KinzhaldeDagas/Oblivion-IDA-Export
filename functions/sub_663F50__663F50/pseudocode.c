void sub_663F50()
{
  float *v0; // esi
  int v1; // eax

  if ( LODWORD(qword_B3BB2C[7]) || LODWORD(qword_B3BB2C[6]) ) /*0x663f59*/
  {
    v0 = &qword_B3BB2C[6]; /*0x663f63*/
    do /*0x663f99*/
    {
      v1 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v0 + 0x154))(*(_DWORD *)v0); /*0x663f7a*/
      if ( v1 ) /*0x663f7e*/
      {
        *(_WORD *)(v1 + 0x18) |= 1u; /*0x663f80*/
        sub_88CF20((NiObjectNET *)v1, 0, 1, 0); /*0x663f8c*/
      }
      v0 = *((float **)v0 + 1); /*0x663f94*/
    }
    while ( v0 ); /*0x663f99*/
  }
}
