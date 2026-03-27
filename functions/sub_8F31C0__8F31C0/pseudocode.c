int sub_8F31C0()
{
  int (__stdcall **v0)(char); // ecx
  int v2; // [esp+Ch] [ebp-74h]

  v0 = &off_A9B230;
  if ( flt_B2FDC4 < (double)*(float *)&SrcStr )
    flt_B2FDC4 = fConstant_1 - sub_8F22B0();
  LOWORD(v2) = (_WORD)v0;
  HIWORD(v2) = (unsigned int)&off_A9B230 >> 0x10;
  return v2;
}
