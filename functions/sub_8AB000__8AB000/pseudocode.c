void __thiscall sub_8AB000(unsigned int *this, int a2)
{
  unsigned int v3; // ebx
  _DWORD *v4; // esi

  v3 = *(this + 0x13);
  v4 = this + 0x10;
  if ( v3 >= *(this + 0x12) )
    sub_8AA480(this + 0x10, v3 + *(this + 0x15));
  sub_8AA710(v4, v3, a2);
  *(this + 0xF) = 0;
  sub_8AABE0((int)this);
}
