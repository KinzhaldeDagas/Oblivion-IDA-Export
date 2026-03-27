void __thiscall sub_88BD60(unsigned int *this, char a2)
{
  unsigned int *v2; // esi
  int v3; // eax

  v2 = this;
  v3 = *(this + 8);
  if ( v3 )
  {
    *(this + 8) = v3 - 1;
    if ( v3 != 1 )
      return;
    sub_88A440(this);
    sub_88A3A0(v2);
    sub_88A310((int *)v2);
    this = v2;
    if ( a2 )
    {
      sub_88A280(v2);
      return;
    }
    goto LABEL_7;
  }
  if ( *(this + 0x13) && !a2 )
LABEL_7:
    sub_88A1F0((int *)this);
}
