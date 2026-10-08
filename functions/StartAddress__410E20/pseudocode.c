DWORD __userpurge StartAddress@<eax>(char a1@<bpl>, const char *lpThreadParameter)
{
  DWORD result; // eax

  sub_410D10(a1, lpThreadParameter); /*0x410e25*/
  result = 0; /*0x410e2a*/
  if ( !unk_B33425 ) /*0x410e35*/
    MEMORY[0xB33434] = 0; /*0x410e37*/
  return result; /*0x410e3c*/
}
