float *__thiscall sub_741760(NiPoint3 *this, NiTransform *a2, float *a3, char a4)
{
  float *v5; // eax
  NiTransform *v6; // eax
  float *v7; // eax
  double v8; // st7
  float *result; // eax
  unsigned int v10; // edi
  bool v11; // zf
  int v12; // ecx
  float *v13; // eax
  unsigned int v14; // edi
  int v15; // ecx
  float v16; // [esp+10h] [ebp-B0h]
  float v17; // [esp+10h] [ebp-B0h]
  float v18; // [esp+10h] [ebp-B0h]
  float v19; // [esp+14h] [ebp-ACh]
  float v20; // [esp+14h] [ebp-ACh]
  float v21; // [esp+14h] [ebp-ACh]
  float v22; // [esp+18h] [ebp-A8h] BYREF
  float v23; // [esp+1Ch] [ebp-A4h]
  float v24; // [esp+20h] [ebp-A0h]
  float v25; // [esp+24h] [ebp-9Ch]
  float v26; // [esp+28h] [ebp-98h]
  float v27; // [esp+2Ch] [ebp-94h]
  float v28[3]; // [esp+30h] [ebp-90h] BYREF
  float v29[3]; // [esp+3Ch] [ebp-84h] BYREF
  float v30[9]; // [esp+48h] [ebp-78h] BYREF
  float v31[9]; // [esp+6Ch] [ebp-54h] BYREF
  _BYTE v32[48]; // [esp+90h] [ebp-30h] BYREF

  if ( a4 )
  {
    v5 = NiMAtrix33_Multiply((float *)a2, (float *)&v32[0xC], (float *)this + 0xC);
    sub_710490((float *)this + 0xC, v31, v5);
    v6 = sub_7101F0(a2, (NiTransform *)v32, this + 7);
    v25 = *a3 + v6->rot.data[0][0];
    v26 = v6->rot.data[0][1] + a3[1];
    v27 = v6->rot.data[0][2] + a3[2];
    v28[0] = v25 - *((float *)this + 0x15);
    v28[1] = v26 - *((float *)this + 0x16);
    v28[2] = v27 - *((float *)this + 0x17);
    v19 = *((float *)this + 0x18);
    v7 = sub_710250(v29, v28, (float *)this + 0xC);
    v20 = 1.0 / v19;
    v8 = v20;
    v21 = v7[1] * v20;
    v16 = v7[2] * v8;
    v22 = v8 * *v7;
    v23 = v21;
    v24 = v16;
    sub_7102B0(v31, v30);
    result = sub_710250(v29, (float *)this + 0x37, v30);
    *((float *)this + 0x37) = *result;
    *((float *)this + 0x38) = result[1];
    *((float *)this + 0x39) = result[2];
    v10 = 0;
    v11 = *((_WORD *)this + 0x5B) == 0;
    v17 = *((float *)this + 0x38) * v23 + *((float *)this + 0x37) * v22 + *((float *)this + 0x39) * v24;
    *((float *)this + 0x3A) = v17 + *((float *)this + 0x3A);
    if ( !v11 )
    {
      do
      {
        v12 = *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * v10);
        if ( v12 )
          (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)v12 + 0x54))(v12, v31, &v22, 1);
        result = (float *)*((unsigned __int16 *)this + 0x5B);
        ++v10;
      }
      while ( v10 < (unsigned int)result );
    }
  }
  else
  {
    sub_7102B0((float *)a2, v30);
    v13 = sub_710250(v29, (float *)this + 0x37, v30);
    *((float *)this + 0x37) = *v13;
    *((float *)this + 0x38) = v13[1];
    result = *((float **)v13 + 2);
    *((_DWORD *)this + 0x39) = result;
    v14 = 0;
    v11 = *((_WORD *)this + 0x5B) == 0;
    v18 = *((float *)this + 0x38) * a3[1] + *a3 * *((float *)this + 0x37) + *((float *)this + 0x39) * a3[2];
    *((float *)this + 0x3A) = v18 + *((float *)this + 0x3A);
    if ( !v11 )
    {
      do
      {
        v15 = *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * v14);
        if ( v15 )
          result = (float *)(*(int (__thiscall **)(int, NiTransform *, float *, int))(*(_DWORD *)v15 + 0x54))(
                              v15,
                              a2,
                              a3,
                              1);
        ++v14;
      }
      while ( v14 < *((unsigned __int16 *)this + 0x5B) );
    }
  }
  return result;
}
