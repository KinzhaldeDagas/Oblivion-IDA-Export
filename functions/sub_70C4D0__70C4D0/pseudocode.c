float *__thiscall sub_70C4D0(int this, float a2, float a3, float *a4, float *a5)
{
  float v6; // edx
  double v7; // st7
  float v9; // [esp+4h] [ebp-30h]
  float v10; // [esp+4h] [ebp-30h]
  float v11; // [esp+8h] [ebp-2Ch]
  float v12; // [esp+8h] [ebp-2Ch]
  float v13; // [esp+Ch] [ebp-28h]
  float v14; // [esp+Ch] [ebp-28h]
  float v15; // [esp+Ch] [ebp-28h]
  float v16; // [esp+10h] [ebp-24h]
  float v17; // [esp+10h] [ebp-24h]
  float v18; // [esp+10h] [ebp-24h]
  float v19; // [esp+14h] [ebp-20h]
  float v20; // [esp+14h] [ebp-20h]
  float v21; // [esp+14h] [ebp-20h]
  float v22; // [esp+18h] [ebp-1Ch]
  float v23; // [esp+18h] [ebp-1Ch]
  float v24; // [esp+18h] [ebp-1Ch]
  float v25; // [esp+1Ch] [ebp-18h]
  float v26; // [esp+1Ch] [ebp-18h]
  float v27; // [esp+20h] [ebp-14h]
  float v28; // [esp+20h] [ebp-14h]
  float v29; // [esp+24h] [ebp-10h]
  float v30; // [esp+24h] [ebp-10h]
  float v31; // [esp+28h] [ebp-Ch]
  float v32; // [esp+2Ch] [ebp-8h]
  float v33; // [esp+30h] [ebp-4h]

  if ( *(_BYTE *)(this + 0x104) )
  {
    v6 = *(float *)(this + 0x70);
    v7 = *(float *)(this + 0x7C);
    *a5 = *(float *)(this + 0x64);
    v13 = v7;
    a5[1] = v6;
    a5[2] = v13;
    sub_43F350(a5);
    v25 = *(float *)(this + 0x68) * a3;
    v27 = *(float *)(this + 0x74) * a3;
    v29 = a3 * *(float *)(this + 0x80);
    v16 = *(float *)(this + 0x6C) * a2;
    v19 = *(float *)(this + 0x78) * a2;
    v22 = a2 * *(float *)(this + 0x84);
    v9 = *(float *)(this + 0x88) + v16;
    v11 = *(float *)(this + 0x8C) + v19;
    v14 = *(float *)(this + 0x90) + v22;
    v17 = v9 + v25;
    *a4 = v17;
    v20 = v11 + v27;
    a4[1] = v20;
    v23 = v14 + v29;
    a4[2] = v23;
    return a4;
  }
  else
  {
    v31 = *(float *)(this + 0x68) * a3;
    v32 = *(float *)(this + 0x74) * a3;
    v33 = a3 * *(float *)(this + 0x80);
    v18 = *(float *)(this + 0x6C) * a2;
    v21 = *(float *)(this + 0x78) * a2;
    v24 = a2 * *(float *)(this + 0x84);
    v10 = *(float *)(this + 0x64) + v18;
    v12 = *(float *)(this + 0x70) + v21;
    v15 = *(float *)(this + 0x7C) + v24;
    v26 = v10 + v31;
    *a5 = v26;
    v28 = v12 + v32;
    a5[1] = v28;
    v30 = v15 + v33;
    a5[2] = v30;
    sub_43F350(a5);
    *a4 = *(float *)(this + 0x88);
    a4[1] = *(float *)(this + 0x8C);
    a4[2] = *(float *)(this + 0x90);
    return a4;
  }
}
