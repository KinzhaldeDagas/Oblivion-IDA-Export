void __thiscall sub_8AB000(unsigned int *this, NiPoint3 *a2)
{
  unsigned int v3; // ebx
  unsigned int *v4; // esi

  v3 = *(this + 0x13); /*0x8ab005*/
  v4 = this + 0x10; /*0x8ab00b*/
  if ( v3 >= *(this + 0x12) ) /*0x8ab00e*/
    sub_8AA480(this + 0x10, v3 + *(this + 0x15)); /*0x8ab018*/
  sub_8AA710(v4, v3, a2); /*0x8ab025*/
  *(this + 0xF) = 0; /*0x8ab02c*/
  sub_8AABE0((int)this); /*0x8ab033*/
}
