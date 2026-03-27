unsigned int __thiscall sub_484BA0(ExtraDataList ***this)
{
  ExtraDataList **v1; // ecx
  unsigned int result; // eax
  ExtraDataList *v3; // ecx

  v1 = *this;
  result = 0xFFFFFFFF;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return (char)sub_422C40(v3);
  }
  return result;
}
