bool __thiscall sub_681D90(_DWORD *this, MobileObject *a2)
{
  _DWORD *v2; // esi
  char v3; // bl
  bhkCharacterProxy *CharProxy; // eax

  if ( !a2 || byte_BA7A04 )
    return 0;
  v2 = this + 0xA;
  *(this + 0xA) = 0;
  *(this + 0xB) = 0;
  *(this + 0xC) = 0;
  v3 = 0;
  CharProxy = MobileObject_GetCharProxy(a2);
  if ( CharProxy )
  {
    if ( !sub_88D370((_DWORD *)CharProxy + 0x78) )
      return sub_681A60(a2, (int)v2) != 0;
  }
  return v3;
}
