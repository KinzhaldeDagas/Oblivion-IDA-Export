int __thiscall sub_956520(unsigned int *this, char a2)
{
  int v2; // edx
  int result; // eax

  *(_BYTE *)(*(this + 4) - *(this + 3) + *(this + 2) - 1) = a2; /*0x956530*/
  v2 = *(this + 2); /*0x956537*/
  result = *(this + 3) + 1; /*0x95653b*/
  *(this + 3) = result; /*0x95653f*/
  if ( result >= v2 ) /*0x956543*/
    return sub_9564D0(this); /*0x956545*/
  return result; /*0x956542*/
}
