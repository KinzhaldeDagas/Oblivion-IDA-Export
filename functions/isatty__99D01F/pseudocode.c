int __cdecl _isatty(int a1)
{
  int v1; // ebx
  int v2; // edi

  if ( a1 == 0xFFFFFFFE ) /*0x99d026*/
  {
    *_errno() = 9; /*0x99d02d*/
    return 0; /*0x99d033*/
  }
  else if ( a1 >= 0 && a1 < MEMORY[0xBAAAA0] ) /*0x99d043*/
  {
    return *(_BYTE *)(unk_BAAAC0[a1 >> 5] + 0x28 * (a1 & 0x1F) + 4) & 0x40; /*0x99d078*/
  }
  else
  {
    *_errno() = 9; /*0x99d04f*/
    _invalid_parameter(v1, v2, 0); /*0x99d055*/
    return 0; /*0x99d05d*/
  }
}
