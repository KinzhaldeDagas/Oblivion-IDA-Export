double __usercall sub_7A6FD0@<st0>(int a1@<edi>)
{
  double v1; // st7
  int v2; // esi
  rsize_t v4; // [esp-4h] [ebp-60h]
  float v5; // [esp+8h] [ebp-54h]
  int v6; // [esp+Ch] [ebp-50h] BYREF
  char v7; // [esp+10h] [ebp-4Ch]
  int v8; // [esp+20h] [ebp-3Ch]
  int v9; // [esp+24h] [ebp-38h]
  _BYTE v10[40]; // [esp+28h] [ebp-34h] BYREF
  int v11; // [esp+58h] [ebp-4h]

  if ( 0.0 == dbl_B42C90 )
  {
    LODWORD(v4) = 0x27;
    v9 = 0xF;
    v8 = 0;
    v7 = 0;
    sub_414500(&v6, a1, "Random number generator not initialised", v4);
    v11 = 0;
    sub_4146E0((std::exception *)v10, &v6);
    ThrowException__((int)v10, &_TI2_AVlogic_error_std__);
  }
  v1 = sub_7A6CD0();
  v2 = Double_To_SInt32(v1 * dbl_A3F428);
  v5 = *(float *)(4 * v2 + 0xB42A90);
  *(float *)(4 * v2 + 0xB42A90) = sub_7A6CD0();
  return v5;
}
