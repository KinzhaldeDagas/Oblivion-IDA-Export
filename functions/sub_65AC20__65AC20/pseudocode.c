bhkCharacterProxy *__thiscall sub_65AC20(MobileObject *this, char a2)
{
  bhkCharacterProxy *result; // eax

  result = MobileObject_GetCharProxy(this); /*0x65ac20*/
  if ( result ) /*0x65ac27*/
  {
    if ( a2 ) /*0x65ac2e*/
      *((_DWORD *)result + 0x7D) |= 0x800u; /*0x65ac30*/
    else
      *((_DWORD *)result + 0x7D) &= ~0x800u; /*0x65ac3d*/
  }
  return result; /*0x65ac3a*/
}
