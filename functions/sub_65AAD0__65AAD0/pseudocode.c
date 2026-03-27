char __thiscall sub_65AAD0(MobileObject *this)
{
  bhkCharacterProxy *CharProxy; // esi
  int v2; // eax
  bool v3; // zf
  char result; // al

  CharProxy = MobileObject_GetCharProxy(this);
  if ( !CharProxy )
    return 0;
  if ( !sub_8BA170(*((_DWORD **)CharProxy + 0x7A), *((_DWORD *)CharProxy + 0x7B)) )
    return 0;
  v2 = sub_8BA170(*((_DWORD **)CharProxy + 0x7A), *((_DWORD *)CharProxy + 0x7B));
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2) == 2;
  result = 1;
  if ( !v3 )
    return 0;
  return result;
}
