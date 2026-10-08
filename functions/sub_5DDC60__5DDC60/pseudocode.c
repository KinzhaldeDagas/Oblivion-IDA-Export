int __thiscall sub_5DDC60(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x5ddc60*/
  if ( (unsigned int)(a2 - 1) <= 0x2F ) /*0x5ddc6a*/
  {
    result = a2 - 1; /*0x5ddc6c*/
    if ( a2 == 0x18 || a2 == 0x19 ) /*0x5ddc77*/
    {
      result = *(this + result + 0xA); /*0x5ddc8b*/
      *(this + 0x3A) = result; /*0x5ddc8f*/
    }
    else if ( a2 == 7 ) /*0x5ddc7c*/
    {
      *(this + 0x3A) = 0; /*0x5ddc7e*/
    }
  }
  return result; /*0x5ddc88*/
}
