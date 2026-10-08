char __cdecl sub_4F60E0(int a1, int a2, int a3, double *a4)
{
  double v4; // st7

  if ( !a1 ) /*0x4f60eb*/
  {
    if ( !a2 ) /*0x4f6113*/
      goto LABEL_8; /*0x4f6113*/
    v4 = (double)(*(_BYTE *)(a2 + 4) & 1); /*0x4f6122*/
    goto LABEL_7; /*0x4f6122*/
  }
  *a4 = 0.0; /*0x4f60ef*/
  if ( (*(_DWORD *)(a1 + 8) & 0x800) != 0 || sub_4FA560(a1) ) /*0x4f60fd*/
  {
    v4 = 1.0; /*0x4f6109*/
LABEL_7:
    *a4 = v4; /*0x4f6126*/
  }
LABEL_8:
  if ( MEMORY[0xB361AC] ) /*0x4f6128*/
    Interface_ConsolePrint("GetDisabled >> %0.f", *a4); /*0x4f613e*/
  return 1; /*0x4f6148*/
}
