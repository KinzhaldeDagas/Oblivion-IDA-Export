NiGeometryGroup *__thiscall sub_77DDC0(NiGeometryGroup *this, char a2)
{
  this->vtbl = (NiGeometryGroupVtbl *)&NiUnsharedGeometryGroup::`vftable'; /*0x77ddc3*/
  if ( this == unk_B428A0 ) /*0x77ddcf*/
    unk_B428A0 = 0; /*0x77ddd1*/
  sub_7828F0(this); /*0x77dddb*/
  if ( (a2 & 1) != 0 ) /*0x77dde5*/
    FormHeapFree((unsigned int)this); /*0x77dde8*/
  return this; /*0x77ddf2*/
}
