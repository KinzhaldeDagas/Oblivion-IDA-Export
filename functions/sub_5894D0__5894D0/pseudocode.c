int __fastcall sub_5894D0(int a1)
{
  int result; // eax

  if ( !a1 ) /*0x5894d2*/
    return 0; /*0x5894d2*/
  while ( !*(_DWORD *)(a1 + 0x24) ) /*0x5894d8*/
  {
    a1 = *(_DWORD *)(a1 + 0x10); /*0x5894da*/
    if ( !a1 ) /*0x5894df*/
      return 0; /*0x5894e3*/
  }
  result = *(_DWORD *)(a1 + 0x24); /*0x5894e4*/
  if ( !result ) /*0x5894e9*/
    return 0; /*0x5894eb*/
  return result; /*0x5894e3*/
}
