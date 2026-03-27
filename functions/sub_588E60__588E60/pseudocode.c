BSFogProperty *__cdecl sub_588E60(int a1)
{
  Atmosphere *v2; // ebx
  unsigned __int16 v3; // ax
  int v5; // [esp+4h] [ebp-4h]
  unsigned int v6; // [esp+Ch] [ebp+4h]

  if ( !a1 || !*(_WORD *)(a1 + 0x14) )
    return 0;
  v2 = **(Atmosphere ***)(a1 + 0x10);
  v5 = 0;
  v6 = 0;
  if ( v2 || (v2 = **(Atmosphere ***)(*(_DWORD *)(a1 + 0x1C) + 0x10)) != 0 )
  {
    while ( strcmp((const char *)sub_452A60(v2), "Tileptr") )
    {
      v3 = ++v6;
      if ( v6 >= *(unsigned __int16 *)(a1 + 0x14) )
        return (BSFogProperty *)v5;
      v2 = *(Atmosphere **)(*(_DWORD *)(a1 + 0x10) + 4 * v3);
      if ( !v2 )
        return 0;
    }
    return v2->fogProperty;
  }
  return (BSFogProperty *)v5;
}
