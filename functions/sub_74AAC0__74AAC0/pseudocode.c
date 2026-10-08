int **__thiscall sub_74AAC0(int **this, char a2)
{
  int *v3; // ecx

  v3 = *(this + 1); /*0x74aac3*/
  *this = (int *)&NiTArray<NiPointer<NiGeometry>>::`vftable'; /*0x74aac8*/
  if ( v3 ) /*0x74aace*/
    sub_74A000(v3, 3); /*0x74aad2*/
  if ( (a2 & 1) != 0 ) /*0x74aadc*/
    FormHeapFree((unsigned int)this); /*0x74aadf*/
  return this; /*0x74aae9*/
}
