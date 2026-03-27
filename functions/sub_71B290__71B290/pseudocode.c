NiDevImageConverter *__cdecl sub_71B290(NiDevImageConverter *a1)
{
  NiDevImageConverter *result; // eax
  NiDevImageConverter *v2; // esi

  result = dword_B3FD28;
  if ( dword_B3FD28 != a1 )
  {
    if ( result )
    {
      v2 = dword_B3FD28;
      result = (NiDevImageConverter *)InterlockedDecrement((volatile LONG *)result + 1);
      if ( !result )
        result = (NiDevImageConverter *)(**(int (__thiscall ***)(NiDevImageConverter *, int))v2)(v2, 1);
    }
    dword_B3FD28 = a1;
    if ( a1 )
      return (NiDevImageConverter *)InterlockedIncrement((volatile LONG *)a1 + 1);
  }
  return result;
}
