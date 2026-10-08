bool __thiscall PlayerCameraCollision_TestProxySphereOverlap(
        _DWORD *this,
        bhkCharacterProxy *a2,
        float *a3,
        float camera_size,
        float a5)
{
  double v6; // rt0
  _DWORD *v7; // ecx
  hkVector4 *PositionPtr; // eax
  MobileObject *v9; // ecx
  _DWORD *v10; // ebx
  int v11; // eax
  _DWORD *v12; // ecx
  int HavokObject; // eax
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

  v6 = hkFactor; /*0x532904*/
  v30 = 0; /*0x532906*/
  v40.m128_f32[0] = *a3 * v6; /*0x53290b*/
  v40.m128_f32[1] = a3[1] * v6; /*0x532914*/
  v40.m128_f32[2] = v6 * a3[2]; /*0x53291b*/
  if ( a2 && (v7 = *((_DWORD **)a2 + 2)) != 0 ) /*0x532926*/
    PositionPtr = (hkVector4 *)bhkCollisionWrapper_GetPositionPtr(v7); /*0x532928*/
  else
    PositionPtr = &unk_BA7A40; /*0x53292f*/
  v9 = (MobileObject *)reference; /*0x532937*/
  v41 = *(__m128 *)PositionPtr; /*0x53293d*/
  if ( a2 == MobileObject_GetCharProxy(v9) )    // TES4 authoritative camera collision: chooses the first camera phantom when testing the player's own proxy; otherwise uses the second phantom. /*0x532949*/
  {
    v10 = (_DWORD *)*this; /*0x532950*/
    v39 = _mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0]; /*0x532956*/
    v41.m128_f32[0] = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0]; /*0x532969*/
    if ( v41.m128_f32[0] < (double)v39 ) /*0x53297a*/
    {
      v33 = a5 * hkFactor; /*0x532989*/
      v40.m128_f32[2] = v40.m128_f32[2] - v33; /*0x532991*/
    }
  }
  else
  {
    v10 = (_DWORD *)*(this + 1); /*0x532997*/
  }
  *(float *)&v42[1] = flt_A55910; /*0x5329a9*/
  v42[0] = &hkAllCdPointCollector::`vftable'; /*0x5329ad*/
  v42[4] = &v45; /*0x5329b5*/
  v44 = 0x80000008; /*0x5329b9*/
  v43 = 0; /*0x5329c1*/
  v38 = 0.0; /*0x5329c9*/
  v46 = 0; /*0x5329cd*/
  if ( v10 && (v11 = v10[2]) != 0 ) /*0x5329db*/
    v35 = (int *)(v11 + 0x14); /*0x5329e0*/
  else
    v35 = 0; /*0x5329e6*/
  if ( a2 && (v12 = *((_DWORD **)a2 + 2)) != 0 ) /*0x5329f3*/
    HavokObject = bhkCollisionWrapper_GetHavokObject(v12); /*0x5329f5*/
  else
    HavokObject = 0; /*0x5329fc*/
  v34 = (_DWORD *)(HavokObject + 0x14); /*0x532a03*/
  if ( a2 && (v14 = *((_DWORD **)a2 + 2)) != 0 ) /*0x532a0e*/
    v15 = bhkCollisionWrapper_GetHavokObject(v14); /*0x532a10*/
  else
    v15 = 0; /*0x532a17*/
  v16 = *(_DWORD *)(v15 + 8); /*0x532a19*/
  if ( v16 ) /*0x532a1e*/
    v17 = *(_DWORD *)(v16 + 0x2B0); /*0x532a20*/
  else
    v17 = 0; /*0x532a28*/
  if ( v17 ) /*0x532a2c*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 0x58))(v17); /*0x532a39*/
    v18 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x58))(v17) + 0x7C); /*0x532a46*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 0x58))(v17); /*0x532a4e*/
    if ( v18 ) /*0x532a52*/
    {
      v36 = v18; /*0x532a58*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 0x58))(v17); /*0x532a63*/
      v19 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x58))(v17) + 0x78); /*0x532a6e*/
      if ( v19 ) /*0x532a73*/
        v37 = v19 + 0xC; /*0x532a78*/
      else
        v37 = 0; /*0x532a7e*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 0x58))(v17); /*0x532a8d*/
      if ( !v10 ) /*0x532a91*/
        goto LABEL_35; /*0x532a91*/
      v20 = v10[2]; /*0x532a93*/
      if ( v20 ) /*0x532a98*/
      {
        bhkRefObject_UpdateHavokObject(v10); /*0x532a9c*/
        sub_8ABAC0(v20, &v40, 0.0);             // TES4 authoritative camera collision overlap: temporarily moves the chosen camera sphere phantom to the candidate Havok position before testing against the actor proxy shape. /*0x532aae*/
        bhkRefObject_UpdateHavokObject(v10); /*0x532ab5*/
      }
      v21 = v10[2]; /*0x532aba*/
      if ( v21 && (v22 = (int *)(v21 + 0x14)) != 0 ) /*0x532ac4*/
        v31 = *v22; /*0x532ac8*/
      else
LABEL_35:
        v31 = 0; /*0x532ace*/
      v23 = *v35; /*0x532ae2*/
      v24 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v34 + 8))(*v34); /*0x532ae9*/
      v25 = *(void (__cdecl **)(int *, _DWORD *, int *, _DWORD *))(v18 /*0x532b04*/
                                                                 + 0x14
                                                                 * *(unsigned __int8 *)(v24
                                                                                      + 0x20
                                                                                      * (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 8))(v23)
                                                                                      + v18
                                                                                      + 0x190)
                                                                 + 0x998);
      if ( v25 ) /*0x532b0d*/
      {
        v26 = v31; /*0x532b0f*/
        v32 = *(float *)(v31 + 0xC); /*0x532b1b*/
        *(float *)(v26 + 0xC) = camera_size;    // TES4 authoritative camera collision overlap: temporarily overwrites the camera sphere shape radius/extent field with camera_size before dispatching the collision agent, then restores it at 0x532B42. /*0x532b2a*/
        v25(v35, v34, &v36, v42);               // TES4 authoritative: calls a Havok collision-agent function pointer for camera sphere phantom vs actor proxy shape and stores contacts in hkAllCdPointCollector. This is an overlap/intersection test, not the 0x5326B0 segment cast. /*0x532b34*/
        v27 = v43 == 0; /*0x532b3d*/
        v28 = v43 < 0; /*0x532b3d*/
        *(float *)(v26 + 0xC) = v32; /*0x532b42*/
        v30 = !v28 && !v27; /*0x532b4a*/
      }
    }
  }
  v46 = 0xFFFFFFFF; /*0x532b53*/
  hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v42); /*0x532b5e*/
  return v30; /*0x532b67*/
}
