int __thiscall sub_7E4D20(_WORD *this, int a2)
{
  int v3; // esi
  float *v4; // ebx
  double v5; // st7
  int v6; // eax
  int v7; // eax
  float v8; // edx
  float v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  float v13; // ecx
  float v14; // edx
  int result; // eax
  float v16; // [esp+Ch] [ebp-3Ch]
  float v17; // [esp+Ch] [ebp-3Ch]
  float v18; // [esp+Ch] [ebp-3Ch]
  float v19; // [esp+Ch] [ebp-3Ch]
  float v20; // [esp+Ch] [ebp-3Ch]
  float v21; // [esp+10h] [ebp-38h]
  float v22; // [esp+10h] [ebp-38h]
  float v23; // [esp+10h] [ebp-38h]
  float v24; // [esp+10h] [ebp-38h]
  float v25; // [esp+14h] [ebp-34h]
  NiPoint3 v26; // [esp+18h] [ebp-30h] BYREF
  float v27; // [esp+24h] [ebp-24h]
  float v28; // [esp+28h] [ebp-20h]
  float v29; // [esp+2Ch] [ebp-1Ch]
  float v30; // [esp+30h] [ebp-18h]
  float v31; // [esp+34h] [ebp-14h]
  float v32; // [esp+38h] [ebp-10h]
  float v33; // [esp+3Ch] [ebp-Ch] BYREF
  float v34; // [esp+40h] [ebp-8h]
  float v35; // [esp+44h] [ebp-4h]

  if ( *(this + 0x8D) )
  {
    do
      v3 = *(_DWORD *)(*((_DWORD *)this + 0x45) + 4 * (rand() % (unsigned int)(unsigned __int16)*(this + 0x8D)));
    while ( !v3 );
    if ( *(_WORD *)(v3 + 0xB8) && (v4 = *(float **)(v3 + 0x1C)) != 0 )
    {
      v16 = (double)rand() / dbl_A3D5A8;
      v5 = v16;
      v17 = 1.0 - v16;
      v27 = v4[0x22] * v17;
      v28 = v4[0x23] * v17;
      v29 = v17 * v4[0x24];
      v30 = *(float *)(v3 + 0x88) * v5;
      v31 = *(float *)(v3 + 0x8C) * v5;
      v32 = v5 * *(float *)(v3 + 0x90);
      v33 = v30 + v27;
      v27 = v33;
      v34 = v31 + v28;
      v28 = v34;
      v35 = v29 + v32;
      v29 = v35;
      v6 = rand();
      v18 = ((double)v6 + (double)v6) / dbl_A3D5A8 - dbl_A2F928;
      v21 = v18;
      v7 = rand();
      v19 = ((double)v7 + (double)v7) / dbl_A3D5A8 - dbl_A2F928;
      v33 = v19;
      v26.x = v19;
      v34 = 0.0;
      v35 = v21;
      v26.y = 0.0;
      v26.z = v21;
      sub_43F350(&v26.x);
      v26 = *(NiPoint3 *)&sub_7101F0((NiTransform *)(v3 + 0x64), (NiTransform *)&v33, &v26)->rot.data[0][0];
    }
    else
    {
      v8 = *(float *)(v3 + 0x8C);
      v9 = *(float *)(v3 + 0x90);
      v27 = *(float *)(v3 + 0x88);
      v28 = v8;
      v29 = v9;
      v10 = rand();
      v22 = ((double)v10 + (double)v10) / dbl_A3D5A8 - dbl_A2F928;
      v25 = v22;
      v11 = rand();
      v23 = ((double)v11 + (double)v11) / dbl_A3D5A8 - dbl_A2F928;
      v20 = v23;
      v12 = rand();
      v24 = ((double)v12 + (double)v12) / dbl_A3D5A8 - dbl_A2F928;
      v33 = v24;
      v26.x = v24;
      v34 = v20;
      v35 = v25;
      v26.y = v20;
      v26.z = v25;
      sub_43F350(&v26.x);
    }
  }
  else
  {
    v13 = *(&Vector3_InitValue_ + 1);
    v14 = dword_B3F9B0;
    v27 = Vector3_InitValue_;
    v28 = v13;
    v29 = v14;
    v26.x = v27;
    v26.y = v13;
    v26.z = v14;
  }
  result = 0x20 * a2;
  *(float *)(result + *((_DWORD *)this + 0x1B)) = v27;
  *(float *)(result + *((_DWORD *)this + 0x1B) + 4) = v28;
  *(float *)(result + *((_DWORD *)this + 0x1B) + 8) = v29;
  *(float *)(result + *((_DWORD *)this + 0x1B) + 0xC) = *((float *)this + 0x3E);
  *(NiPoint3 *)(result + *((_DWORD *)this + 0x1B) + 0x10) = v26;
  return result;
}
