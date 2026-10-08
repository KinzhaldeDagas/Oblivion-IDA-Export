// Transforms the global directional light vector into object space and writes leaf c11; optional point-light position becomes c12. Does not touch texture or alpha.
int __stdcall OB_SpeedTreeLeafShader_UpdateObjectSpaceLightConstants_010201A0(
        void *leafProperty,
        const float *inverseWorld,
        float objectScale)
{
  double v3; // st7
  double v4; // st7
  int result; // eax
  float v6; // [esp+14h] [ebp-34h] BYREF
  float v7; // [esp+18h] [ebp-30h]
  float v8; // [esp+1Ch] [ebp-2Ch]
  float v9[3]; // [esp+20h] [ebp-28h] BYREF
  float v10; // [esp+2Ch] [ebp-1Ch] BYREF
  float v11; // [esp+30h] [ebp-18h]
  float v12; // [esp+34h] [ebp-14h]
  float v13; // [esp+38h] [ebp-10h]
  _BYTE v14[12]; // [esp+3Ch] [ebp-Ch] BYREF

  v6 = -OB_ShaderConstantStorage_010201A0[0x1E5];// Leaf c11 source is the negated shared slot-0 vector. Reset supplies nonzero +X fallback; this function transforms and normalizes it into object space each draw. /*0x7f0110*/
  v7 = -OB_ShaderConstantStorage_010201A0[0x1E6]; /*0x7f0122*/
  v8 = -OB_ShaderConstantStorage_010201A0[0x1E7]; /*0x7f0133*/
  D3DXVec3TransformNormal_0((int)v14, (int)&v6, (int)inverseWorld); /*0x7f0137*/
  D3DXVec3Normalize_0((int)&v6, (int)v14); /*0x7f0146*/
  v10 = v6; /*0x7f014f*/
  v3 = v7; /*0x7f0157*/
  OB_ShaderConstantStorage_010201A0[0x249] = v6;// Write leaf object-space directional-light constant c11.xyz. Normals/card data can suppress directional diffuse via NdotL, but cannot suppress a nonzero ambient c5 term. /*0x7f015b*/
  v11 = v3; /*0x7f0161*/
  v4 = v8; /*0x7f0169*/
  OB_ShaderConstantStorage_010201A0[0x24A] = v11; /*0x7f016d*/
  v12 = v4; /*0x7f0173*/
  OB_ShaderConstantStorage_010201A0[0x24B] = v12; /*0x7f017d*/
  v13 = 0.0; /*0x7f0182*/
  OB_ShaderConstantStorage_010201A0[0x24C] = 0.0; /*0x7f018a*/
  result = OB_BSShaderProperty_CountPassListEntriesWithMarker_010201A0(leafProperty); /*0x7f0194*/
  if ( (_WORD)result ) /*0x7f019c*/
  {
    v9[0] = OB_ShaderConstantStorage_010201A0[0x1C9]; /*0x7f01a5*/
    v9[1] = OB_ShaderConstantStorage_010201A0[0x1CA]; /*0x7f01b4*/
    v9[2] = OB_ShaderConstantStorage_010201A0[0x1CB]; /*0x7f01c3*/
    result = D3DXVec3TransformCoord_0((int)&v10, (int)v9, (int)inverseWorld); /*0x7f01c7*/
    OB_ShaderConstantStorage_010201A0[0x24D] = v10; /*0x7f01d0*/
    OB_ShaderConstantStorage_010201A0[0x24E] = v11; /*0x7f01da*/
    OB_ShaderConstantStorage_010201A0[0x24F] = v12; /*0x7f01e4*/
    OB_ShaderConstantStorage_010201A0[0x250] = OB_ShaderConstantStorage_010201A0[0x1E9] / objectScale; /*0x7f01f4*/
  }
  return result; /*0x7f01fa*/
}
