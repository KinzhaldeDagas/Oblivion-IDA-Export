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
  NiTransform parent; // [esp+5Ch] [ebp-9Ch] BYREF
  NiTransform local; // [esp+90h] [ebp-68h] BYREF
  NiTransform out; // [esp+C4h] [ebp-34h] BYREF

  qmemcpy(&local, (const void *)(*((_DWORD *)this + 6) + 0x64), sizeof(local)); /*0x7573fd*/
  qmemcpy(&v15[0x18], (const void *)(*((_DWORD *)this + 4) + 0x64), 0x34u); /*0x757412*/
  sub_718A80((float *)&v15[0x18], &parent); /*0x757419*/
  NiTransform_Compose(&parent, &out, &local); /*0x757432*/
  sub_7101F0(&out, (NiTransform *)v15, (NiPoint3 *)this + 4); /*0x757447*/
  Vector3_NormalizeInPlace((float *)v15); /*0x757450*/
  v5 = 0; /*0x757465*/
  v6 = *(_WORD *)(a3 + 0x48) == 0; /*0x757467*/
  v7 = *(this + 7); /*0x757473*/
  *(float *)v15 = *(float *)v15 * v7; /*0x757479*/
  *(float *)&v15[4] = *(float *)&v15[4] * v7; /*0x757483*/
  *(float *)&v15[8] = v7 * *(float *)&v15[8]; /*0x75748b*/
  if ( !v6 ) /*0x75748f*/
  {
    do /*0x757509*/
    {
      result = *(_DWORD *)(a3 + 0x5C); /*0x7574a8*/
      v8 = (float *)(result + 0x1C * v5); /*0x7574ab*/
      v14 = a2 - v8[5]; /*0x7574b1*/
      v10 = v14 < 0.0; /*0x7574bb*/
      v11 = 0; /*0x7574bb*/
      v12 = v14 == 0.0; /*0x7574bb*/
      LOWORD(result) = v9; /*0x7574bd*/
      v13 = v14; /*0x7574bf*/
      if ( v14 != 0.0 ) /*0x7574c4*/
      {
        *(float *)&v15[0xC] = *(float *)v15 * v13; /*0x7574cc*/
        *(float *)&v15[0x10] = *(float *)&v15[4] * v13; /*0x7574d6*/
        *(float *)&v15[0x14] = v13 * *(float *)&v15[8]; /*0x7574de*/
        *v8 = *v8 + *(float *)&v15[0xC]; /*0x7574e8*/
        v8[1] = *(float *)&v15[0x10] + v8[1]; /*0x7574f1*/
        v8[2] = v8[2] + *(float *)&v15[0x14]; /*0x7574fb*/
      }
      ++v5; /*0x757502*/
    }
    while ( v5 < *(_WORD *)(a3 + 0x48) ); /*0x757509*/
  }
  return result; /*0x75750f*/
}
