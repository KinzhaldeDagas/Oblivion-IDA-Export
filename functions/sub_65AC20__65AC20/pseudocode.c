bhkCharacterProxy *__thiscall sub_65AC20(MobileObject *this, char a2)
{
  bhkCharacterProxy *result; // eax

  result = MobileObject_GetCharProxy(this);
  if ( result )
  {
    if ( a2 )
      *((_DWORD *)result + 0x7D) |= 0x800u;
    else
      *((_DWORD *)result + 0x7D) &= ~0x800u;
  }
  return result;
}
