// TES4 authoritative: integrates controller position from proxy velocity +0x2E0 and dt. Single observed caller is 0x896828 after state update and velocity writeback.
void __thiscall bhkCharacterController_IntegratePositionFromVelocity(__m128 *this, float arg0)
{
  __m128 *v2; // edi
  _DWORD *v3; // esi
  __m128 v4; // xmm0
  int v5; // ebx
  int v6; // ebx
  __m128 *v7; // edi
  int v8; // esi
  __m128 v9; // xmm0
  __m128 v11; // [esp+18h] [ebp-1F0h] BYREF
  __m128 a2; // [esp+28h] [ebp-1E0h] BYREF
  float v13; // [esp+38h] [ebp-1D0h]
  float v14; // [esp+3Ch] [ebp-1CCh]
  int v15[4]; // [esp+48h] [ebp-1C0h] BYREF
  char *v16; // [esp+58h] [ebp-1B0h]
  int v17; // [esp+5Ch] [ebp-1ACh]
  unsigned int v18; // [esp+60h] [ebp-1A8h]
  char v19; // [esp+68h] [ebp-1A0h] BYREF
  unsigned int v20; // [esp+204h] [ebp-4h]

  v2 = this; /*0x894ec0*/
  if ( (*((_DWORD *)this + 0x7D) & 0x80000) != 0 && *((_DWORD *)this + 0xD9) )// Swept-hit listener path requires flag 0x80000 and metadata proxy+0x364. Without both, integration simply writes current position + velocity*dt. /*0x894ed7*/
  {
    *(float *)&v15[1] = flt_A965AC; /*0x894ef1*/
    v15[0] = (int)&hkAllCdPointCollector::`vftable'; /*0x894ef5*/
    v16 = &v19; /*0x894efd*/
    v18 = 0x80000008; /*0x894f01*/
    v17 = 0; /*0x894f09*/
    v13 = flt_A965A8; /*0x894f17*/
    v14 = v13; /*0x894f1c*/
    v20 = 0; /*0x894f22*/
    bhkCharacterController_ReadRelativePosition(this, &v11); /*0x894f29*/
    v3 = (_DWORD *)v2[0x36].m128_i32[1]; /*0x894f33*/
    v4 = 0; /*0x894f3b*/
    v4.m128_f32[0] = arg0; /*0x894f3e*/
    a2 = _mm_add_ps(v11, _mm_mul_ps(v2[0x2E], _mm_shuffle_ps(v4, v4, 0)));// Computes candidate Havok-relative position = current relative position + proxy+0x2E0 * dt. /*0x894f58*/
    if ( v3 ) /*0x894f5d*/
    {
      v5 = v3[2]; /*0x894f5f*/
      if ( v5 ) /*0x894f64*/
      {
        bhkRefObject_UpdateHavokObject(v3); /*0x894f68*/
        (*(void (__thiscall **)(int, __m128 *, __m128 *, int *, _DWORD))(*(_DWORD *)v5 + 0x30))(v5, &v11, &a2, v15, 0);// Linear cast/sweep via metadata+8 hk object vfunc +0x30(start,end,collector,0). Hits are gathered for notification; this call does not itself clamp the candidate end position here. /*0x894f85*/
        bhkRefObject_UpdateHavokObject(v3); /*0x894f89*/
      }
    }
    if ( v17 > 0 ) /*0x894f98*/
    {
      hkpCdPointCollector_SortHitsByDistance(v15); /*0x894f9e*/
      v6 = 0; /*0x894fa3*/
      if ( v17 > 0 ) /*0x894fa9*/
      {
        v7 = v2 + 0x1F; /*0x894fab*/
        v8 = 0; /*0x894fb1*/
        do /*0x894fce*/
        {
          (*(void (__thiscall **)(__m128 *, char *))(v7->m128_i32[0] + 8))(v7, &v16[v8]);// Dispatches each swept hit to the controller listener at proxy+0x1F0 vfunc +8 before final position writeback. /*0x894fc2*/
          ++v6; /*0x894fc4*/
          v8 += 0x30; /*0x894fc7*/
        }
        while ( v6 < v17 ); /*0x894fce*/
        v2 = this; /*0x894fd0*/
      }
    }
    bhkCharacterController_WriteRelativePosition((bhkCharacterProxy *)v2, a2.m128_f32);// After processing swept hits, vanilla still writes the full candidate relative position. This confirms the 0x80000 path is not a blocking ledge-clearance or mantle solver. /*0x894fdb*/
    v20 = 0xFFFFFFFF; /*0x894fe4*/
    hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v15); /*0x894fef*/
  }
  else
  {
    bhkCharacterController_ReadRelativePosition(this, &v11); /*0x894ffb*/
    v9 = 0; /*0x895005*/
    v9.m128_f32[0] = arg0; /*0x895008*/
    v11 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v2[0x2E]), v11); /*0x89502c*/
    bhkCharacterController_WriteRelativePosition((bhkCharacterProxy *)v2, v11.m128_f32);// Simple relative-position writeback when the swept collector path is inactive. /*0x895031*/
  }
}
