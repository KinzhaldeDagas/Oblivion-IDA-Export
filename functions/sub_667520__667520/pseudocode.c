void __thiscall sub_667520(MobileObject *this)
{
  float *v1; // ebx
  int v2; // edi
  int v3; // eax
  int v4; // esi

  while ( LODWORD(qword_B3BB2C[7]) || LODWORD(qword_B3BB2C[6]) ) /*0x66752d*/
  {
    v1 = &qword_B3BB2C[6]; /*0x667539*/
    while ( 1 ) /*0x667540*/
    {
      v2 = *(_DWORD *)v1; /*0x667540*/
      v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v1 + 0x154))(*(_DWORD *)v1); /*0x66754c*/
      v4 = v3; /*0x66754e*/
      if ( !v3 ) /*0x667552*/
        break; /*0x667552*/
      if ( !sub_6670F0(this, v3) ) /*0x667559*/
      {
        *(_WORD *)(v4 + 0x18) &= ~1u; /*0x667562*/
        sub_88CF20((NiObjectNET *)v4, 1u, 1, 0); /*0x66756f*/
        break; /*0x66756f*/
      }
      v1 = *((float **)v1 + 1); /*0x667596*/
      if ( !v1 ) /*0x66759b*/
        return; /*0x66759b*/
    }
    BSSimpleList_Remove((int *)&qword_B3BB2C[6], v2); /*0x667577*/
  }
}
