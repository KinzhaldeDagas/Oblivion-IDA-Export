void __thiscall sub_4C1170(_BYTE *this, signed int *a2)
{
  _BYTE *v2; // esi
  int v3; // ebx
  int v4; // ebp
  int i; // edi
  int v6; // eax
  int v7; // eax
  unsigned __int16 *v8; // ebp
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // cx
  _WORD *v11; // ebp
  unsigned __int16 v12; // dx
  int v13; // edi
  int v14; // eax
  int v15; // esi
  int v16; // edi
  int v17; // ebx
  signed int *v18; // edx
  bool v19; // al
  int v20; // eax
  double v21; // st7
  float *v22; // eax
  _BYTE *v23; // ecx
  bool v24; // al
  int v25; // eax
  double v26; // st7
  float *v27; // eax
  int v28; // eax
  double v29; // st7
  float *v30; // eax
  int v32; // [esp+8h] [ebp-2Ch]
  int v33; // [esp+Ch] [ebp-28h]
  float v34; // [esp+10h] [ebp-24h] BYREF
  float v35; // [esp+14h] [ebp-20h]
  float v36; // [esp+18h] [ebp-1Ch]
  float v37; // [esp+1Ch] [ebp-18h]
  float v38; // [esp+20h] [ebp-14h]
  float v39; // [esp+24h] [ebp-10h]
  float v40; // [esp+28h] [ebp-Ch]
  float v41; // [esp+2Ch] [ebp-8h]
  float v42; // [esp+30h] [ebp-4h]

  v2 = this; /*0x4c1174*/
  if ( (*(this + 0x1C) & 8) == 0 ) /*0x4c117e*/
    return; /*0x4c117e*/
  v3 = 0; /*0x4c1186*/
  v32 = 0; /*0x4c1189*/
  while ( 2 ) /*0x4c1198*/
  {
    v4 = 0; /*0x4c1198*/
    for ( i = 0; i < 0xD8C; i += 0xC ) /*0x4c119a*/
    {
      if ( !a2 /*0x4c11b7*/
        || sub_4C1080((TESObjectCELL **)v2, a2, (float *)(i + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v2 + 9) + 4) + v3))) )
      {
        v6 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v2 + 9) + 8) + v3); /*0x4c11c6*/
        *(float *)(v6 + i) = g_zeroNiPoint3.x; /*0x4c11cf*/
        v7 = i + v6; /*0x4c11d8*/
        *(float *)(v7 + 4) = g_zeroNiPoint3.y; /*0x4c11da*/
        *(float *)(v7 + 8) = g_zeroNiPoint3.z; /*0x4c11e3*/
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)v2 + 9) + 0x10) + v3) + v4) = 0; /*0x4c11ef*/
      }
      ++v4; /*0x4c11f6*/
    }
    v8 = (unsigned __int16 *)unk_B35BC8[0]; /*0x4c1201*/
    v33 = 0x200; /*0x4c1207*/
    while ( 1 ) /*0x4c1219*/
    {
      v9 = *v8; /*0x4c1219*/
      v10 = v8[1]; /*0x4c121d*/
      v11 = v8 + 1; /*0x4c1221*/
      v12 = v11[1]; /*0x4c1224*/
      v13 = v9; /*0x4c1228*/
      v14 = *(_DWORD *)(v3 + *(_DWORD *)(*((_DWORD *)v2 + 9) + 4)); /*0x4c1231*/
      v15 = 0xC * v10; /*0x4c123f*/
      v16 = 0xC * v13; /*0x4c1243*/
      v40 = *(float *)(v14 + v15) - *(float *)(v14 + v16); /*0x4c1254*/
      v17 = 0xC * v12; /*0x4c125e*/
      v8 = v11 + 2; /*0x4c1269*/
      v41 = *(float *)(v14 + v15 + 4) - *(float *)(v14 + v16 + 4); /*0x4c126c*/
      v42 = *(float *)(v14 + v15 + 8) - *(float *)(v14 + v16 + 8); /*0x4c1278*/
      v37 = *(float *)(v14 + v17) - *(float *)(v14 + v15); /*0x4c1282*/
      v38 = *(float *)(v14 + v17 + 4) - *(float *)(v14 + v15 + 4); /*0x4c128e*/
      v39 = *(float *)(v14 + v17 + 8) - *(float *)(v14 + v15 + 8); /*0x4c129a*/
      v34 = v39 * v41 - v38 * v42; /*0x4c12be*/
      v35 = v42 * v37 - v39 * v40; /*0x4c12d8*/
      v36 = v40 * v38 - v37 * v41; /*0x4c12e2*/
      NiPoint3_NormalizeApproximateInPlace(&v34); /*0x4c12e6*/
      v18 = a2; /*0x4c12eb*/
      if ( !a2 /*0x4c131a*/
        || (v19 = sub_4C1080(
                    (TESObjectCELL **)this,
                    a2,
                    (float *)(v16 + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 9) + 4) + v32))),
            v18 = a2,
            v19) )
      {
        v20 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 9) + 8) + v32); /*0x4c132a*/
        v21 = *(float *)(v20 + v16); /*0x4c132d*/
        v22 = (float *)(v16 + v20); /*0x4c1330*/
        *v22 = v21 + v34; /*0x4c1336*/
        v22[1] = v35 + v22[1]; /*0x4c133f*/
        v22[2] = v22[2] + v36; /*0x4c1349*/
      }
      v23 = this; /*0x4c134e*/
      if ( !v18 /*0x4c1374*/
        || (v24 = sub_4C1080(
                    (TESObjectCELL **)this,
                    v18,
                    (float *)(v15 + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 9) + 4) + v32))),
            v23 = this,
            v18 = a2,
            v24) )
      {
        v25 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v23 + 9) + 8) + v32); /*0x4c1380*/
        v26 = *(float *)(v25 + v15); /*0x4c1383*/
        v27 = (float *)(v15 + v25); /*0x4c1386*/
        *v27 = v26 + v34; /*0x4c138c*/
        v27[1] = v27[1] + v35; /*0x4c1395*/
        v27[2] = v36 + v27[2]; /*0x4c139f*/
      }
      if ( v18 ) /*0x4c13a4*/
      {
        if ( !sub_4C1080( /*0x4c13be*/
                (TESObjectCELL **)v23,
                v18,
                (float *)(v17 + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v23 + 9) + 4) + v32))) )
          goto LABEL_21; /*0x4c13be*/
        v23 = this; /*0x4c13c0*/
      }
      v28 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v23 + 9) + 8) + v32); /*0x4c13ce*/
      v29 = *(float *)(v28 + v17); /*0x4c13d1*/
      v30 = (float *)(v17 + v28); /*0x4c13d4*/
      *v30 = v29 + v34; /*0x4c13da*/
      v30[1] = v30[1] + v35; /*0x4c13e3*/
      v30[2] = v36 + v30[2]; /*0x4c13ed*/
LABEL_21:
      if ( !--v33 ) /*0x4c13f5*/
        break; /*0x4c13f5*/
      v2 = this; /*0x4c1211*/
      v3 = v32; /*0x4c1215*/
    }
    NiPoint3_NormalizeStridedArray(*(float **)(*(_DWORD *)(*((_DWORD *)this + 9) + 8) + v32), 0x121, 0xC); /*0x4c1414*/
    v32 += 4; /*0x4c1422*/
    if ( v32 < 0x10 ) /*0x4c1426*/
    {
      v2 = this; /*0x4c1190*/
      v3 = v32; /*0x4c1194*/
      continue; /*0x4c1194*/
    }
    break;
  }
}
