LONG sub_705240()
{
  NiTexturingProperty *v0; // eax
  NiTexturingProperty *v1; // esi
  LONG result; // eax
  int (__thiscall ***v3)(_DWORD, int); // edi

  v0 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
  if ( v0 )
    v1 = NiTexturingProperty::NiTexturingProperty(v0);
  else
    v1 = 0;
  result = dword_B3F974;
  if ( (NiTexturingProperty *)dword_B3F974 != v1 )
  {
    if ( result )
    {
      v3 = (int (__thiscall ***)(_DWORD, int))dword_B3F974;
      result = InterlockedDecrement((volatile LONG *)(result + 4));
      if ( !result )
        result = (**v3)(v3, 1);
    }
    dword_B3F974 = (int)v1;
    if ( v1 )
      return InterlockedIncrement((volatile LONG *)&v1->super);
  }
  return result;
}
