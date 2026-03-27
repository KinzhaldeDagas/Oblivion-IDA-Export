LONG sub_7098B0()
{
  NiMaterialProperty *v0; // eax
  NiMaterialProperty *v1; // esi
  LONG result; // eax
  int (__thiscall ***v3)(_DWORD, int); // edi

  v0 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
  if ( v0 )
    v1 = NiMaterialProperty::NiMaterialProperty(v0);
  else
    v1 = 0;
  result = dword_B3FAA4;
  if ( (NiMaterialProperty *)dword_B3FAA4 != v1 )
  {
    if ( result )
    {
      v3 = (int (__thiscall ***)(_DWORD, int))dword_B3FAA4;
      result = InterlockedDecrement((volatile LONG *)(result + 4));
      if ( !result )
        result = (**v3)(v3, 1);
    }
    dword_B3FAA4 = (int)v1;
    if ( v1 )
      return InterlockedIncrement((volatile LONG *)v1 + 1);
  }
  return result;
}
