void __stdcall sub_8627C0(_DWORD *a1)
{
  float *v1; // ebx
  double v2; // st6
  unsigned int v3; // eax
  double v4; // st5
  float v5; // [esp+10h] [ebp-C0h]
  float v6; // [esp+14h] [ebp-BCh]
  float v7; // [esp+20h] [ebp-B0h]
  float v8; // [esp+2Ch] [ebp-A4h]
  float v9; // [esp+3Ch] [ebp-94h]
  float v10; // [esp+50h] [ebp-80h]
  float v11[13]; // [esp+5Ch] [ebp-74h] BYREF
  float v12[16]; // [esp+90h] [ebp-40h] BYREF

  v1 = (float *)sub_7EE1F0(a1); /*0x8627dd*/
  if ( !v1 ) /*0x8627e1*/
  {
    v1 = (float *)sub_7EE1D0(a1); /*0x8627ea*/
    if ( !v1 ) /*0x8627ee*/
      JUMPOUT(0x862AA2); /*0x862aa2*/
  }
  v2 = kHeadBodyNormalMatchRadius; /*0x8627fe*/
  if ( *(int *)&OB_DisplayDebugFlags_010201A0[4] > 0 ) /*0x86280e*/
  {
    qmemcpy(v11, v1 + 2, sizeof(v11)); /*0x862820*/
    v12[0] = v11[0]; /*0x862826*/
    v12[1] = v11[1]; /*0x862831*/
    v12[2] = v11[2]; /*0x86283c*/
    v12[3] = v11[9]; /*0x86284a*/
    v12[4] = v11[3]; /*0x862855*/
    v12[5] = v11[4]; /*0x862860*/
    v12[6] = v11[5]; /*0x862874*/
    v3 = 5; /*0x862889*/
    v12[7] = v11[0xA]; /*0x86288e*/
    v12[8] = v11[6]; /*0x862899*/
    v12[9] = v11[7]; /*0x8628a4*/
    v12[0xA] = v11[8]; /*0x8628b2*/
    v12[0xB] = v11[0xB]; /*0x8628c0*/
    v12[0xC] = 0.0; /*0x8628c9*/
    v12[0xD] = 0.0; /*0x8628d0*/
    v12[0xE] = 0.0; /*0x8628d7*/
    v12[0xF] = v11[0xC]; /*0x8628e5*/
    qmemcpy(&OB_ShaderConstantStorage_010201A0[0x121], v12, 0x40u); /*0x8628ec*/
    v5 = v1[0x10]; /*0x8628f1*/
    v6 = 1.0; /*0x8628f7*/
    while ( 1 ) /*0x8628fd*/
    {
      v4 = v5; /*0x8628fd*/
      if ( (v3 & 1) != 0 ) /*0x862901*/
        v6 = v4 * v6; /*0x862909*/
      v3 >>= 1; /*0x86290d*/
      if ( !v3 ) /*0x86290f*/
      {
        OB_ShaderConstantStorage_010201A0[0x101] = 1.0 - v6; /*0x86292b*/
        switch ( *((_BYTE *)v1 + 0x44) ) /*0x86293e*/
        {
          case 0: /*0x86293e*/
            OB_ShaderConstantStorage_010201A0[0x47D] = 0.0; /*0x862957*/
            v7 = v2; /*0x86295d*/
            OB_ShaderConstantStorage_010201A0[0x47E] = v7; /*0x86296d*/
            OB_ShaderConstantStorage_010201A0[0x47F] = 0.0; /*0x862973*/
            OB_ShaderConstantStorage_010201A0[0x480] = v7; /*0x862979*/
            break; /*0x86297f*/
          case 1: /*0x86293e*/
            v9 = v2; /*0x862986*/
            OB_ShaderConstantStorage_010201A0[0x47D] = v9; /*0x86299a*/
            OB_ShaderConstantStorage_010201A0[0x47E] = v9; /*0x8629ae*/
            OB_ShaderConstantStorage_010201A0[0x47F] = 0.0; /*0x8629b4*/
            OB_ShaderConstantStorage_010201A0[0x480] = v9; /*0x8629ba*/
            JUMPOUT(0x862A5E); /*0x862a5e*/
          case 2: /*0x86293e*/
            OB_ShaderConstantStorage_010201A0[0x47D] = 0.0; /*0x8629cf*/
            v10 = v2; /*0x8629d5*/
            OB_ShaderConstantStorage_010201A0[0x47E] = v10; /*0x8629ed*/
            OB_ShaderConstantStorage_010201A0[0x47F] = v10; /*0x8629f3*/
            OB_ShaderConstantStorage_010201A0[0x480] = v10; /*0x8629f9*/
            break; /*0x8629ff*/
          case 3: /*0x86293e*/
            v8 = v2; /*0x862a03*/
            OB_ShaderConstantStorage_010201A0[0x47D] = v8; /*0x862a13*/
            OB_ShaderConstantStorage_010201A0[0x47E] = v8; /*0x862a29*/
            OB_ShaderConstantStorage_010201A0[0x47F] = v8; /*0x862a2f*/
            OB_ShaderConstantStorage_010201A0[0x480] = v8; /*0x862a35*/
            break; /*0x862a3b*/
          default:
            JUMPOUT(0x862A3D); /*0x862a3d*/
        }
        JUMPOUT(0x862A60); /*0x862a60*/
      }
      v5 = v4 * v4; /*0x862913*/
    }
  }
  JUMPOUT(0x862A9D); /*0x862a9d*/
}
