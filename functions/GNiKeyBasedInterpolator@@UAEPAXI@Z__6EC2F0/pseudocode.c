NiKeyBasedInterpolator *__thiscall NiKeyBasedInterpolator::`scalar deleting destructor'(
        NiKeyBasedInterpolator *this,
        char a2)
{
  *(_DWORD *)this = &NiKeyBasedInterpolator::`vftable'; /*0x6ec2f3*/
  sub_6EBA30(this); /*0x6ec2f9*/
  if ( (a2 & 1) != 0 ) /*0x6ec303*/
    FormHeapFree((unsigned int)this); /*0x6ec306*/
  return this; /*0x6ec310*/
}
