void __cdecl sub_535DD0(__int128 *a1, int a2)
{
  unsigned int v2; // ebx
  int *v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int BhkCollisionObject; // eax
  _DWORD ***v7; // esi
  _DWORD *v8; // edx
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  double v11; // st7
  __m128 v12; // xmm1
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  float v15; // xmm2_4
  float v16; // xmm3_4
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  __m128 v19; // xmm0
  _DWORD **v20; // eax
  __m128 *v21; // eax
  int v22; // edi
  double v23; // st7
  bool v24; // cc
  float v25; // [esp+18h] [ebp-158h]
  float v26; // [esp+1Ch] [ebp-154h]
  __m128 v27; // [esp+20h] [ebp-150h] BYREF
  __m128 v28; // [esp+30h] [ebp-140h] BYREF
  __m128 v29; // [esp+40h] [ebp-130h]
  __m128 v30; // [esp+50h] [ebp-120h] BYREF
  __m128 v31[3]; // [esp+60h] [ebp-110h] BYREF
  __int128 v32; // [esp+90h] [ebp-E0h]
  __m128 v33[4]; // [esp+A0h] [ebp-D0h] BYREF
  __m128 v34[4]; // [esp+E0h] [ebp-90h] BYREF
  __m128 v35[4]; // [esp+120h] [ebp-50h] BYREF

  v2 = 0; /*0x535dee*/
  if ( dword_B36590[2] || dword_B36590[1] ) /*0x535dfa*/
  {
    v3 = &dword_B36590[1]; /*0x535e06*/
    do /*0x535e30*/
    {
      v4 = (int *)v3[1]; /*0x535e10*/
      if ( !v4 && !*v3 ) /*0x535e17*/
        break; /*0x535e19*/
      if ( v2 ) /*0x535e1d*/
        goto LABEL_12; /*0x535e1d*/
      v5 = *v3; /*0x535e1f*/
      if ( v5 ) /*0x535e23*/
      {
        if ( *(_DWORD *)(v5 + 4) == a2 ) /*0x535e28*/
          v2 = v5; /*0x535e2a*/
      }
      v3 = v4; /*0x535e2c*/
    }
    while ( v4 ); /*0x535e30*/
    if ( !v2 ) /*0x535e34*/
      return; /*0x535e34*/
LABEL_12:
    if ( a2 ) /*0x535e3c*/
    {
      BhkCollisionObject = NiAVObject_GetBhkCollisionObject(a2); /*0x535e43*/
      if ( BhkCollisionObject ) /*0x535e4d*/
      {
        v7 = *(_DWORD ****)(BhkCollisionObject + 0x10); /*0x535e53*/
        if ( v7 ) /*0x535e58*/
        {
          v25 = *(float *)(v2 + 8); /*0x535e67*/
          v32 = *a1; /*0x535e74*/
          hkMatrix3_SetFromQuaternion(v31[0].m128_f32, &flt_B2F080); /*0x535e7c*/
          ((void (__thiscall *)(_DWORD ***, __m128 *))(*v7)[0x2B])(v7, v34); /*0x535e93*/
          sub_8B1F10(v33, v34); /*0x535ea4*/
          sub_8B1F70(v35, v33, v31); /*0x535ebd*/
          v8 = (*v7)[0x29]; /*0x535ecc*/
          v9 = 0; /*0x535ed2*/
          v9.m128_f32[0] = g_GameSettingStringPointers_B36CD8[0x100]; /*0x535ed5*/
          v29 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v35[3]); /*0x535eef*/
          ((void (__thiscall *)(_DWORD ***, __m128 *))v8)(v7, &v27); /*0x535ef4*/
          v10 = 0; /*0x535f08*/
          v11 = 1.0 / (v25 - g_GameSettingStringPointers_B36CD8[0x100]); /*0x535f0b*/
          v10.m128_f32[0] = v25; /*0x535f0d*/
          v12 = 0; /*0x535f1d*/
          v27 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v27); /*0x535f20*/
          v26 = v11; /*0x535f2f*/
          v12.m128_f32[0] = v26; /*0x535f39*/
          v30 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), _mm_sub_ps(v27, v29)); /*0x535f47*/
          sub_8A9C60(v7[2], (int)&v30); /*0x535f4f*/
          v13 = _mm_sub_ps(v27, v29); /*0x535f59*/
          v14 = _mm_mul_ps(v13, v13); /*0x535f69*/
          v14.m128_f32[0] = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0] /*0x535f7b*/
                          + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]);
          v15 = 1.0 / fsqrt(v14.m128_f32[0]); /*0x535f82*/
          v16 = *(float *)&dword_A46C30 - (float)((float)(v14.m128_f32[0] * v15) * v15); /*0x535f9d*/
          v17 = 0; /*0x535fa1*/
          v17.m128_f32[0] = (float)(kHeadBodyNormalMatchRadius * v15) * v16; /*0x535fac*/
          v18 = 0; /*0x535fb8*/
          v18.m128_f32[0] = flt_A35AA4; /*0x535fbf*/
          v19 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v13), _mm_shuffle_ps(v18, v18, 0)); /*0x535fca*/
          v28 = v19; /*0x535fcd*/
          v20 = v7[2]; /*0x535fd2*/
          if ( v20 ) /*0x535fd7*/
            v21 = (__m128 *)(v20[0x14] + 0x34); /*0x535fdc*/
          else
            v21 = (__m128 *)&unk_BA7A40; /*0x535fe3*/
          v28 = _mm_add_ps(*v21, v19); /*0x535fee*/
          v22 = (int)v7[2]; /*0x535ff3*/
          if ( v22 ) /*0x535ff8*/
          {
            bhkRefObject_UpdateHavokObject(v7); /*0x535ffc*/
            sub_8A6410(v22); /*0x536003*/
            (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v22 + 0x50) + 0x54))(*(_DWORD *)(v22 + 0x50), &v28); /*0x536017*/
            bhkRefObject_UpdateHavokObject(v7); /*0x53601b*/
          }
          v23 = v25 - g_GameSettingStringPointers_B36CD8[0x100]; /*0x536024*/
          v24 = --*(_DWORD *)(v2 + 0xC) <= 0; /*0x53602e*/
          *(float *)(v2 + 8) = v23; /*0x536032*/
          if ( v24 ) /*0x536035*/
          {
            FormHeapFree(v2); /*0x536038*/
            BSSimpleList_Remove(&dword_B36590[1], v2); /*0x536046*/
          }
        }
      }
    }
  }
}
