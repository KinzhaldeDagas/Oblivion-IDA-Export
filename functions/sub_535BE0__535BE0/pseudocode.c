void __cdecl sub_535BE0(__int128 *a1, int a2)
{
  int BhkCollisionObject; // eax
  _DWORD *v3; // edi
  int v4; // esi
  int *v5; // eax
  int *v6; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  void (__thiscall *v9)(_DWORD *, __m128 *); // edx
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  double v12; // st7
  __m128 v13; // xmm1
  double v14; // st7
  float v15; // [esp+18h] [ebp-148h]
  float v16; // [esp+1Ch] [ebp-144h]
  __m128 v17; // [esp+20h] [ebp-140h] BYREF
  __m128 v18; // [esp+30h] [ebp-130h] BYREF
  __m128 v19; // [esp+40h] [ebp-120h]
  __m128 v20[3]; // [esp+50h] [ebp-110h] BYREF
  __int128 v21; // [esp+80h] [ebp-E0h]
  __m128 v22[4]; // [esp+90h] [ebp-D0h] BYREF
  __m128 v23[4]; // [esp+D0h] [ebp-90h] BYREF
  __m128 v24[4]; // [esp+110h] [ebp-50h] BYREF

  if ( a2 ) /*0x535c02*/
  {
    BhkCollisionObject = NiAVObject_GetBhkCollisionObject(a2); /*0x535c09*/
    if ( BhkCollisionObject ) /*0x535c13*/
    {
      v3 = *(_DWORD **)(BhkCollisionObject + 0x10); /*0x535c19*/
      if ( v3 ) /*0x535c1e*/
      {
        v4 = 0; /*0x535c24*/
        if ( !dword_B36590[2] && !dword_B36590[1] ) /*0x535c2e*/
          goto LABEL_15; /*0x535c2e*/
        v5 = &dword_B36590[1]; /*0x535c36*/
        do /*0x535c5f*/
        {
          v6 = (int *)v5[1]; /*0x535c40*/
          if ( !v6 && !*v5 ) /*0x535c47*/
            break; /*0x535c49*/
          if ( v4 ) /*0x535c4d*/
            goto LABEL_19; /*0x535c4d*/
          v7 = (_DWORD *)*v5; /*0x535c4f*/
          if ( v7 ) /*0x535c53*/
          {
            if ( (_DWORD *)*v7 == v3 ) /*0x535c57*/
              v4 = (int)v7; /*0x535c59*/
          }
          v5 = v6; /*0x535c5b*/
        }
        while ( v6 ); /*0x535c5f*/
        if ( !v4 ) /*0x535c63*/
        {
LABEL_15:
          v8 = (_DWORD *)FormHeapAlloc(0x10u); /*0x535c67*/
          if ( v8 ) /*0x535c71*/
          {
            *v8 = 0; /*0x535c75*/
            v8[1] = 0; /*0x535c77*/
            v8[2] = 0; /*0x535c7a*/
            v8[3] = 0; /*0x535c7d*/
            v4 = (int)v8; /*0x535c80*/
          }
          else
          {
            v4 = 0; /*0x535c84*/
          }
          *(_DWORD *)v4 = v3; /*0x535c88*/
          *(_DWORD *)(v4 + 4) = a2; /*0x535c8a*/
          *(float *)(v4 + 8) = sub_535AC0(v3); /*0x535c92*/
          *(_DWORD *)(v4 + 0xC) = 0; /*0x535c9b*/
          BSSimpleList_PushFront(&dword_B36590[1], v4); /*0x535ca2*/
        }
LABEL_19:
        v15 = *(float *)(v4 + 8); /*0x535ca7*/
        v21 = *a1; /*0x535cbd*/
        hkMatrix3_SetFromQuaternion(v20[0].m128_f32, &flt_B2F080); /*0x535cc5*/
        (*(void (__thiscall **)(_DWORD *, __m128 *))(*v3 + 0xAC))(v3, v22); /*0x535cdc*/
        sub_8B1F10(v23, v22); /*0x535ced*/
        sub_8B1F70(v24, v23, v20); /*0x535d06*/
        v9 = *(void (__thiscall **)(_DWORD *, __m128 *))(*v3 + 0xA4); /*0x535d15*/
        v10 = 0; /*0x535d1b*/
        v10.m128_f32[0] = g_GameSettingStringPointers_B36CD8[0x100]; /*0x535d1e*/
        v19 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v24[3]); /*0x535d38*/
        v9(v3, &v17); /*0x535d3d*/
        v11 = 0; /*0x535d51*/
        v12 = 1.0 / (g_GameSettingStringPointers_B36CD8[0x100] + v15); /*0x535d54*/
        v11.m128_f32[0] = v15; /*0x535d56*/
        v13 = 0; /*0x535d66*/
        v17 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v17); /*0x535d69*/
        v16 = v12; /*0x535d78*/
        v13.m128_f32[0] = v16; /*0x535d82*/
        v18 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), _mm_add_ps(v17, v19)); /*0x535d90*/
        sub_8A9C60((_DWORD **)v3[2], (int)&v18); /*0x535d98*/
        sub_8A6410(v3[2]); /*0x535da0*/
        v14 = g_GameSettingStringPointers_B36CD8[0x100] + v15; /*0x535dab*/
        ++*(_DWORD *)(v4 + 0xC); /*0x535daf*/
        *(float *)(v4 + 8) = v14; /*0x535db3*/
      }
    }
  }
}
