errno_t __usercall _setdefaultprecision@<eax>(int a1@<ebx>, int a2@<edi>)
{
  errno_t result; // eax
  int v3; // edx
  int v4; // ecx

  result = _controlfp_s(0, 0x10000u, 0x30000u); /*0x99077d*/
  if ( result ) /*0x990787*/
    _invoke_watson(result, v3, v4, a1, a2, 0); /*0x99078e*/
  return result; /*0x990796*/
}
