bhkCharacterProxy *__thiscall sub_666B50(MobileObject *this)
{
  bhkCharacterProxy *result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  result = MobileObject_GetCharProxy(this); /*0x666b53*/
  if ( result ) /*0x666b5a*/
  {
    v3 = *((_DWORD *)result + 0xD9); /*0x666b5c*/
    if ( v3 && (v4 = *(_DWORD *)(v3 + 8)) != 0 && (v5 = v4 + 0x14) != 0 ) /*0x666b70*/
      return (bhkCharacterProxy *)sub_531E80(*((_DWORD ***)this + 0x7C), HIWORD(*(_DWORD *)(v5 + 0x1C))); /*0x666b7f*/
    else
      return (bhkCharacterProxy *)sub_531E80(*((_DWORD ***)this + 0x7C), 0); /*0x666ba2*/
  }
  return result; /*0x666b84*/
}
