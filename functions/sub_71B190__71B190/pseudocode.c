NiDevImageConverter *sub_71B190()
{
  NiImageConverter *v0; // eax
  volatile LONG *v1; // esi
  NiDevImageConverter *result; // eax
  NiDevImageConverter *v3; // edi

  v0 = (NiImageConverter *)FormHeapAlloc(0x680u);
  if ( v0 )
    v1 = (volatile LONG *)NiImageConverter::NiImageConverter(v0);
  else
    v1 = 0;
  result = dword_B3FD28;
  if ( dword_B3FD28 != (NiDevImageConverter *)v1 )
  {
    if ( result )
    {
      v3 = dword_B3FD28;
      result = (NiDevImageConverter *)InterlockedDecrement((volatile LONG *)result + 1);
      if ( !result )
        result = (NiDevImageConverter *)(**(int (__thiscall ***)(NiDevImageConverter *, int))v3)(v3, 1);
    }
    dword_B3FD28 = (NiDevImageConverter *)v1;
    if ( v1 )
      return (NiDevImageConverter *)InterlockedIncrement(v1 + 1);
  }
  return result;
}
