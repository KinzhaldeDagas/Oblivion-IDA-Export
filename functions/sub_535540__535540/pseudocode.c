char __thiscall sub_535540(float *this, float *a2, float *a3, float a4)
{
  _DWORD *v5; // ebx
  double v6; // rt0
  double v7; // st6
  int v8; // edi
  double v10; // st7
  float v11; // [esp+8h] [ebp-4Ch]
  float v12; // [esp+Ch] [ebp-48h]
  float v13; // [esp+10h] [ebp-44h]
  float v14; // [esp+14h] [ebp-40h] BYREF
  float v15; // [esp+18h] [ebp-3Ch]
  float v16; // [esp+1Ch] [ebp-38h]
  float v17[5]; // [esp+24h] [ebp-30h] BYREF
  float v18; // [esp+38h] [ebp-1Ch]

  v14 = a4 * *a3;
  v15 = a3[1] * a4;
  v16 = a4 * a3[2];
  v11 = *a2 + v14;
  v12 = v15 + a2[1];
  v13 = a2[2] + v16;
  sub_535310();
  v5 = *((_DWORD **)this + 0x68);
  if ( v5 )
  {
    v18 = flt_A34BA0;
    v17[4] = v18;
    v6 = hkFactor;
    v14 = *a2 * v6;
    v15 = a2[1] * v6;
    v7 = a2[2];
    *(this + 5) = 0.0;
    v16 = v7 * v6;
    v17[0] = v11 * v6;
    v17[1] = v12 * v6;
    v17[2] = v6 * v13;
    *(this + 1) = flt_A562B0;
    v8 = v5[2];
    if ( v8 )
    {
      sub_89F570(v5);
      (*(void (__thiscall **)(int, float *, float *, float *, _DWORD))(*(_DWORD *)v8 + 0x30))(v8, &v14, v17, this, 0);
      sub_89F570(v5);
    }
    if ( *((int *)this + 5) > 0 )
    {
      sub_8AF890((int *)this);
      return 1;
    }
  }
  else
  {
    v10 = flt_A562B0;
    *(this + 5) = 0.0;
    *(this + 1) = v10;
  }
  return 0;
}
