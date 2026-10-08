char __thiscall sub_65AAD0(MobileObject *this)
{
  bhkCharacterProxy *CharProxy; // esi
  int v2; // eax
  bool v3; // zf
  char result; // al

  CharProxy = MobileObject_GetCharProxy(this); /*0x65aad9*/
  if ( !CharProxy ) /*0x65aadd*/
    return 0; /*0x65aadd*/
  if ( !sub_8BA170(*((_DWORD **)CharProxy + 0x7A), *((_DWORD *)CharProxy + 0x7B)) ) /*0x65aaec*/
    return 0; /*0x65aaec*/
  v2 = sub_8BA170(*((_DWORD **)CharProxy + 0x7A), *((_DWORD *)CharProxy + 0x7B)); /*0x65ab02*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2) == 2; /*0x65ab10*/
  result = 1; /*0x65ab13*/
  if ( !v3 ) /*0x65ab15*/
    return 0; /*0x65ab17*/
  return result; /*0x65ab19*/
}
