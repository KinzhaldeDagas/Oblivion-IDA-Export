int __stdcall sub_7F0100(_DWORD *a1, int a2, float a3)
{
  double v3; // st7
  double v4; // st7
  int result; // eax
  int v6; // [esp+14h] [ebp-34h] BYREF
  float v7; // [esp+18h] [ebp-30h]
  float v8; // [esp+1Ch] [ebp-2Ch]
  float v9[3]; // [esp+20h] [ebp-28h] BYREF
  int v10; // [esp+2Ch] [ebp-1Ch] BYREF
  float v11; // [esp+30h] [ebp-18h]
  int v12; // [esp+34h] [ebp-14h]
  float v13; // [esp+38h] [ebp-10h]
  _BYTE v14[12]; // [esp+3Ch] [ebp-Ch] BYREF

  *(float *)&v6 = -flt_B465A8;
  v7 = -flt_B465AC;
  v8 = -flt_B465B0;
  D3DXVec3TransformNormal_0(v14, &v6, a2);
  D3DXVec3Normalize_0(&v6, v14);
  v10 = v6;
  v3 = v7;
  dword_B46738 = v6;
  v11 = v3;
  v4 = v8;
  *(float *)&dword_B4673C = v11;
  *(float *)&v12 = v4;
  dword_B46740 = v12;
  v13 = 0.0;
  *(float *)&dword_B46744 = 0.0;
  result = sub_7ED5D0(a1);
  if ( (_WORD)result )
  {
    v9[0] = flt_B46538;
    v9[1] = flt_B4653C;
    v9[2] = flt_B46540;
    result = D3DXVec3TransformCoord_0(&v10, v9, a2);
    flt_B46748 = *(float *)&v10;
    flt_B4674C = v11;
    flt_B46750 = *(float *)&v12;
    flt_B46754 = flt_B465B8 / a3;
  }
  return result;
}
