double __userpurge sub_912B30@<st0>(
        int a1@<ecx>,
        double result@<st0>,
        float *a3,
        int a4,
        __m128 **a5,
        int a6,
        int a7,
        int a8)
{
  __m128 *v8; // edx
  float v9; // eax
  int *v10; // edx
  int v11; // eax
  __m128 v12; // xmm0
  __m128 v13; // xmm2
  __m128 v14; // xmm3
  __m128 v15; // xmm1
  int *v16; // ecx
  __m128 v17; // xmm2
  int v18; // eax
  int *v19; // edx
  __m128 v20; // xmm0
  int v21; // ecx
  __m128 v22; // xmm0
  int *v23; // edx
  int *v24; // eax
  __m128 *v25; // eax
  int v26; // ecx
  void (__usercall **v27)(int@<ecx>, __m128 *, int, double@<st0>); // eax
  int v28; // ecx
  int v29; // eax
  __m128 *v30; // [esp-4h] [ebp-E4h]
  __m128 *v31; // [esp+Ch] [ebp-D4h] BYREF
  int *v32; // [esp+10h] [ebp-D0h] BYREF
  float v33; // [esp+14h] [ebp-CCh]
  int v34; // [esp+18h] [ebp-C8h]
  __m128 v35; // [esp+20h] [ebp-C0h] BYREF
  __m128 v36[4]; // [esp+30h] [ebp-B0h] BYREF
  _OWORD v37[3]; // [esp+70h] [ebp-70h] BYREF
  _OWORD v38[3]; // [esp+A0h] [ebp-40h] BYREF
  __m128 *v39; // [esp+D0h] [ebp-10h]
  __m128 *v40; // [esp+D4h] [ebp-Ch]
  int v41; // [esp+D8h] [ebp-8h]

  v8 = *(__m128 **)(a4 + 0x20); /*0x912b4b*/
  v39 = *(__m128 **)(a4 + 0x1C); /*0x912b4e*/
  v31 = *((__m128 **)a3 + 4); /*0x912b58*/
  v9 = a3[0xA]; /*0x912b5c*/
  v40 = v8; /*0x912b5f*/
  v10 = *((int **)a3 + 7); /*0x912b66*/
  v34 = a1; /*0x912b69*/
  v41 = 0; /*0x912b6d*/
  v33 = v9; /*0x912b78*/
  while ( 2 ) /*0x912b7c*/
  {
    v11 = *v10; /*0x912b7c*/
    v32 = v10; /*0x912b81*/
    switch ( v11 ) /*0x912b8b*/
    {
      case 0: /*0x912b8b*/
        return result;
      case 1: /*0x912b8b*/
        hkTransform_TransformPosition(&v35, v39, v31++); /*0x912f39*/
        v10 = v32 + 1; /*0x912f51*/
        continue; /*0x912f54*/
      case 2: /*0x912b8b*/
        hkTransform_TransformPosition(v36, v40, v31++); /*0x912f6a*/
        v10 = v32 + 1; /*0x912f82*/
        continue; /*0x912f85*/
      case 3: /*0x912b8b*/
        v12 = *v31; /*0x912b96*/
        v13 = _mm_mul_ps(v39[2], _mm_shuffle_ps(v12, v12, 0xAA)); /*0x912baf*/
        v14 = _mm_mul_ps(v39[1], _mm_shuffle_ps(*v31, *v31, 0x55)); /*0x912bbc*/
        v15 = *v31; /*0x912bbf*/
        v32 = v10 + 1; /*0x912bc2*/
        v16 = (int *)&v31[1]; /*0x912bd8*/
        v36[v10[1] + 1] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(*v39, _mm_shuffle_ps(v15, v12, 0)), v14), v13); /*0x912bde*/
        v31 = (__m128 *)v16; /*0x912be7*/
        v10 = v32 + 1; /*0x912bef*/
        continue; /*0x912bf2*/
      case 4: /*0x912b8b*/
        v17 = _mm_mul_ps(v40[2], _mm_shuffle_ps(*v31, *v31, 0xAA)); /*0x912c11*/
        v18 = v10[1]; /*0x912c28*/
        v19 = v10 + 1; /*0x912c2b*/
        v20 = _mm_add_ps( /*0x912c37*/
                _mm_mul_ps(*v40, _mm_shuffle_ps(*v31, *v31, 0)),
                _mm_mul_ps(v40[1], _mm_shuffle_ps(*v31, *v31, 0x55)));
        v32 = v19; /*0x912c3a*/
        ++v31; /*0x912c41*/
        v36[v18 + 1] = _mm_add_ps(v20, v17); /*0x912c49*/
        v10 = v19 + 1; /*0x912c4e*/
        continue; /*0x912c51*/
      case 5: /*0x912b8b*/
        v21 = v10[1]; /*0x912c56*/
        v22 = *v31; /*0x912c5d*/
        v23 = v10 + 1; /*0x912c60*/
        v24 = (int *)&v31[1]; /*0x912c66*/
        v32 = v23; /*0x912c69*/
        v36[v21 + 1] = v22; /*0x912c6d*/
        v31 = (__m128 *)v24; /*0x912c76*/
        v10 = v23 + 1; /*0x912c7a*/
        continue; /*0x912c7d*/
      case 6: /*0x912b8b*/
        sub_9120D0(&v32, (int)&v31, (int)a3, &v35, a4, a5); /*0x912c94*/
        v10 = v32 + 1; /*0x912ca1*/
        continue; /*0x912ca4*/
      case 7: /*0x912b8b*/
        sub_912030((int)&v32, (int)&v31, (int)a3, &v35, a4, a5); /*0x912cbb*/
        v10 = v32 + 1; /*0x912cc8*/
        continue; /*0x912ccb*/
      case 8: /*0x912b8b*/
        v25 = v31; /*0x912cd4*/
        v31 += 3; /*0x912cd9*/
        sub_8D2AB0((char *)v37, v39, v25); /*0x912cea*/
        v10 = v32 + 1; /*0x912cf7*/
        continue; /*0x912cfa*/
      case 9: /*0x912b8b*/
        v30 = v31; /*0x912d0f*/
        v31 += 3; /*0x912d10*/
        sub_8D2AB0((char *)v38, v40, v30); /*0x912d1c*/
        v10 = v32 + 1; /*0x912d29*/
        continue; /*0x912d2c*/
      case 0xA: /*0x912b8b*/
        v37[0] = *v39; /*0x912d43*/
        v37[1] = v39[1]; /*0x912d4c*/
        v37[2] = v39[2]; /*0x912d58*/
        v10 = v32 + 1; /*0x912d60*/
        continue; /*0x912d63*/
      case 0xB: /*0x912b8b*/
        v38[0] = *v40; /*0x912d7a*/
        v38[1] = v40[1]; /*0x912d86*/
        v38[2] = v40[2]; /*0x912d92*/
        v10 = v32 + 1; /*0x912d9a*/
        continue; /*0x912d9d*/
      case 0xC: /*0x912b8b*/
        sub_9121D0(&v32, (int)&v31, (int)a3, (int)&v35, a4, (int)a5); /*0x912db4*/
        v10 = v32 + 1; /*0x912dc1*/
        continue; /*0x912dc4*/
      case 0xD: /*0x912b8b*/
        sub_912280((int)&v32, (int)&v31, (int)a3, (int)&v35, a4, (int)a5); /*0x912ddb*/
        v10 = v32 + 1; /*0x912de8*/
        continue; /*0x912deb*/
      case 0xE: /*0x912b8b*/
        sub_912940(&v32, (int *)&v31, (int)a3, (int)&v35, a4, a5); /*0x912e9e*/
        v10 = v32 + 1; /*0x912eab*/
        continue; /*0x912eae*/
      case 0xF: /*0x912b8b*/
        sub_912550(&v32, (float **)&v31, (int)a3, &v35, a4, a5); /*0x912ec5*/
        v10 = v32 + 1; /*0x912ed2*/
        continue; /*0x912ed5*/
      case 0x10: /*0x912b8b*/
        sub_912340(&v32, (int **)&v31, (int)a3, &v35, a4, (int *)a5); /*0x912e02*/
        v10 = v32 + 1; /*0x912e0f*/
        continue; /*0x912e12*/
      case 0x11: /*0x912b8b*/
        sub_9123C0(result, &v32, (float **)&v31, (int)a3, (int)&v35, a4, (int)a5); /*0x912e29*/
        v10 = v32 + 1; /*0x912e36*/
        continue; /*0x912e39*/
      case 0x12: /*0x912b8b*/
        sub_9127A0(&v32, (int **)&v31, (int)a3, (int)&v35, a4, (int)a5); /*0x912e50*/
        v10 = v32 + 1; /*0x912e5d*/
        continue; /*0x912e60*/
      case 0x13: /*0x912b8b*/
        sub_9124B0(&v32, (int **)&v31, (int)a3, (int)&v35, a4, (int)a5); /*0x912e77*/
        v10 = v32 + 1; /*0x912e84*/
        continue; /*0x912e87*/
      case 0x14: /*0x912b8b*/
        sub_912690(&v32, (int **)&v31, (int)a3, (int)&v35, a4, (int)a5); /*0x912eec*/
        v10 = v32 + 1; /*0x912ef9*/
        continue; /*0x912efc*/
      case 0x15: /*0x912b8b*/
        sub_912710(&v32, (int **)&v31, (int)a3, &v35, a4, a5); /*0x912f13*/
        v10 = v32 + 1; /*0x912f20*/
        continue; /*0x912f23*/
      case 0x16: /*0x912b8b*/
        sub_8F0F20(v31->m128_i32[0], v31->m128_i32[1], (int)a5); /*0x912f96*/
        ++v31; /*0x912fad*/
        v10 = v32 + 1; /*0x912fb1*/
        continue; /*0x912fb4*/
      case 0x17: /*0x912b8b*/
        sub_8F0F50((int)a5); /*0x912fba*/
        v10 = v32 + 1; /*0x912fca*/
        continue; /*0x912fcd*/
      case 0x18: /*0x912b8b*/
        v26 = *(_DWORD *)LODWORD(v33); /*0x912fd6*/
        v27 = **(void (__usercall ****)(int@<ecx>, __m128 *, int, double@<st0>))LODWORD(v33); /*0x912fd8*/
        v32 = v10 + 1; /*0x912fdd*/
        (*v27)(v26, &v35, v10[1], result); /*0x912fe9*/
        goto LABEL_28; /*0x912feb*/
      case 0x19: /*0x912b8b*/
        v28 = *(_DWORD *)LODWORD(v33); /*0x912ff1*/
        v29 = **(_DWORD **)LODWORD(v33); /*0x912ff3*/
        v32 = v10 + 1; /*0x912ff8*/
        (*(void (__thiscall **)(int, __m128 *, int))(v29 + 4))(v28, &v35, v10[1]); /*0x913004*/
        v33 = result; /*0x913007*/
        sub_8F0EF0(v33, a4, a5, 1); /*0x913014*/
LABEL_28:
        def_912B8B((int)a3, a4, (int)a5, a6, a7, a8); /*0x91301c*/
        return result;
      default:
        JUMPOUT(0x913021); /*0x913021*/
    }
  }
}
