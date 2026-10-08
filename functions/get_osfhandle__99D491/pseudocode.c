int __cdecl _get_osfhandle(int a1)
{
  int v1; // ebx
  int v2; // edi
  int v4; // eax

  if ( a1 == 0xFFFFFFFE ) /*0x99d498*/
  {
    *__doserrno() = 0; /*0x99d49f*/
    *_errno() = 9; /*0x99d4a7*/
    return 0xFFFFFFFF; /*0x99d4ad*/
  }
  else if ( a1 >= 0 /*0x99d4d8*/
         && a1 < MEMORY[0xBAAAA0]
         && (v4 = unk_BAAAC0[a1 >> 5] + 0x28 * (a1 & 0x1F), (*(_BYTE *)(v4 + 4) & 1) != 0) )
  {
    return *(_DWORD *)v4; /*0x99d4fe*/
  }
  else
  {
    *__doserrno() = 0; /*0x99d4df*/
    *_errno() = 9; /*0x99d4eb*/
    _invalid_parameter(v1, v2, 0); /*0x99d4f1*/
    return 0xFFFFFFFF; /*0x99d4f9*/
  }
}
