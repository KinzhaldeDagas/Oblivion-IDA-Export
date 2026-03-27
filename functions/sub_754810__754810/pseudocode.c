_DWORD *__thiscall sub_754810(float *this, float a2, int a3, int a4)
{
  float *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  float v10; // [esp+14h] [ebp-18h]
  float v11; // [esp+14h] [ebp-18h]
  float v12; // [esp+18h] [ebp-14h]
  float v13; // [esp+18h] [ebp-14h]
  float v14; // [esp+1Ch] [ebp-10h]
  float v15; // [esp+1Ch] [ebp-10h]
  float v16; // [esp+20h] [ebp-Ch]
  float v17; // [esp+20h] [ebp-Ch]
  float v18; // [esp+24h] [ebp-8h]
  float v19; // [esp+24h] [ebp-8h]
  float v20; // [esp+28h] [ebp-4h]
  float v21; // [esp+28h] [ebp-4h]
  float v22; // [esp+38h] [ebp+Ch]
  float v23; // [esp+38h] [ebp+Ch]
  float v24; // [esp+38h] [ebp+Ch]
  float v25; // [esp+38h] [ebp+Ch]
  float v26; // [esp+38h] [ebp+Ch]
  float v27; // [esp+38h] [ebp+Ch]

  v10 = *(this + 5) - *(this + 0xF);
  v5 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * (unsigned __int16)a4);
  v12 = *(this + 6) - *(this + 0x10);
  v14 = *(this + 7) - *(this + 0x11);
  v22 = 1.0 / *(this + 0xD);
  v16 = v22 * v10;
  v18 = v12 * v22;
  v20 = v22 * v14;
  v23 = v5[2] * v20 + v5[1] * v18 + *v5 * v16;
  v17 = v16 * v23;
  v19 = v18 * v23;
  v21 = v20 * v23;
  v11 = v17 + v17;
  v13 = v19 + v19;
  v15 = v21 + v21;
  v24 = *v5 - v11;
  v6 = v24;
  *v5 = v24;
  v25 = v5[1] - v13;
  v7 = v25;
  v5[1] = v25;
  v26 = v5[2] - v15;
  v8 = v26;
  v5[2] = v26;
  v27 = *(this + 2);
  *v5 = v6 * v27;
  v5[1] = v7 * v27;
  v5[2] = v27 * v8;
  return sub_75EC40((int)this, a2, a3, a4);
}
