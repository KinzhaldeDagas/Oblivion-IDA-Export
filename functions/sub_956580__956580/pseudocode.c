int __thiscall sub_956580(unsigned int *this, char a2, char a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int result; // eax

  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = a3; /*0x956592*/
  v4 = *(this + 3); /*0x956596*/
  v5 = *(this + 2); /*0x956599*/
  *(this + 3) = v4 + 1; /*0x9565a1*/
  if ( v4 + 1 >= v5 ) /*0x9565a4*/
    sub_9564D0(this); /*0x9565a8*/
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = a2; /*0x9565bc*/
  v6 = *(this + 2); /*0x9565c3*/
  result = *(this + 3) + 1; /*0x9565c7*/
  *(this + 3) = result; /*0x9565cb*/
  if ( result >= v6 ) /*0x9565ce*/
    return sub_9564D0(this); /*0x9565d2*/
  return result; /*0x9565d7*/
}
