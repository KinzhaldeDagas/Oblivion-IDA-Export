LONG sub_73FED0()
{
  NiObjectNET *v0; // eax
  int v1; // esi
  LONG result; // eax
  int (__thiscall ***v3)(_DWORD, int); // edi

  v0 = (NiObjectNET *)FormHeapAlloc(0x18u);
  v1 = (int)v0;
  if ( v0 )
  {
    NiObjectNET::NiObjectNET(v0);
    *(_DWORD *)v1 = &NiRendererSpecificProperty::`vftable';
  }
  else
  {
    v1 = 0;
  }
  result = dword_B401D8;
  if ( dword_B401D8 != v1 )
  {
    if ( result )
    {
      v3 = (int (__thiscall ***)(_DWORD, int))dword_B401D8;
      result = InterlockedDecrement((volatile LONG *)(result + 4));
      if ( !result )
        result = (**v3)(v3, 1);
    }
    dword_B401D8 = v1;
    if ( v1 )
      return InterlockedIncrement((volatile LONG *)(v1 + 4));
  }
  return result;
}
