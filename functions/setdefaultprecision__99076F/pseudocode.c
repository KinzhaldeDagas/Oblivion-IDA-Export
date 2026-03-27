errno_t __usercall _setdefaultprecision@<eax>(int a1@<ebx>, int a2@<edi>)
{
  errno_t result; // eax
  int v3; // edx
  int v4; // ecx

  result = _controlfp_s(0, 0x10000u, 0x30000u);
  if ( result )
    _invoke_watson(result, v3, v4, a1, a2, 0);
  return result;
}
