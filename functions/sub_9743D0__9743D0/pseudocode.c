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

  v5 = *(float **)(this + 0x38); /*0x9743df*/
  v15 = *(float *)(this + 0x1C); /*0x9743e2*/
  v16 = *a2 * v15; /*0x9743ef*/
  v20 = a2[1] * v15; /*0x9743f8*/
  v24 = v15 * a2[2]; /*0x9743ff*/
  *(float *)&v28 = v5[1] + v16; /*0x97440a*/
  v29 = v5[2] + v20; /*0x974419*/
  v6 = v5[3]; /*0x97441d*/
  *(float *)(this + 0x20) = *(float *)&v28; /*0x974420*/
  *(float *)(this + 0x24) = v29; /*0x97442b*/
  v30 = v6 + v24; /*0x97442e*/
  *(float *)(this + 0x28) = v30; /*0x974436*/
  v31 = *(float *)(this + 0x44); /*0x97443c*/
  v17 = v5[4] * v31; /*0x974449*/
  v21 = v5[5] * v31; /*0x974452*/
  v25 = v31 * v5[6]; /*0x974459*/
  *(float *)(this + 0x20) = *(float *)(this + 0x20) + v17; /*0x974464*/
  *(float *)(this + 0x24) = v21 + *(float *)(this + 0x24); /*0x97446e*/
  *(float *)(this + 0x28) = *(float *)(this + 0x28) + v25; /*0x974478*/
  v7 = *(float **)(this + 0x38); /*0x97447b*/
  if ( -v7[0xD] == *(float *)(this + 0x44) ) /*0x97448d*/
    v8 = 0xFFFFFFFF; /*0x97448f*/
  else
    v8 = v7[0xD] == *(float *)(this + 0x44); /*0x9744a1*/
  v32 = *(float *)(this + 0x48); /*0x9744af*/
  v18 = v7[7] * v32; /*0x9744bc*/
  v22 = v7[8] * v32; /*0x9744c5*/
  v26 = v32 * v7[9]; /*0x9744cc*/
  *(float *)(this + 0x20) = *(float *)(this + 0x20) + v18; /*0x9744d7*/
  *(float *)(this + 0x24) = v22 + *(float *)(this + 0x24); /*0x9744e1*/
  *(float *)(this + 0x28) = *(float *)(this + 0x28) + v26; /*0x9744eb*/
  v9 = *(float **)(this + 0x38); /*0x9744ee*/
  if ( -v9[0xE] == *(float *)(this + 0x48) ) /*0x974500*/
    v10 = 0xFFFFFFFF; /*0x974502*/
  else
    v10 = v9[0xE] == *(float *)(this + 0x48); /*0x974514*/
  v33 = *(float *)(this + 0x4C); /*0x974522*/
  v19 = v9[0xA] * v33; /*0x97452f*/
  v23 = v9[0xB] * v33; /*0x974538*/
  v27 = v33 * v9[0xC]; /*0x97453f*/
  *(float *)(this + 0x20) = *(float *)(this + 0x20) + v19; /*0x97454a*/
  *(float *)(this + 0x24) = v23 + *(float *)(this + 0x24); /*0x974554*/
  *(float *)(this + 0x28) = *(float *)(this + 0x28) + v27; /*0x97455e*/
  v11 = *(float **)(this + 0x38); /*0x974561*/
  if ( -v11[0xF] == *(float *)(this + 0x4C) ) /*0x974573*/
    v12 = 0xFFFFFFFF; /*0x974575*/
  else
    v12 = v11[0xF] == *(float *)(this + 0x4C); /*0x974587*/
  *(float *)&v28 = *a3 - *a2; /*0x97459d*/
  v29 = a3[1] - a2[1]; /*0x9745a7*/
  v30 = a3[2] - a2[2]; /*0x9745c0*/
  v13 = sub_9647B0(v11, (float *)&v28, v8, v10, v12, *(float *)&v28, v29, v30); /*0x9745d3*/
  *(float *)(this + 0x2C) = *v13; /*0x9745da*/
  *(float *)(this + 0x30) = v13[1]; /*0x9745e0*/
  result = *((_DWORD *)v13 + 2); /*0x9745e3*/
  *(_DWORD *)(this + 0x34) = result; /*0x9745e7*/
  return result; /*0x9745ea*/
}
