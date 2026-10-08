float *__thiscall sub_741760(NiPoint3 *this, NiTransform *a2, float *a3, char a4)
{
  NiMatrix33 *v5; // eax
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

  if ( a4 ) /*0x74177b*/
  {
    v5 = NiMAtrix33_Multiply(&a2->rot, (NiMatrix33 *)&v32[0xC], (NiMatrix33 *)(this + 4)); /*0x74178f*/
    sub_710490((float *)this + 0xC, v31, (float *)v5); /*0x74179c*/
    v6 = sub_7101F0(a2, (NiTransform *)v32, this + 7); /*0x7417af*/
    v25 = *a3 + v6->rot.data[0][0]; /*0x7417c0*/
    v26 = v6->rot.data[0][1] + a3[1]; /*0x7417ca*/
    v27 = v6->rot.data[0][2] + a3[2]; /*0x7417de*/
    v28[0] = v25 - *((float *)this + 0x15); /*0x7417e8*/
    v28[1] = v26 - *((float *)this + 0x16); /*0x7417f3*/
    v28[2] = v27 - *((float *)this + 0x17); /*0x7417fe*/
    v19 = *((float *)this + 0x18); /*0x741805*/
    v7 = NiPoint3_MultiplyMatrix3(v29, v28, (float *)this + 0xC); /*0x741809*/
    v20 = 1.0 / v19; /*0x741822*/
    v8 = v20; /*0x741831*/
    v21 = v7[1] * v20; /*0x741833*/
    v16 = v7[2] * v8; /*0x74183c*/
    v22 = v8 * *v7; /*0x741842*/
    v23 = v21; /*0x74184a*/
    v24 = v16; /*0x741852*/
    sub_7102B0(v31, v30); /*0x741856*/
    result = NiPoint3_MultiplyMatrix3(v29, (float *)this + 0x37, v30); /*0x74186c*/
    *((float *)this + 0x37) = *result; /*0x741873*/
    *((float *)this + 0x38) = result[1]; /*0x741878*/
    *((float *)this + 0x39) = result[2]; /*0x741881*/
    v10 = 0; /*0x741896*/
    v11 = *((_WORD *)this + 0x5B) == 0; /*0x741898*/
    v17 = *((float *)this + 0x38) * v23 + *((float *)this + 0x37) * v22 + *((float *)this + 0x39) * v24; /*0x7418a5*/
    *((float *)this + 0x3A) = v17 + *((float *)this + 0x3A); /*0x7418b3*/
    if ( !v11 ) /*0x7418b9*/
    {
      do /*0x7418ec*/
      {
        v12 = *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * v10); /*0x7418c6*/
        if ( v12 ) /*0x7418cb*/
          (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)v12 + 0x54))(v12, v31, &v22, 1); /*0x7418de*/
        result = (float *)*((unsigned __int16 *)this + 0x5B); /*0x7418e0*/
        ++v10; /*0x7418e7*/
      }
      while ( v10 < (unsigned int)result ); /*0x7418ec*/
    }
  }
  else
  {
    sub_7102B0((float *)a2, v30); /*0x741902*/
    v13 = NiPoint3_MultiplyMatrix3(v29, (float *)this + 0x37, v30); /*0x741918*/
    *((float *)this + 0x37) = *v13; /*0x741926*/
    *((float *)this + 0x38) = v13[1]; /*0x74192b*/
    result = *((float **)v13 + 2); /*0x74192e*/
    *((_DWORD *)this + 0x39) = result; /*0x741931*/
    v14 = 0; /*0x741946*/
    v11 = *((_WORD *)this + 0x5B) == 0; /*0x741948*/
    v18 = *((float *)this + 0x38) * a3[1] + *a3 * *((float *)this + 0x37) + *((float *)this + 0x39) * a3[2]; /*0x741954*/
    *((float *)this + 0x3A) = v18 + *((float *)this + 0x3A); /*0x741962*/
    if ( !v11 ) /*0x741968*/
    {
      do /*0x741994*/
      {
        v15 = *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * v14); /*0x741976*/
        if ( v15 ) /*0x74197b*/
          result = (float *)(*(int (__thiscall **)(int, NiTransform *, float *, int))(*(_DWORD *)v15 + 0x54))( /*0x741986*/
                              v15,
                              a2,
                              a3,
                              1);
        ++v14; /*0x74198f*/
      }
      while ( v14 < *((unsigned __int16 *)this + 0x5B) ); /*0x741994*/
    }
  }
  return result; /*0x7418ee*/
}
