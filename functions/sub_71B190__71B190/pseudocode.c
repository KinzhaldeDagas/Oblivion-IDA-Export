NiDevImageConverter *sub_71B190()
{
  NiImageConverter *v0; // eax
  volatile LONG *v1; // esi
  NiDevImageConverter *result; // eax
  NiDevImageConverter *v3; // edi

  v0 = (NiImageConverter *)FormHeapAlloc(0x680u); /*0x71b1b8*/
  if ( v0 ) /*0x71b1ce*/
    v1 = (volatile LONG *)NiImageConverter::NiImageConverter(v0); /*0x71b1d7*/
  else
    v1 = 0; /*0x71b1db*/
  result = unk_B3FD28; /*0x71b1dd*/
  if ( unk_B3FD28 != (NiDevImageConverter *)v1 ) /*0x71b1ec*/
  {
    if ( result ) /*0x71b1f0*/
    {
      v3 = unk_B3FD28; /*0x71b1f2*/
      result = (NiDevImageConverter *)InterlockedDecrement((volatile LONG *)result + 1); /*0x71b1f8*/
      if ( !result ) /*0x71b200*/
        result = (NiDevImageConverter *)(**(int (__thiscall ***)(NiDevImageConverter *, int))v3)(v3, 1); /*0x71b20e*/
    }
    unk_B3FD28 = (NiDevImageConverter *)v1; /*0x71b212*/
    if ( v1 ) /*0x71b218*/
      return (NiDevImageConverter *)InterlockedIncrement(v1 + 1); /*0x71b21e*/
  }
  return result; /*0x71b224*/
}
