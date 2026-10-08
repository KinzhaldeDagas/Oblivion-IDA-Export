NiObject *__stdcall sub_74F8C0(__int16 a1)
{
  NiObject *v1; // eax
  NiObject *v3; // eax

  if ( a1 ) /*0x74f8c8*/
  {
    if ( a1 == 1 ) /*0x74f8ec*/
    {
      v3 = (NiObject *)FormHeapAlloc(0x18u); /*0x74f8f0*/
      if ( v3 ) /*0x74f8fa*/
        return sub_6E7FA0(v3, 0); /*0x74f906*/
    }
  }
  else
  {
    v1 = (NiObject *)FormHeapAlloc(0x18u); /*0x74f8cc*/
    if ( v1 ) /*0x74f8d6*/
      return sub_6D29E0(v1, 0.0); /*0x74f8e5*/
  }
  return 0; /*0x74f8e5*/
}
