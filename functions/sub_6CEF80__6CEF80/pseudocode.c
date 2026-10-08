// Oblivion: updates one accumulation item's 0x68-byte state (cached time, current transform, accumulated delta/reference state). Evaluates virtual +0x4C and handles forward time versus backward/wrap time using the interpolator range from virtual +0x80.
void __thiscall NiBlendAccumTransformInterpolator_UpdateItemAccumulation(int this, char a2, float a3, int a4)
{
  int v5; // esi
  int v6; // ebp
  NiPoint3 *v7; // ebx
  int v8; // eax
  float v9; // ecx
  double v10; // st7
  int v11; // edx
  double v12; // st6
  float *v13; // eax
  NiTransform *v14; // eax
  float v15; // ecx
  int v16; // edx
  int v17; // esi
  float v18; // edi
  double v19; // st7
  float v20; // ecx
  int v21; // edx
  float *v22; // eax
  NiTransform *v23; // eax
  NiTransform *v24; // eax
  float v25; // [esp+48h] [ebp-E0h] BYREF
  int v26; // [esp+4Ch] [ebp-DCh]
  float v27; // [esp+50h] [ebp-D8h]
  int v28; // [esp+54h] [ebp-D4h]
  float v29; // [esp+58h] [ebp-D0h]
  NiTransform v30; // [esp+5Ch] [ebp-CCh] BYREF
  int v31; // [esp+90h] [ebp-98h]
  int v32; // [esp+94h] [ebp-94h] BYREF
  float v33[8]; // [esp+98h] [ebp-90h] BYREF
  NiTransform v34; // [esp+B8h] [ebp-70h] BYREF
  float v35[3]; // [esp+108h] [ebp-20h] BYREF
  float v36[5]; // [esp+114h] [ebp-14h] BYREF

  v5 = *(_DWORD *)(*(_DWORD *)(this + 0x14) + 0x18 * (unsigned __int8)a2); /*0x6cef9e*/
  v6 = *(_DWORD *)(this + 0x50) + 0x68 * (unsigned __int8)a2; /*0x6cefa1*/
  v31 = this; /*0x6cefa6*/
  if ( !v5 || a3 == *(float *)v6 ) /*0x6cefc1*/
  {
    sub_471390((_DWORD *)(v6 + 0x24), &g_zeroNiPoint3); /*0x6cf42e*/
    sub_471430((_DWORD *)(v6 + 0x24), (float *)&dword_B27110); /*0x6cf43a*/
    if ( !_isnan(1.0) ) /*0x6cf447*/
    {
      if ( _finite(1.0) ) /*0x6cf45b*/
        *(float *)(v6 + 0x40) = 1.0; /*0x6cf469*/
    }
    *(float *)v6 = a3; /*0x6cf475*/
  }
  else
  {
    if ( *(_BYTE *)(this + 0x54) || (v7 = (NiPoint3 *)(v6 + 4), NiTransform_IsInvalid((float *)(v6 + 4))) ) /*0x6cefd2*/
    {
      v7 = (NiPoint3 *)(v6 + 4); /*0x6cefed*/
      *(_BYTE *)(this + 0x54) = 0; /*0x6ceff1*/
      (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v5 + 0x4C))(v5, LODWORD(a3), a4, v6 + 4); /*0x6cf001*/
      v8 = dword_B27118; /*0x6cf009*/
      v9 = *(float *)&dword_B27110; /*0x6cf010*/
      v29 = -flt_A7DEB4; /*0x6cf016*/
      v10 = *(float *)(this + 0x40); /*0x6cf01a*/
      v11 = dword_B27114; /*0x6cf01d*/
      v27 = *(float *)&v8; /*0x6cf027*/
      v28 = dword_B2711C; /*0x6cf034*/
      v25 = v9; /*0x6cf038*/
      v26 = v11; /*0x6cf03c*/
      if ( v29 != v10 ) /*0x6cf047*/
      {
        v25 = *(float *)(this + 0x3C); /*0x6cf04c*/
        v26 = *(_DWORD *)(this + 0x40); /*0x6cf053*/
        v27 = *(float *)(this + 0x44); /*0x6cf05a*/
        v28 = *(_DWORD *)(this + 0x48); /*0x6cf061*/
      }
      v12 = *(float *)(v6 + 0x14); /*0x6cf065*/
      v30.rot.data[1][2] = v9; /*0x6cf068*/
      *(_QWORD *)&v30.rot.data[2][0] = __PAIR64__(dword_B27118, v11); /*0x6cf074*/
      LODWORD(v30.rot.data[2][2]) = dword_B2711C; /*0x6cf084*/
      if ( v12 != v29 ) /*0x6cf08b*/
      {
        v13 = sub_714D80((float *)&v34, (float *)(v6 + 0x10)); /*0x6cf099*/
        v30.rot.data[1][2] = *v13; /*0x6cf0a0*/
        *(_QWORD *)&v30.rot.data[2][0] = *(_QWORD *)(v13 + 1); /*0x6cf0a7*/
        v30.rot.data[2][2] = v13[3]; /*0x6cf0b8*/
      }
      sub_714CF0(&v25, (float *)&v30, &v30.rot.data[1][2]); /*0x6cf0ca*/
      sub_47C600(&v30, (NiTransform *)(v6 + 0x44)); /*0x6cf0d7*/
    }
    if ( *(float *)v6 <= (double)a3 ) /*0x6cf0ed*/
    {
      sub_470AB0(v33); /*0x6cf36e*/
      (*(void (__thiscall **)(int, _DWORD, int, float *))(*(_DWORD *)v5 + 0x4C))(v5, LODWORD(a3), a4, v33); /*0x6cf392*/
      sub_470AB0(&v34.rot.data[1][1]); /*0x6cf39b*/
      sub_6CB3C0(&v7->x, (int)&v34.rot.data[1][1]); /*0x6cf3aa*/
      qmemcpy((void *)(v6 + 0x24), sub_6CB820(&v34.rot.data[1][1], (int)&v34.scale, v33), 0x20u); /*0x6cf3d4*/
      if ( -flt_A7DEB4 != *(float *)(v6 + 0x24) ) /*0x6cf3e7*/
      {
        v24 = sub_7101F0((NiTransform *)(v6 + 0x44), (NiTransform *)&v30.rot.data[1][2], (NiPoint3 *)(v6 + 0x24)); /*0x6cf3f2*/
        sub_471390((_DWORD *)(v6 + 0x24), (float *)v24); /*0x6cf3fb*/
      }
      *(float *)v6 = a3; /*0x6cf40e*/
      qmemcpy(v7, v33, 0x20u); /*0x6cf415*/
    }
    else
    {
      (*(void (__thiscall **)(int, float *, int *))(*(_DWORD *)v5 + 0x80))(v5, &v30.rot.data[1][1], &v32); /*0x6cf107*/
      sub_470AB0(&v34.rot.data[1][1]); /*0x6cf110*/
      (*(void (__thiscall **)(int, int, int, float *))(*(_DWORD *)v5 + 0x4C))(v5, v32, a4, &v34.rot.data[1][1]); /*0x6cf134*/
      sub_470AB0(v35); /*0x6cf13d*/
      (*(void (__thiscall **)(int, _DWORD, int, float *))(*(_DWORD *)v5 + 0x4C))( /*0x6cf15a*/
        v5,
        LODWORD(v30.rot.data[1][1]),
        a4,
        v35);
      sub_470AB0(v33); /*0x6cf160*/
      (*(void (__thiscall **)(int, _DWORD, int, float *))(*(_DWORD *)v5 + 0x4C))(v5, LODWORD(a3), a4, v33); /*0x6cf17d*/
      sub_470AB0(&v34.scale); /*0x6cf186*/
      sub_6CB3C0(&v7->x, (int)&v34.scale); /*0x6cf195*/
      qmemcpy((void *)(v6 + 0x24), sub_6CB820(&v34.scale, (int)&v30.rot.data[1][2], &v34.rot.data[1][1]), 0x20u); /*0x6cf1bf*/
      if ( -flt_A7DEB4 != *(float *)(v6 + 0x24) ) /*0x6cf1d2*/
      {
        v14 = sub_7101F0((NiTransform *)(v6 + 0x44), (NiTransform *)&v30.rot.data[1][2], (NiPoint3 *)(v6 + 0x24)); /*0x6cf1dd*/
        sub_471390((_DWORD *)(v6 + 0x24), (float *)v14); /*0x6cf1e6*/
      }
      v15 = *(float *)&dword_B2711C; /*0x6cf1eb*/
      v16 = dword_B27110; /*0x6cf1f7*/
      v17 = dword_B27114; /*0x6cf1ff*/
      v29 = -flt_A7DEB4; /*0x6cf205*/
      v18 = *(float *)&dword_B27118; /*0x6cf209*/
      v30.rot.data[1][0] = v15; /*0x6cf20f*/
      v19 = *(float *)(v31 + 0x40); /*0x6cf217*/
      *(_QWORD *)&v30.rot.data[0][0] = __PAIR64__(v17, v16); /*0x6cf21a*/
      v30.rot.data[0][2] = v18; /*0x6cf228*/
      if ( v29 != v19 ) /*0x6cf235*/
      {
        *(_QWORD *)&v30.rot.data[0][0] = *(_QWORD *)(v31 + 0x3C); /*0x6cf23a*/
        v20 = *(float *)(v31 + 0x48); /*0x6cf248*/
        v30.rot.data[0][2] = *(float *)(v31 + 0x44); /*0x6cf24b*/
        v30.rot.data[1][0] = v20; /*0x6cf24f*/
      }
      v25 = *(float *)&v16; /*0x6cf25a*/
      v21 = dword_B2711C; /*0x6cf25e*/
      v26 = v17; /*0x6cf266*/
      v27 = v18; /*0x6cf26a*/
      v28 = v21; /*0x6cf26e*/
      if ( v36[1] != v29 ) /*0x6cf277*/
      {
        v22 = sub_714D80(&v30.rot.data[1][2], v36); /*0x6cf286*/
        v25 = *v22; /*0x6cf28d*/
        v26 = *((_DWORD *)v22 + 1); /*0x6cf294*/
        v27 = v22[2]; /*0x6cf29b*/
        v28 = *((_DWORD *)v22 + 3); /*0x6cf2a5*/
      }
      sub_714CF0((float *)&v30, (float *)&v34, &v25); /*0x6cf2ba*/
      sub_47C600(&v34, (NiTransform *)(v6 + 0x44)); /*0x6cf2ca*/
      sub_6CB3C0(v35, (int)&v34.scale); /*0x6cf2de*/
      qmemcpy(v7, sub_6CB820(&v34.scale, (int)&v30.rot.data[1][2], v33), 0x20u); /*0x6cf302*/
      if ( -flt_A7DEB4 != v7->x ) /*0x6cf315*/
      {
        v23 = sub_7101F0((NiTransform *)(v6 + 0x44), (NiTransform *)&v30.rot.data[1][2], v7); /*0x6cf320*/
        sub_471390(v7, (float *)v23); /*0x6cf328*/
      }
      qmemcpy((void *)(v6 + 0x24), sub_6CB820((float *)(v6 + 0x24), (int)&v30.rot.data[1][2], &v7->x), 0x20u); /*0x6cf34b*/
      *(float *)v6 = a3; /*0x6cf34d*/
      qmemcpy(v7, v33, 0x20u); /*0x6cf35b*/
    }
  }
}
