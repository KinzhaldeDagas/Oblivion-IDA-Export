unsigned int __thiscall sub_484BA0(ExtraDataList ***this)
{
  ExtraDataList **v1; // ecx
  unsigned int result; // eax
  ExtraDataList *v3; // ecx

  v1 = *this; /*0x484ba0*/
  result = 0xFFFFFFFF; /*0x484ba2*/
  if ( v1 ) /*0x484ba7*/
  {
    v3 = *v1; /*0x484ba9*/
    if ( v3 ) /*0x484bad*/
      return (char)sub_422C40(v3); /*0x484bb4*/
  }
  return result; /*0x484bb7*/
}
