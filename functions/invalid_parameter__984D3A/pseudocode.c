int __usercall _invalid_parameter@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>)
{
  int (*v3)(void); // eax
  int v5; // eax
  int v6; // edx

  v3 = (int (*)(void))_decode_pointer(dword_BA9DE8);
  if ( !v3 )
  {
    sub_9933A9();
    _invoke_watson(v5, v6, 2, a1, a2, a3);
  }
  return v3();
}
