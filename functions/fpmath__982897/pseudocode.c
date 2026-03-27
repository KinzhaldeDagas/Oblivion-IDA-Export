int __cdecl _fpmath(int a1)
{
  int result; // eax

  _cfltcvt_init_0();
  result = _ms_p5_mp_test_fdiv();
  dword_BA9DE0 = result;
  if ( a1 )
    result = _setdefaultprecision();
  __asm { fnclex }
  return result;
}
