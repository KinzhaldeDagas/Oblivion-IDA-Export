NiObjectNET *sub_73DBB0()
{
  NiObjectNET *result; // eax
  NiObjectNET *v1; // esi
  int v2; // edi

  result = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v1 = result;
  if ( result )
  {
    result = NiObjectNET::NiObjectNET(result);
    v1->vtbl = (NiObjectVtbl **)&NiShadeProperty::`vftable';
    LOWORD(v1[1].vtbl) = 1;
  }
  else
  {
    v1 = 0;
  }
  v2 = dword_B401AC;
  if ( (NiObjectNET *)dword_B401AC != v1 )
  {
    if ( v2 )
    {
      result = (NiObjectNET *)InterlockedDecrement((volatile LONG *)(v2 + 4));
      if ( !result )
        result = (NiObjectNET *)(**(int (__thiscall ***)(int, int))v2)(v2, 1);
    }
    dword_B401AC = (int)v1;
    if ( v1 )
      return (NiObjectNET *)InterlockedIncrement((volatile LONG *)&v1->members);
  }
  return result;
}
