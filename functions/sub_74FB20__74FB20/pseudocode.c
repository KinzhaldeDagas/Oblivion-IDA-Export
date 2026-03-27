char __thiscall sub_74FB20(int *this)
{
  int v2; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  if ( !(unsigned __int8)sub_6CE1B0(this) )
    return 0;
  if ( !NiTMap_GetAt((_DWORD *)(*(this + 0xC) + 0xD4), *(this + 0x10), &v4) )
    return 0;
  if ( !v4 )
    return 0;
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  if ( !v2 )
    return 0;
  while ( (char *)v2 != dword_B40B50 )
  {
    v2 = *(_DWORD *)(v2 + 4);
    if ( !v2 )
      return 0;
  }
  return 1;
}
