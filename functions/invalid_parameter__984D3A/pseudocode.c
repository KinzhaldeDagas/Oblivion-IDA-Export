int __usercall _invalid_parameter@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>)
{
  int (*v3)(void); // eax
  int v5; // eax
  int v6; // edx

  v3 = (int (*)(void))_decode_pointer(*(void **)&byte_BA9DCC[0x1C]); /*0x984d43*/
  if ( !v3 ) /*0x984d4b*/
  {
    sub_9933A9(); /*0x984d52*/
    _invoke_watson(v5, v6, 2, a1, a2, a3); /*0x984d59*/
  }
  return v3(); /*0x984d58*/
}
