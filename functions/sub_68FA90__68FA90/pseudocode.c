_DWORD **__cdecl sub_68FA90(_DWORD **a1)
{
  _DWORD **result; // eax
  int *v2; // edi
  int i; // esi

  result = a1; /*0x68fa90*/
  if ( a1 ) /*0x68fa98*/
    v2 = a1[2]; /*0x68fa9a*/
  else
    v2 = 0; /*0x68fa9f*/
  for ( i = 0; i < v2[0x29]; ++i ) /*0x68faa9*/
  {
    result = (_DWORD **)OblivionDynamicCast( /*0x68fac8*/
                          *(void **)(v2[0x28] + 4 * i),
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&hkEntityActivationListener `RTTI Type Descriptor',
                          &bhkTelekinesisListener `RTTI Type Descriptor',
                          0);
    if ( result ) /*0x68fad2*/
    {
      result = (_DWORD **)sub_68FA00(result, v2); /*0x68fad7*/
      i = 0; /*0x68fadc*/
    }
  }
  return result; /*0x68fae9*/
}
