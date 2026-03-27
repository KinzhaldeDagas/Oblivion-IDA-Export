int __thiscall sub_9743D0(int this, float *a2, float *a3)
{
  float *v5; // eax
  double v6; // st7
  float *v7; // ecx
  int v8; // ebp
  float *v9; // ecx
  int v10; // ebx
  float *v11; // ecx
  int v12; // edi
  float *v13; // eax
  int result; // eax
  float v15; // [esp+Ch] [ebp-1Ch]
  float v16; // [esp+10h] [ebp-18h]
  float v17; // [esp+10h] [ebp-18h]
  float v18; // [esp+10h] [ebp-18h]
  float v19; // [esp+10h] [ebp-18h]
  float v20; // [esp+14h] [ebp-14h]
  float v21; // [esp+14h] [ebp-14h]
  float v22; // [esp+14h] [ebp-14h]
  float v23; // [esp+14h] [ebp-14h]
  float v24; // [esp+18h] [ebp-10h]
  float v25; // [esp+18h] [ebp-10h]
  float v26; // [esp+18h] [ebp-10h]
  float v27; // [esp+18h] [ebp-10h]
  int v28; // [esp+1Ch] [ebp-Ch] BYREF
  float v29; // [esp+20h] [ebp-8h]
  float v30; // [esp+24h] [ebp-4h]
  float v31; // [esp+2Ch] [ebp+4h]
  float v32; // [esp+2Ch] [ebp+4h]
  float v33; // [esp+2Ch] [ebp+4h]

  v5 = *(float **)(this + 0x38);
  v15 = *(float *)(this + 0x1C);
  v16 = *a2 * v15;
  v20 = a2[1] * v15;
  v24 = v15 * a2[2];
  *(float *)&v28 = v5[1] + v16;
  v29 = v5[2] + v20;
  v6 = v5[3];
  *(float *)(this + 0x20) = *(float *)&v28;
  *(float *)(this + 0x24) = v29;
  v30 = v6 + v24;
  *(float *)(this + 0x28) = v30;
  v31 = *(float *)(this + 0x44);
  v17 = v5[4] * v31;
  v21 = v5[5] * v31;
  v25 = v31 * v5[6];
  *(float *)(this + 0x20) = *(float *)(this + 0x20) + v17;
  *(float *)(this + 0x24) = v21 + *(float *)(this + 0x24);
  *(float *)(this + 0x28) = *(float *)(this + 0x28) + v25;
  v7 = *(float **)(this + 0x38);
  if ( -v7[0xD] == *(float *)(this + 0x44) )
    v8 = 0xFFFFFFFF;
  else
    v8 = v7[0xD] == *(float *)(this + 0x44);
  v32 = *(float *)(this + 0x48);
  v18 = v7[7] * v32;
  v22 = v7[8] * v32;
  v26 = v32 * v7[9];
  *(float *)(this + 0x20) = *(float *)(this + 0x20) + v18;
  *(float *)(this + 0x24) = v22 + *(float *)(this + 0x24);
  *(float *)(this + 0x28) = *(float *)(this + 0x28) + v26;
  v9 = *(float **)(this + 0x38);
  if ( -v9[0xE] == *(float *)(this + 0x48) )
    v10 = 0xFFFFFFFF;
  else
    v10 = v9[0xE] == *(float *)(this + 0x48);
  v33 = *(float *)(this + 0x4C);
  v19 = v9[0xA] * v33;
  v23 = v9[0xB] * v33;
  v27 = v33 * v9[0xC];
  *(float *)(this + 0x20) = *(float *)(this + 0x20) + v19;
  *(float *)(this + 0x24) = v23 + *(float *)(this + 0x24);
  *(float *)(this + 0x28) = *(float *)(this + 0x28) + v27;
  v11 = *(float **)(this + 0x38);
  if ( -v11[0xF] == *(float *)(this + 0x4C) )
    v12 = 0xFFFFFFFF;
  else
    v12 = v11[0xF] == *(float *)(this + 0x4C);
  *(float *)&v28 = *a3 - *a2;
  v29 = a3[1] - a2[1];
  v30 = a3[2] - a2[2];
  v13 = sub_9647B0(v11, (float *)&v28, v8, v10, v12, *(float *)&v28, v29, v30);
  *(float *)(this + 0x2C) = *v13;
  *(float *)(this + 0x30) = v13[1];
  result = *((_DWORD *)v13 + 2);
  *(_DWORD *)(this + 0x34) = result;
  return result;
}
