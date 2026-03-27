double __thiscall sub_4CCE00(ExtraDataList *this)
{
  float v2; // [esp+0h] [ebp-4h]

  v2 = 0.0;
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
    return (float)sub_420C40(this + 2);
  return v2;
}
