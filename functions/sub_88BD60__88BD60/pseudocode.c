void __thiscall sub_88BD60(unsigned int *this, char a2)
{
  unsigned int *v2; // esi
  int v3; // eax

  v2 = this; /*0x88bd61*/
  v3 = *(this + 8); /*0x88bd63*/
  if ( v3 ) /*0x88bd68*/
  {
    *(this + 8) = v3 - 1; /*0x88bd6d*/
    if ( v3 != 1 ) /*0x88bd70*/
      return; /*0x88bd70*/
    sub_88A440(this); /*0x88bd72*/
    sub_88A3A0(v2); /*0x88bd79*/
    sub_88A310((int *)v2); /*0x88bd80*/
    this = v2; /*0x88bd8a*/
    if ( a2 ) /*0x88bd8c*/
    {
      sub_88A280(v2); /*0x88bd8e*/
      return; /*0x88bd94*/
    }
    goto LABEL_7; /*0x88bd8c*/
  }
  if ( *(this + 0x13) && !a2 ) /*0x88bda2*/
LABEL_7:
    sub_88A1F0((int *)this); /*0x88bda4*/
}
