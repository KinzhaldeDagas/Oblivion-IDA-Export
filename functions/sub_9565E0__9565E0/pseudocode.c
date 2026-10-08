int __thiscall sub_9565E0(unsigned int *this, char a2, __int16 a3)
{
  int v4; // edx
  int v5; // ecx
  signed int v6; // ecx
  signed int v7; // eax
  int v8; // ecx
  int result; // eax

  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = a3; /*0x9565f3*/
  v4 = *(this + 3); /*0x9565f7*/
  v5 = *(this + 2); /*0x9565fa*/
  *(this + 3) = v4 + 1; /*0x956602*/
  if ( v4 + 1 >= v5 ) /*0x956605*/
    sub_9564D0(this); /*0x956609*/
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = HIBYTE(a3); /*0x95661c*/
  v6 = *(this + 2); /*0x956623*/
  v7 = *(this + 3) + 1; /*0x956627*/
  *(this + 3) = v7; /*0x95662b*/
  if ( v7 >= v6 ) /*0x95662e*/
    sub_9564D0(this); /*0x956632*/
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = a2; /*0x956646*/
  v8 = *(this + 2); /*0x95664d*/
  result = *(this + 3) + 1; /*0x956651*/
  *(this + 3) = result; /*0x956655*/
  if ( result >= v8 ) /*0x956658*/
    return sub_9564D0(this); /*0x95665c*/
  return result; /*0x956661*/
}
