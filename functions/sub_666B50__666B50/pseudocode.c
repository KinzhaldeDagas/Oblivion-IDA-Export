bhkCharacterProxy *__thiscall sub_666B50(MobileObject *this)
{
  bhkCharacterProxy *result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  result = MobileObject_GetCharProxy(this);
  if ( result )
  {
    v3 = *((_DWORD *)result + 0xD9);
    if ( v3 && (v4 = *(_DWORD *)(v3 + 8)) != 0 && (v5 = v4 + 0x14) != 0 )
      return (bhkCharacterProxy *)sub_531E80(*((_DWORD ***)this + 0x7C), HIWORD(*(_DWORD *)(v5 + 0x1C)));
    else
      return (bhkCharacterProxy *)sub_531E80(*((_DWORD ***)this + 0x7C), 0);
  }
  return result;
}
