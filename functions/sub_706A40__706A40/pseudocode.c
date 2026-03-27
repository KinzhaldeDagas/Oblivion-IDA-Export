LONG sub_706A40()
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
    *(_DWORD *)v1 = &NiWireframeProperty::`vftable';
    *(_WORD *)(v1 + 0x18) = 0;
  }
  else
  {
    v1 = 0;
  }
  result = dword_B3F984;
  if ( dword_B3F984 != v1 )
  {
    if ( result )
    {
      v3 = (int (__thiscall ***)(_DWORD, int))dword_B3F984;
      result = InterlockedDecrement((volatile LONG *)(result + 4));
      if ( !result )
        result = (**v3)(v3, 1);
    }
    dword_B3F984 = v1;
    if ( v1 )
      return InterlockedIncrement((volatile LONG *)(v1 + 4));
  }
  return result;
}
