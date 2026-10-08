int __thiscall sub_956730(unsigned int *this, int a2)
{
  int v3; // edx
  int v4; // ecx
  signed int v5; // ecx
  signed int v6; // eax
  int v7; // ecx
  int result; // eax

  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = a2; /*0x956743*/
  v3 = *(this + 3); /*0x956747*/
  v4 = *(this + 2); /*0x95674a*/
  *(this + 3) = v3 + 1; /*0x956752*/
  if ( v3 + 1 >= v4 ) /*0x956755*/
    sub_9564D0(this); /*0x956759*/
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = BYTE1(a2); /*0x95676e*/
  v5 = *(this + 2); /*0x956775*/
  v6 = *(this + 3) + 1; /*0x956779*/
  *(this + 3) = v6; /*0x95677d*/
  if ( v6 >= v5 ) /*0x956780*/
    sub_9564D0(this); /*0x956784*/
  *(_BYTE *)(*(this + 2) - *(this + 3) + *(this + 4) - 1) = BYTE2(a2); /*0x956797*/
  v7 = *(this + 2); /*0x95679e*/
  result = *(this + 3) + 1; /*0x9567a2*/
  *(this + 3) = result; /*0x9567a6*/
  if ( result >= v7 ) /*0x9567a9*/
    return sub_9564D0(this); /*0x9567ad*/
  return result; /*0x9567b2*/
}
