// Recursively searches an Actor scene subtree for an admissible collision-backed embed node. It filters collision layer/body groups, ray-tests the supplied start/direction against each candidate, updates inOutDistance to the accepted fraction, and returns the selected NiAVObject; no bone name is hard-coded.
NiAVObject *__thiscall ArrowProjectile_FindActorEmbedCollisionNode(
        ArrowProjectile *this,
        NiAVObject *candidate,
        float startX,
        float startY,
        float startZ,
        float directionX,
        float directionY,
        float directionZ,
        float *inOutDistance,
        char excludeGroup0100)
{
  NiAVObject *v10; // ebx
  int BhkCollisionObject; // eax
  int v12; // edi
  int v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  float v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  float v23; // esi
  float v24; // edi
  float v25; // ebx
  NiAVObject *v26; // ecx
  NiAVObject *result; // eax
  char v28; // [esp+1Bh] [ebp-165h]
  float v29; // [esp+1Ch] [ebp-164h] BYREF
  int v30; // [esp+20h] [ebp-160h] BYREF
  NiAVObject *v31; // [esp+24h] [ebp-15Ch]
  float *v32; // [esp+28h] [ebp-158h]
  unsigned int v33; // [esp+2Ch] [ebp-154h]
  ArrowProjectile *v34; // [esp+30h] [ebp-150h]
  float v35[3]; // [esp+34h] [ebp-14Ch] BYREF
  __m128 v36; // [esp+40h] [ebp-140h] BYREF
  __m128 v37[4]; // [esp+50h] [ebp-130h] BYREF
  float v38[5]; // [esp+90h] [ebp-F0h] BYREF
  float v39; // [esp+A4h] [ebp-DCh]
  __m128 v40; // [esp+B0h] [ebp-D0h] BYREF
  __m128 v41; // [esp+C0h] [ebp-C0h] BYREF
  __m128 v42; // [esp+D0h] [ebp-B0h] BYREF
  int v43; // [esp+E0h] [ebp-A0h]
  int v44; // [esp+E4h] [ebp-9Ch]
  __m128 v45[4]; // [esp+F0h] [ebp-90h] BYREF
  __m128 v46[3]; // [esp+130h] [ebp-50h] BYREF
  __int128 v47; // [esp+160h] [ebp-20h]

  v10 = candidate; /*0x609e0e*/
  v34 = this; /*0x609e15*/
  v31 = candidate; /*0x609e19*/
  v32 = inOutDistance; /*0x609e1d*/
  v28 = 0; /*0x609e21*/
  if ( !candidate ) /*0x609e26*/
    return 0; /*0x60a1f4*/
  BhkCollisionObject = NiAVObject_GetBhkCollisionObject((int)candidate); /*0x609e2d*/
  v12 = BhkCollisionObject; /*0x609e32*/
  if ( BhkCollisionObject ) /*0x609e39*/
  {
    v13 = *(_DWORD *)(BhkCollisionObject + 0x10); /*0x609e3f*/
    if ( v13 ) /*0x609e44*/
    {
      v14 = *(_DWORD *)(v13 + 8); /*0x609e4a*/
      if ( v14 && v14 != 0xFFFFFFEC && (v15 = *(_DWORD *)(v14 + 0x14)) != 0 ) /*0x609e5c*/
        v16 = *(_DWORD *)(v15 + 8); /*0x609e5e*/
      else
        v16 = 0; /*0x609e63*/
      if ( v16 ) /*0x609e67*/
      {
        if ( v14 && (v17 = v14 + 0x14) != 0 ) /*0x609e74*/
          v18 = *(_DWORD *)(v17 + 0x1C); /*0x609e76*/
        else
          LOBYTE(v18) = 0; /*0x609e7b*/
        if ( (v18 & 0x3F) == 8 /*0x609f43*/
          && (*sub_497340((_DWORD *)v13, &v29) & 0x1F00) != 0x1600
          && (*sub_497340((_DWORD *)v13, &v29) & 0x1F00) != 0x1200
          && (*sub_497340((_DWORD *)v13, &v29) & 0x1F00) != 0x1300
          && (*sub_497340((_DWORD *)v13, &v29) & 0x1F00) != 0x1400
          && (*sub_497340((_DWORD *)v13, &v29) & 0x1F00) != 0x1500
          && (!excludeGroup0100 || (*sub_497340((_DWORD *)v13, &v29) & 0x1F00) != 0x100) )// Accept actor embed candidate only for collision filter category 8, excluding several high-word body/material groups and optionally group 0x0100.
        {
          sub_4529E0(v40.m128_f32, &startX); /*0x609f55*/
          v29 = *v32; /*0x609f64*/
          v36.m128_f32[0] = directionX * v29; /*0x609f7b*/
          v36.m128_f32[1] = directionY * v29; /*0x609f84*/
          v36.m128_f32[2] = v29 * directionZ; /*0x609f8b*/
          v35[0] = startX + v36.m128_f32[0]; /*0x609f96*/
          v35[1] = startY + v36.m128_f32[1]; /*0x609fa1*/
          v35[2] = startZ + v36.m128_f32[2]; /*0x609fac*/
          sub_4529E0(v36.m128_f32, v35); /*0x609fb0*/
          v39 = 1.0; /*0x609fba*/
          v43 = 0; /*0x609fc6*/
          v44 = 0; /*0x609fcd*/
          if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)&OB_ShaderConstantStorage_010201A0[0x18703], (NiObject *)v12) /*0x609ff9*/
            && (!sub_607840((_DWORD *)v13) || 1.0 == *(float *)(v12 + 0x14)) )
          {
            sub_5398E0((int)v37, (float *)&v31->members.m_worldTransform); /*0x60a01c*/
            if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)&OB_ShaderConstantStorage_010201A0[0x18881], (NiObject *)v13) ) /*0x60a027*/
            {
              v45[0] = v37[0]; /*0x60a038*/
              v45[1] = v37[1]; /*0x60a045*/
              v45[2] = v37[2]; /*0x60a055*/
              v45[3] = v37[3]; /*0x60a06d*/
              hkMatrix3_SetFromQuaternion(v46[0].m128_f32, (float *)(v13 + 0x20)); /*0x60a075*/
              v47 = *(_OWORD *)(v13 + 0x30); /*0x60a092*/
              sub_8B1F70(v37, v45, v46); /*0x60a09a*/
            }
          }
          else
          {
            (*(void (__stdcall **)(__m128 *))(*(_DWORD *)v13 + 0xAC))(v37); /*0x60a0ae*/
          }
          sub_88FD10(&v41, v37, &v40); /*0x60a0c4*/
          sub_88FD10(&v42, v37, &v36); /*0x60a0da*/
          (*(void (__thiscall **)(_DWORD, char *, __m128 *, float *))(**(_DWORD **)(v16 + 8) + 0x14))( /*0x60a0fc*/
            *(_DWORD *)(v16 + 8),
            (char *)&v30 + 3,
            &v41,
            v38);                               // Ray/shape query against candidate collision object; update caller distance by hit fraction when accepted.
          if ( *sub_538A70(v38, (bool *)&v30 + 3) ) /*0x60a10f*/
          {
            v28 = 1; /*0x60a121*/
            *v32 = v39 * *v32; /*0x60a126*/
          }
        }
      }
      v10 = v31; /*0x60a128*/
    }
  }
  *(float *)&v19 = COERCE_FLOAT((int)v10->vtbl->super.Unk_02((NiObject *)v10)); /*0x60a133*/
  v20 = *(float *)&v19; /*0x60a135*/
  v29 = *(float *)&v19; /*0x60a139*/
  if ( *(float *)&v19 == 0.0 || (v21 = *(unsigned __int16 *)(v19 + 0xB6), v22 = 0, v33 = 0, !v21) ) /*0x60a152*/
  {
LABEL_41:
    if ( v28 ) /*0x60a1d9*/
      return v10; /*0x60a1f1*/
    return 0; /*0x60a1d9*/
  }
  v23 = directionZ; /*0x60a158*/
  v24 = directionY; /*0x60a15b*/
  v25 = directionX; /*0x60a15e*/
  while ( 1 )
  {
    v26 = v21 > v22 ? *(NiAVObject **)(*(_DWORD *)(LODWORD(v20) + 0xB0) + 4 * v22) : 0;
    result = ArrowProjectile_FindActorEmbedCollisionNode( /*0x60a1ad*/
               v34,
               v26,
               startX,
               startY,
               startZ,
               v25,
               v24,
               v23,
               v32,
               excludeGroup0100);               // Recursively traverse NiNode children until a collision-backed embed candidate is found; selection is geometry/collision driven, not hard-coded bone-name lookup.
    if ( result ) /*0x60a1b4*/
      return result; /*0x60a1dd*/
    v21 = *(unsigned __int16 *)(LODWORD(v29) + 0xB6); /*0x60a1be*/
    if ( ++v33 >= v21 ) /*0x60a1ce*/
    {
      v10 = v31; /*0x60a1d0*/
      goto LABEL_41; /*0x60a1d0*/
    }
    v22 = v33; /*0x60a163*/
    v20 = v29; /*0x60a167*/
  }
}
