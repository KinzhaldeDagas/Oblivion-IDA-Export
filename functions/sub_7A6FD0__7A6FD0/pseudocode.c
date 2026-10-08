// Oblivion Random::Next. Rejects an uninitialized seed, selects Buffer[int(Raw()*128)], replaces that entry with another Raw() result, and returns the prior buffered sample.
float __thiscall OB_Random_Next_010201A0(OB_Random_010201A0 *this)
{
  int v1; // edi
  double v2; // st7
  int v3; // esi
  rsize_t v6; // [esp-4h] [ebp-60h]
  float v7; // [esp+8h] [ebp-54h]
  int v8; // [esp+Ch] [ebp-50h] BYREF
  char v9; // [esp+10h] [ebp-4Ch]
  int v10; // [esp+20h] [ebp-3Ch]
  int v11; // [esp+24h] [ebp-38h]
  _BYTE v12[40]; // [esp+28h] [ebp-34h] BYREF
  int v13; // [esp+58h] [ebp-4h]

  if ( 0.0 == OB_Random_seed_010201A0 ) /*0x7a7001*/
  {
    LODWORD(v6) = 0x27; /*0x7a7003*/
    v11 = 0xF; /*0x7a700e*/
    v10 = 0; /*0x7a7016*/
    v9 = 0; /*0x7a701e*/
    OB_stString28_AssignBytes_010201A0(&v8, v1, "Random number generator not initialised", v6); /*0x7a7023*/
    v13 = 0; /*0x7a7031*/
    sub_4146E0((std::exception *)v12, &v8); /*0x7a7039*/
    ThrowException__((DWORD)v12, &_TI2_AVlogic_error_std__); /*0x7a7048*/
  }
  v2 = OB_Random_Raw_010201A0(); /*0x7a704d*/
  v3 = Double_To_SInt32(v2 * dbl_A3F428); /*0x7a705d*/
  v7 = *(float *)(4 * v3 + 0xB42A90); /*0x7a7066*/
  *(float *)(4 * v3 + 0xB42A90) = OB_Random_Raw_010201A0(); /*0x7a706f*/
  return v7; /*0x7a707a*/
}
