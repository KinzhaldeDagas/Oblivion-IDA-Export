void __thiscall sub_674E10(int *this, TESForm *a2)
{
  if ( a2 == (TESForm *)LODWORD(qword_B3BB2C[0x73]) ) /*0x674e1a*/
    qword_B3BB2C[0x73] = 0.0; /*0x674e1c*/
  BSSimpleList_Remove(this + 0x16, (int)a2); /*0x674e2d*/
}
