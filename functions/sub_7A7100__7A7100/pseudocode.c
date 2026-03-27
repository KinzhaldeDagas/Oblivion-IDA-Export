void __usercall sub_7A7100(int a1@<edi>, double a2)
{
  float *v2; // esi
  rsize_t v3; // [esp-4h] [ebp-5Ch]
  int v4; // [esp+8h] [ebp-50h] BYREF
  char v5; // [esp+Ch] [ebp-4Ch]
  int v6; // [esp+1Ch] [ebp-3Ch]
  int v7; // [esp+20h] [ebp-38h]
  _BYTE v8[40]; // [esp+24h] [ebp-34h] BYREF
  int v9; // [esp+54h] [ebp-4h]

  if ( a2 >= 1.0 || a2 <= 0.0 )
  {
    LODWORD(v3) = 0x19;
    v7 = 0xF;
    v6 = 0;
    v5 = 0;
    sub_414500(&v4, a1, "Newran: seed out of range", v3);
    v9 = 0;
    sub_4146E0((std::exception *)v8, &v4);
    ThrowException__((int)v8, &_TI2_AVlogic_error_std__);
  }
  v2 = flt_B42A90;
  dbl_B42C90 = (double)Double_To_SInt32(a2 * dbl_A8C628);
  do
    *v2++ = sub_7A6CD0();
  while ( (int)v2 < (int)&dbl_B42C90 );
}
