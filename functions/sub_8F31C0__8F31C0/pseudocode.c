int sub_8F31C0()
{
  int (__stdcall **v0)(char); // ecx
  int v2; // [esp+Ch] [ebp-74h]

  v0 = &off_A9B230; /*0x8f31e1*/
  if ( flt_B2FDC4 < (double)*(float *)&SrcStr ) /*0x8f31ef*/
    flt_B2FDC4 = fConstant_1 - sub_8F22B0(); /*0x8f31fc*/
  LOWORD(v2) = (_WORD)v0; /*0x8f3206*/
  HIWORD(v2) = (unsigned int)&off_A9B230 >> 0x10; /*0x8f321a*/
  return v2; /*0x8f3216*/
}
