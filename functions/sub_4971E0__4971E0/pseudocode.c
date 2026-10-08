int sub_4971E0()
{
  int result; // eax

  result = FormHeapAlloc(0x10u); /*0x4971e2*/
  if ( result ) /*0x4971ee*/
  {
    *(_DWORD *)(result + 8) = 0; /*0x4971f0*/
    *(_DWORD *)(result + 0xC) = 0; /*0x4971f3*/
    *(_DWORD *)(result + 8) = 0; /*0x4971f8*/
    *(_DWORD *)(result + 0xC) = 0; /*0x4971fb*/
  }
  else
  {
    *(_DWORD *)8 = 0; /*0x497203*/
    *(_DWORD *)0xC = 0; /*0x497206*/
    return 0; /*0x4971ff*/
  }
  return result; /*0x4971fe*/
}
