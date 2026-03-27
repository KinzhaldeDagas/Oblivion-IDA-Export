char __thiscall EffectItemList_HasEffect(_DWORD *this, int a2, int a3)
{
  char result; // al
  _DWORD *v4; // edx
  bool v5; // bl
  int v6; // ecx

  if ( !*(this + 2) && !*(this + 1) )
    return 0;
  for ( result = 0; this; this = (_DWORD *)(v6 - 4) )
  {
    if ( result )
      break;
    v4 = (_DWORD *)*(this + 1);
    v5 = 1;
    if ( v4 )
    {
      if ( a3 != 0x48 && (*(_DWORD *)(v4[7] + 0x58) & 0x180000) != 0 )
        v5 = v4[5] == a3;
      if ( *v4 == a2 && (*(_DWORD *)(v4[7] + 0x58) & 0x400000) == 0 && v5 )
        result = 1;
    }
    v6 = *(this + 2);
    if ( !v6 )
      break;
  }
  return result;
}
