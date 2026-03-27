_DWORD *__thiscall sub_755D90(float *this, float a2, int a3, int a4)
{
  float *v5; // edx
  double v6; // st7
  double v7; // st5
  bool v8; // c0
  bool v9; // c3
  double v10; // st7
  double v11; // st6
  double v12; // st6
  double v13; // st5
  double v14; // st4
  float v16; // [esp+0h] [ebp-2Ch]
  float v17; // [esp+14h] [ebp-18h]
  float v18; // [esp+18h] [ebp-14h]
  float v19; // [esp+1Ch] [ebp-10h]
  float v20; // [esp+20h] [ebp-Ch]
  float v21; // [esp+24h] [ebp-8h]
  float v22; // [esp+28h] [ebp-4h]
  float v23; // [esp+38h] [ebp+Ch]
  float v24; // [esp+38h] [ebp+Ch]
  float v25; // [esp+38h] [ebp+Ch]
  float v26; // [esp+38h] [ebp+Ch]
  float v27; // [esp+38h] [ebp+Ch]

  v5 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * (unsigned __int16)a4);
  v23 = *(this + 0x17) * v5[1] + *v5 * *(this + 0x16) + *(this + 0x18) * v5[2];
  v6 = v23;
  v17 = *(this + 0x16) * v23;
  v18 = *(this + 0x17) * v23;
  v19 = *(this + 0x18) * v23;
  if ( a2 != *(this + 8) )
  {
    v10 = a2;
    goto LABEL_5;
  }
  v7 = flt_A86938;
  v8 = v7 < v6;
  v9 = v7 == v6;
  v10 = a2;
  if ( v8 || v9 )
  {
LABEL_5:
    v20 = v17 + v17;
    v21 = v18 + v18;
    v22 = v19 + v19;
    v24 = *v5 - v20;
    v12 = v24;
    *v5 = v24;
    v25 = v5[1] - v21;
    v13 = v25;
    v5[1] = v25;
    v26 = v5[2] - v22;
    v14 = v26;
    v5[2] = v26;
    v27 = *(this + 2);
    *v5 = v12 * v27;
    v5[1] = v13 * v27;
    v11 = v27 * v14;
    goto LABEL_6;
  }
  *v5 = *v5 - v17;
  v5[1] = v5[1] - v18;
  v11 = v5[2] - v19;
LABEL_6:
  v5[2] = v11;
  v16 = v10;
  return sub_75EC40((int)this, v16, a3, a4);
}
