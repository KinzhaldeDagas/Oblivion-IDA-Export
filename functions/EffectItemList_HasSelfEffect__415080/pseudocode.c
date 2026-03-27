bool __fastcall EffectItemList_HasSelfEffect(int a1)
{
  bool result; // al
  int v2; // edx
  int v3; // ecx

  if ( !*(_DWORD *)(a1 + 8) && !*(_DWORD *)(a1 + 4) )
    return 0;
  for ( result = 0; a1; a1 = v3 - 4 )
  {
    if ( result )
      break;
    v2 = *(_DWORD *)(a1 + 4);
    if ( v2 )
    {
      if ( !*(_DWORD *)(v2 + 0x10) )
        result = (*(_DWORD *)(*(_DWORD *)(v2 + 0x1C) + 0x58) & 0x400000) == 0;
    }
    v3 = *(_DWORD *)(a1 + 8);
    if ( !v3 )
      break;
  }
  return result;
}
