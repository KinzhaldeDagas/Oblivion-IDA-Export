// Oblivion Random::Set. Requires 0 < seed < 1, converts seed*2147483648 to the shared integer seed, then initializes all 128 shuffled samples with Raw().
void __cdecl OB_Random_Set_010201A0(double seed)
{
  int v1; // edi
  float *v2; // esi
  rsize_t v3; // [esp-4h] [ebp-5Ch]
  int v4; // [esp+8h] [ebp-50h] BYREF
  char v5; // [esp+Ch] [ebp-4Ch]
  int v6; // [esp+1Ch] [ebp-3Ch]
  int v7; // [esp+20h] [ebp-38h]
  _BYTE v8[40]; // [esp+24h] [ebp-34h] BYREF
  int v9; // [esp+54h] [ebp-4h]

  if ( seed >= 1.0 || seed <= 0.0 )
  {
    LODWORD(v3) = 0x19; /*0x7a7183*/
    v7 = 0xF; /*0x7a7190*/
    v6 = 0; /*0x7a7198*/
    v5 = 0; /*0x7a71a0*/
    OB_stString28_AssignBytes_010201A0(&v4, v1, "Newran: seed out of range", v3);
    v9 = 0; /*0x7a71b3*/
    sub_4146E0((std::exception *)v8, &v4); /*0x7a71bb*/
    ThrowException__((DWORD)v8, &_TI2_AVlogic_error_std__); /*0x7a71ca*/
  }
  v2 = OB_Random_Buffer_010201A0; /*0x7a7153*/
  OB_Random_seed_010201A0 = (double)Double_To_SInt32(seed * dbl_A8C628); /*0x7a7158*/
  do /*0x7a7170*/
    *v2++ = OB_Random_Raw_010201A0(); /*0x7a7165*/
  while ( (int)v2 < (int)&OB_Random_seed_010201A0 ); /*0x7a7170*/
}
