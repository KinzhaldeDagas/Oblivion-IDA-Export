int __thiscall sub_4CCE20(ExtraDataList *this, float *a2, _DWORD *a3, float a4)
{
  double v4; // st7
  float *v5; // eax
  int result; // eax
  float v7; // [esp+Ch] [ebp-34h]
  float v8[3]; // [esp+10h] [ebp-30h] BYREF
  float v9[9]; // [esp+1Ch] [ebp-24h] BYREF
  float v10; // [esp+4Ch] [ebp+Ch]
  float v11; // [esp+4Ch] [ebp+Ch]

  if ( LOBYTE(a4) )
    v4 = flt_A30634;
  else
    v4 = 1.0;
  v10 = v4;
  v7 = 0.0;
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
    v7 = sub_420C40(this + 2);
  v11 = v10 * v7;
  if ( v11 == 0.0 )
  {
    v5 = a2;
  }
  else
  {
    qmemcpy(v9, &stru_B26AF0[0xA].unk2C, sizeof(v9));
    NiMatrix33_InitRotationTransform(v9, v11);
    v5 = sub_710250(v8, a2, v9);
  }
  *a3 = *(_DWORD *)v5;
  a3[1] = *((_DWORD *)v5 + 1);
  result = *((_DWORD *)v5 + 2);
  a3[2] = result;
  return result;
}
