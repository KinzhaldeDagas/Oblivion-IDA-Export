int __thiscall sub_7573E0(float *this, float a2, int a3)
{
  int result; // eax
  unsigned __int16 v5; // dx
  bool v6; // zf
  double v7; // st5
  float *v8; // ecx
  __int16 v9; // fps
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  double v13; // st5
  float v14; // [esp+Ch] [ebp-ECh]
  _BYTE v15[76]; // [esp+10h] [ebp-E8h] BYREF
  NiTransform v16; // [esp+5Ch] [ebp-9Ch] BYREF
  NiTransform v17; // [esp+90h] [ebp-68h] BYREF
  NiTransform v18; // [esp+C4h] [ebp-34h] BYREF

  qmemcpy(&v17, (const void *)(*((_DWORD *)this + 6) + 0x64), sizeof(v17));
  qmemcpy(&v15[0x18], (const void *)(*((_DWORD *)this + 4) + 0x64), 0x34u);
  sub_718A80((float *)&v15[0x18], &v16);
  sub_53D7A0(&v16, &v18, &v17);
  sub_7101F0(&v18, (NiTransform *)v15, (NiPoint3 *)this + 4);
  sub_43F350((float *)v15);
  v5 = 0;
  v6 = *(_WORD *)(a3 + 0x48) == 0;
  v7 = *(this + 7);
  *(float *)v15 = *(float *)v15 * v7;
  *(float *)&v15[4] = *(float *)&v15[4] * v7;
  *(float *)&v15[8] = v7 * *(float *)&v15[8];
  if ( !v6 )
  {
    do
    {
      result = *(_DWORD *)(a3 + 0x5C);
      v8 = (float *)(result + 0x1C * v5);
      v14 = a2 - v8[5];
      v10 = v14 < 0.0;
      v11 = 0;
      v12 = v14 == 0.0;
      LOWORD(result) = v9;
      v13 = v14;
      if ( v14 != 0.0 )
      {
        *(float *)&v15[0xC] = *(float *)v15 * v13;
        *(float *)&v15[0x10] = *(float *)&v15[4] * v13;
        *(float *)&v15[0x14] = v13 * *(float *)&v15[8];
        *v8 = *v8 + *(float *)&v15[0xC];
        v8[1] = *(float *)&v15[0x10] + v8[1];
        v8[2] = v8[2] + *(float *)&v15[0x14];
      }
      ++v5;
    }
    while ( v5 < *(_WORD *)(a3 + 0x48) );
  }
  return result;
}
