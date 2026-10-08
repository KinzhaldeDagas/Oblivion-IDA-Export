int __thiscall sub_6F1080(_DWORD *this)
{
  int result; // eax

  result = *(this + 1); /*0x6f1080*/
  if ( result ) /*0x6f1085*/
    return (*(this + 2) - result) / 0xC; /*0x6f109b*/
  return result; /*0x6f1087*/
}
