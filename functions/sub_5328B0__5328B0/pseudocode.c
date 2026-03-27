bool __thiscall sub_5328B0(_DWORD *this, bhkCharacterProxy *a2, float *a3, float camera_size, float a5)
{
  double v6; // rt0
  _DWORD *v7; // ecx
  hkVector4 *v8; // eax
  MobileObject *v9; // ecx
  _DWORD *v10; // ebx
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // edi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int *v22; // eax
  int v23; // esi
  int v24; // ebx
  void (__cdecl *v25)(int *, _DWORD *, int *, _DWORD *); // eax
  int v26; // esi
  bool v27; // zf
  bool v28; // sf
  bool v30; // [esp+1Bh] [ebp-20Dh]
  int v31; // [esp+1Ch] [ebp-20Ch]
  float v32; // [esp+1Ch] [ebp-20Ch]
  float v33; // [esp+20h] [ebp-208h]
  _DWORD *v34; // [esp+20h] [ebp-208h]
  int *v35; // [esp+24h] [ebp-204h]
  int v36; // [esp+28h] [ebp-200h] BYREF
  int v37; // [esp+2Ch] [ebp-1FCh]
  float v38; // [esp+30h] [ebp-1F8h]
  float v39; // [esp+38h] [ebp-1F0h]
  __m128 v40; // [esp+48h] [ebp-1E0h] BYREF
  __m128 v41; // [esp+58h] [ebp-1D0h]
  _DWORD v42[5]; // [esp+68h] [ebp-1C0h] BYREF
  int v43; // [esp+7Ch] [ebp-1ACh]
  unsigned int v44; // [esp+80h] [ebp-1A8h]
  char v45; // [esp+88h] [ebp-1A0h] BYREF
  unsigned int v46; // [esp+224h] [ebp-4h]

  v6 = hkFactor;
  v30 = 0;
  v40.m128_f32[0] = *a3 * v6;
  v40.m128_f32[1] = a3[1] * v6;
  v40.m128_f32[2] = v6 * a3[2];
  if ( a2 && (v7 = *((_DWORD **)a2 + 2)) != 0 )
    v8 = (hkVector4 *)sub_8AC070(v7);
  else
    v8 = &stru_BA7A40;
  v9 = (MobileObject *)TESDataHandler_g_PlayerRef;
  v41 = *(__m128 *)v8;
  if ( a2 == MobileObject_GetCharProxy(v9) )
  {
    v10 = (_DWORD *)*this;
    v39 = _mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0];
    v41.m128_f32[0] = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0];
    if ( v41.m128_f32[0] < (double)v39 )
    {
      v33 = a5 * hkFactor;
      v40.m128_f32[2] = v40.m128_f32[2] - v33;
    }
  }
  else
  {
    v10 = (_DWORD *)*(this + 1);
  }
  *(float *)&v42[1] = flt_A55910;
  v42[0] = &hkAllCdPointCollector::`vftable';
  v42[4] = &v45;
  v44 = 0x80000008;
  v43 = 0;
  v38 = 0.0;
  v46 = 0;
  if ( v10 && (v11 = v10[2]) != 0 )
    v35 = (int *)(v11 + 0x14);
  else
    v35 = 0;
  if ( a2 && (v12 = *((_DWORD **)a2 + 2)) != 0 )
    v13 = sub_8AC0C0(v12);
  else
    v13 = 0;
  v34 = (_DWORD *)(v13 + 0x14);
  if ( a2 && (v14 = *((_DWORD **)a2 + 2)) != 0 )
    v15 = sub_8AC0C0(v14);
  else
    v15 = 0;
  v16 = *(_DWORD *)(v15 + 8);
  if ( v16 )
    v17 = *(_DWORD *)(v16 + 0x2B0);
  else
    v17 = 0;
  if ( v17 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 0x58))(v17);
    v18 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x58))(v17) + 0x7C);
    (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 0x58))(v17);
    if ( v18 )
    {
      v36 = v18;
      (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 0x58))(v17);
      v19 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x58))(v17) + 0x78);
      if ( v19 )
        v37 = v19 + 0xC;
      else
        v37 = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 0x58))(v17);
      if ( !v10 )
        goto LABEL_35;
      v20 = v10[2];
      if ( v20 )
      {
        sub_89F570(v10);
        sub_8ABAC0(v20, (int)&v40, 0.0);
        sub_89F570(v10);
      }
      v21 = v10[2];
      if ( v21 && (v22 = (int *)(v21 + 0x14)) != 0 )
        v31 = *v22;
      else
LABEL_35:
        v31 = 0;
      v23 = *v35;
      v24 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v34 + 8))(*v34);
      v25 = *(void (__cdecl **)(int *, _DWORD *, int *, _DWORD *))(v18
                                                                 + 0x14
                                                                 * *(unsigned __int8 *)(v24
                                                                                      + 0x20
                                                                                      * (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 8))(v23)
                                                                                      + v18
                                                                                      + 0x190)
                                                                 + 0x998);
      if ( v25 )
      {
        v26 = v31;
        v32 = *(float *)(v31 + 0xC);
        *(float *)(v26 + 0xC) = camera_size;
        v25(v35, v34, &v36, v42);
        v27 = v43 == 0;
        v28 = v43 < 0;
        *(float *)(v26 + 0xC) = v32;
        v30 = !v28 && !v27;
      }
    }
  }
  v46 = 0xFFFFFFFF;
  hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v42);
  return v30;
}
