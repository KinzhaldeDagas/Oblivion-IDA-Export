// Oblivion stRandom::Reseed. Seed -1 derives a nonzero fractional seed from time and either 12345 or an existing uniform sample; explicit seeds <=1 clamp to 1 and use Random::SetLong. Marks the shared generator initialized.
void __thiscall OB_stRandom_Reseed_010201A0(OB_stRandom_010201A0 *this, int seed)
{
  int v2; // eax
  int v3; // esi
  int v4; // [esp+8h] [ebp-4h]
  int seeda; // [esp+10h] [ebp+4h]
  float seedb; // [esp+10h] [ebp+4h]

  v2 = seed; /*0x78ea31*/
  if ( seed == 0xFFFFFFFF ) /*0x78ea38*/
  {
    v3 = 0x3039; /*0x78ea46*/
    seeda = 0x3039; /*0x78ea4b*/
    if ( OB_SIdvRandomImpl_m_bInit_010201A0 ) /*0x78ea3e*/
    {
      seedb = (dbl_A8C628 - 0.0) * OB_Random_Next_010201A0((OB_Random_010201A0 *)&OB_SIdvRandomImpl_m_cUniform_010201A0) /*0x78ea6b*/
            + 0.0;
      v3 = Double_To_SInt32(seedb); /*0x78ea78*/
      seeda = v3; /*0x78ea7a*/
    }
    v4 = _time64(0); /*0x78ea8a*/
    if ( v3 <= v4 ) /*0x78ea8f*/
      OB_Random_Set_010201A0((double)seeda / (double)v4); /*0x78eabf*/
    else
      OB_Random_Set_010201A0((double)v4 / (double)seeda); /*0x78ea9e*/
    OB_SIdvRandomImpl_m_bInit_010201A0 = 1; /*0x78eaa6*/
  }
  else
  {
    if ( seed <= 1 ) /*0x78ead5*/
      v2 = 1; /*0x78ead7*/
    OB_Random_SetLong_010201A0(v2); /*0x78eadd*/
    OB_SIdvRandomImpl_m_bInit_010201A0 = 1; /*0x78eae5*/
  }
}
