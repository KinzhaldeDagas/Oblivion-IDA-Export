NiDevImageConverter *__cdecl sub_71B290(NiDevImageConverter *a1)
{
  NiDevImageConverter *result; // eax
  NiDevImageConverter *v2; // esi

  result = unk_B3FD28; /*0x71b290*/
  if ( unk_B3FD28 != a1 ) /*0x71b29c*/
  {
    if ( result ) /*0x71b2a0*/
    {
      v2 = unk_B3FD28; /*0x71b2a3*/
      result = (NiDevImageConverter *)InterlockedDecrement((volatile LONG *)result + 1); /*0x71b2a9*/
      if ( !result ) /*0x71b2b1*/
        result = (NiDevImageConverter *)(**(int (__thiscall ***)(NiDevImageConverter *, int))v2)(v2, 1); /*0x71b2bf*/
    }
    unk_B3FD28 = a1; /*0x71b2c4*/
    if ( a1 ) /*0x71b2ca*/
      return (NiDevImageConverter *)InterlockedIncrement((volatile LONG *)a1 + 1); /*0x71b2d0*/
  }
  return result; /*0x71b2d6*/
}
