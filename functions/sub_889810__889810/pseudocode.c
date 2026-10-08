void __cdecl sub_889810(float a1, char a2)
{
  double v2; // st6
  double v3; // st7
  unsigned int v4; // ecx
  double v5; // rt1
  double v6; // st6
  double v7; // st7
  int v8; // eax
  double v9; // st6
  double v10; // st5
  int v11; // eax
  double v12; // st7
  double v13; // st4
  double v14; // st5
  double v15; // st6

  flt_B2E2E4 = a1; /*0x889817*/
  flt_B2E2E0 = a1 + OB_ShaderConstantStorage_010201A0[0x186BF]; /*0x889823*/
  v2 = flt_B2E2E0; /*0x88982f*/
  if ( v2 <= flt_A3D14C ) /*0x88983e*/
  {
    v3 = 0.0; /*0x8898a0*/
    if ( v2 <= 0.0 ) /*0x8898a9*/
    {
      OB_ShaderConstantStorage_010201A0[0x186C0] = 0.0; /*0x8898ad*/
      OB_ShaderConstantStorage_010201A0[0x186BE] = 0.0; /*0x8898b7*/
      return; /*0x8898c0*/
    }
  }
  else
  {
    v3 = 0.0; /*0x889842*/
    flt_B2E2E0 = flt_A3D14C; /*0x889844*/
    v2 = flt_B2E2E0; /*0x88984a*/
  }
  v4 = 3 - (a2 != 0); /*0x88985d*/
  if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x186C1]) ) /*0x889854*/
  {
    if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x186C1]) != 0xA ) /*0x88986b*/
    {
      if ( flt_A95CA8 <= v2 ) /*0x88987e*/
      {
        v5 = v2; /*0x8898c1*/
        v6 = v3; /*0x8898c1*/
        v7 = v5; /*0x8898c1*/
        OB_ShaderConstantStorage_010201A0[0x186BF] = v6; /*0x8898c3*/
        v8 = (__int64)(v5 / fMaxTime); /*0x8898e8*/
        LODWORD(OB_ShaderConstantStorage_010201A0[0x186C0]) = v8; /*0x8898ed*/
        if ( v8 > v4 ) /*0x8898f6*/
        {
          v8 = 3 - (a2 != 0); /*0x8898f8*/
          LODWORD(OB_ShaderConstantStorage_010201A0[0x186C0]) = v4; /*0x8898fa*/
        }
        if ( v8 ) /*0x889901*/
        {
          v9 = (double)v8; /*0x889907*/
          if ( v8 < 0 ) /*0x88990b*/
            v9 = v9 + flt_A2FC78; /*0x88990d*/
          OB_ShaderConstantStorage_010201A0[0x186BE] = v7 / v9; /*0x889915*/
        }
        else
        {
          OB_ShaderConstantStorage_010201A0[0x186BE] = v7; /*0x88991f*/
          LODWORD(OB_ShaderConstantStorage_010201A0[0x186C0]) = 1; /*0x889925*/
        }
      }
      else
      {
        OB_ShaderConstantStorage_010201A0[0x186BF] = v2; /*0x889880*/
        OB_ShaderConstantStorage_010201A0[0x186C0] = 0.0; /*0x889886*/
        flt_B2E2E0 = v3; /*0x889890*/
        OB_ShaderConstantStorage_010201A0[0x186BE] = v3; /*0x889896*/
      }
      return; /*0x88989f*/
    }
    flt_B2E2EC = (v2 - flt_B2E2EC) * flt_B2E2F0 + flt_B2E2EC; /*0x889947*/
    v2 = flt_B2E2EC; /*0x88994d*/
LABEL_17:
    OB_ShaderConstantStorage_010201A0[0x186BE] = v2; /*0x889953*/
    LODWORD(OB_ShaderConstantStorage_010201A0[0x186C0]) = 1; /*0x889959*/
    OB_ShaderConstantStorage_010201A0[0x186BF] = v3; /*0x889963*/
    return; /*0x88996c*/
  }
  v10 = fMaxTime; /*0x88996d*/
  OB_ShaderConstantStorage_010201A0[0x186BE] = fMaxTime; /*0x889973*/
  v11 = (__int64)(v2 / v10); /*0x889994*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x186C0]) = v11; /*0x889999*/
  if ( v11 > v4 ) /*0x8899a2*/
  {
    v11 = 3 - (a2 != 0); /*0x8899a4*/
    LODWORD(OB_ShaderConstantStorage_010201A0[0x186C0]) = v4; /*0x8899a6*/
  }
  if ( !v11 ) /*0x8899ad*/
  {
    if ( v10 * dbl_A2FAA0 > v2 ) /*0x8899ff*/
    {
      OB_ShaderConstantStorage_010201A0[0x186BF] = v2; /*0x889a05*/
      flt_B2E2E0 = v3; /*0x889a0b*/
      OB_ShaderConstantStorage_010201A0[0x186BE] = v3; /*0x889a11*/
      return; /*0x889a11*/
    }
    goto LABEL_17; /*0x8899ff*/
  }
  v12 = v10; /*0x8899af*/
  v13 = (double)v11; /*0x8899b7*/
  if ( v11 < 0 ) /*0x8899bb*/
    v13 = v13 + flt_A2FC78; /*0x8899bd*/
  OB_ShaderConstantStorage_010201A0[0x186BF] = v2 - v13 * v10; /*0x8899c7*/
  v14 = v2 - OB_ShaderConstantStorage_010201A0[0x186BF]; /*0x8899d7*/
  v15 = OB_ShaderConstantStorage_010201A0[0x186BF]; /*0x8899d7*/
  flt_B2E2E0 = v14; /*0x8899d9*/
  if ( v15 >= v12 ) /*0x8899e6*/
    OB_ShaderConstantStorage_010201A0[0x186BF] = v12; /*0x8899e8*/
}
