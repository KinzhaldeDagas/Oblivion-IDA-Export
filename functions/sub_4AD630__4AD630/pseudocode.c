int __thiscall sub_4AD630(float *this, int a2, int a3)
{
  int v3; // ebx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  double v9; // rt0
  int result; // eax
  float v11; // [esp+10h] [ebp-40h]
  float v12; // [esp+14h] [ebp-3Ch]
  float v13; // [esp+18h] [ebp-38h]
  float v14; // [esp+1Ch] [ebp-34h]
  float v15; // [esp+20h] [ebp-30h]
  float v16; // [esp+24h] [ebp-2Ch]
  float v17; // [esp+28h] [ebp-28h]
  float v18; // [esp+2Ch] [ebp-24h]
  float v19; // [esp+30h] [ebp-20h]
  float v20; // [esp+30h] [ebp-20h]
  float v21; // [esp+30h] [ebp-20h]
  float v22; // [esp+34h] [ebp-1Ch]
  float v23; // [esp+34h] [ebp-1Ch]
  float v24; // [esp+34h] [ebp-1Ch]
  float v25; // [esp+38h] [ebp-18h]
  float v26; // [esp+38h] [ebp-18h]
  float v27; // [esp+38h] [ebp-18h]
  float v28; // [esp+3Ch] [ebp-14h]
  float v29; // [esp+40h] [ebp-10h]
  float v30; // [esp+44h] [ebp-Ch]
  float v31; // [esp+48h] [ebp-8h]

  v3 = *(_DWORD *)(a2 + 0x10C);
  if ( v3 != a3 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    *(_DWORD *)(a2 + 0x10C) = a3;
    if ( a3 )
      InterlockedIncrement((volatile LONG *)(a3 + 4));
  }
  *(float *)(a2 + 0x84) = *(this + 0x27);
  *(float *)(a2 + 0x88) = *(this + 0x28);
  *(float *)(a2 + 0x8C) = *(this + 0x29);
  *(float *)(a2 + 0x90) = *(this + 0x2A);
  v5 = *((_DWORD *)this + 0x2C);
  v6 = *((_DWORD *)this + 0x2D);
  *(float *)(a2 + 0x94) = *(this + 0x2B);
  *(_DWORD *)(a2 + 0x98) = v5;
  *(_DWORD *)(a2 + 0x9C) = v6;
  v7 = *((_DWORD *)this + 0x2F);
  v8 = *((_DWORD *)this + 0x30);
  *(float *)(a2 + 0xA0) = *(this + 0x2E);
  *(_DWORD *)(a2 + 0xA4) = v7;
  *(_DWORD *)(a2 + 0xA8) = v8;
  v19 = (float)*((unsigned __int8 *)this + 0xD4);
  v22 = (float)*((unsigned __int8 *)this + 0xD5);
  v25 = (float)*((unsigned __int8 *)this + 0xD6);
  v9 = dbl_A3DDD8;
  v11 = v19 / v9;
  v12 = v22 / v9;
  v13 = v25 / v9;
  v20 = (float)*((unsigned __int8 *)this + 0xD8);
  v23 = (float)*((unsigned __int8 *)this + 0xD9);
  v26 = (float)*((unsigned __int8 *)this + 0xDA);
  v15 = v20 / v9;
  v16 = v23 / v9;
  v17 = v26 / v9;
  v29 = (float)*((unsigned __int8 *)this + 0xDC);
  v30 = (float)*((unsigned __int8 *)this + 0xDD);
  v31 = (float)*((unsigned __int8 *)this + 0xDE);
  v21 = v29 / v9;
  v24 = v30 / v9;
  v27 = v31 / v9;
  v14 = *(this + 0x38);
  v18 = *(this + 0x39);
  v28 = *(this + 0x3A);
  *(float *)(a2 + 0xB8) = v11;
  *(float *)(a2 + 0xBC) = v12;
  *(float *)(a2 + 0xC0) = v13;
  *(float *)(a2 + 0xC8) = v15;
  *(float *)(a2 + 0xC4) = v14;
  *(float *)(a2 + 0xCC) = v16;
  *(float *)(a2 + 0xD0) = v17;
  *(float *)(a2 + 0xD8) = v21;
  *(float *)(a2 + 0xD4) = v18;
  *(float *)(a2 + 0xDC) = v24;
  *(float *)(a2 + 0xE0) = v27;
  *(float *)(a2 + 0xE4) = v28;
  *(float *)(a2 + 0xAC) = *(this + 0x3B);
  *(float *)(a2 + 0xB0) = *(this + 0x3C);
  *(float *)(a2 + 0xB4) = *(this + 0x3D);
  *(float *)(a2 + 0xE8) = *(this + 0x31);
  *(float *)(a2 + 0xEC) = *(this + 0x32);
  *(float *)(a2 + 0xF0) = *(this + 0x33);
  *(float *)(a2 + 0xF4) = *(this + 0x34);
  *(float *)(a2 + 0xFC) = *(this + 0x1E);
  *(float *)(a2 + 0x100) = *(this + 0x21);
  result = *((_DWORD *)this + 0x1F);
  *(_DWORD *)(a2 + 0x104) = result;
  *(float *)(a2 + 0x108) = *(this + 0x20);
  return result;
}
