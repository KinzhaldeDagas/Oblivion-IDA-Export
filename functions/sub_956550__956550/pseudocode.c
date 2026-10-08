int __thiscall sub_956550(unsigned int *this, char a2, char a3)
{
  int v3; // edx
  int result; // eax

  *(_BYTE *)(*(this + 4) - *(this + 3) + *(this + 2) - 1) = a2 + a3; /*0x956562*/
  v3 = *(this + 2); /*0x956569*/
  result = *(this + 3) + 1; /*0x95656d*/
  *(this + 3) = result; /*0x956571*/
  if ( result >= v3 ) /*0x956575*/
    return sub_9564D0(this); /*0x956577*/
  return result; /*0x956574*/
}
