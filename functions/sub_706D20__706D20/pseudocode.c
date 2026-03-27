LONG sub_706D20()
{
  NiObjectNET *v0; // eax
  int v1; // esi
  LONG result; // eax
  int (__thiscall ***v3)(_DWORD, int); // edi

  v0 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v1 = (int)v0;
  if ( v0 )
  {
    NiObjectNET::NiObjectNET(v0);
    *(_DWORD *)v1 = &NiZBufferProperty::`vftable';
    *(_WORD *)(v1 + 0x18) = 0xF;
  }
  else
  {
    v1 = 0;
  }
  result = dword_B3F998;
  if ( dword_B3F998 != v1 )
  {
    if ( result )
    {
      v3 = (int (__thiscall ***)(_DWORD, int))dword_B3F998;
      result = InterlockedDecrement((volatile LONG *)(result + 4));
      if ( !result )
        result = (**v3)(v3, 1);
    }
    dword_B3F998 = v1;
    if ( v1 )
      return InterlockedIncrement((volatile LONG *)(v1 + 4));
  }
  return result;
}
