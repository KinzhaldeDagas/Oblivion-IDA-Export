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

  v8 = *(__m128 **)(a4 + 0x20);
  v39 = *(__m128 **)(a4 + 0x1C);
  v31 = *((__m128 **)a3 + 4);
  v9 = a3[0xA];
  v40 = v8;
  v10 = *((int **)a3 + 7);
  v34 = a1;
  v41 = 0;
  v33 = v9;
  while ( 2 )
  {
    v11 = *v10;
    v32 = v10;
    switch ( v11 )
    {
      case 0:
        return result;
      case 1:
        sub_88FCC0(&v35, v39, v31++);
        v10 = v32 + 1;
        continue;
      case 2:
        sub_88FCC0(v36, v40, v31++);
        v10 = v32 + 1;
        continue;
      case 3:
        v12 = *v31;
        v13 = _mm_mul_ps(v39[2], _mm_shuffle_ps(v12, v12, 0xAA));
        v14 = _mm_mul_ps(v39[1], _mm_shuffle_ps(*v31, *v31, 0x55));
        v15 = *v31;
        v32 = v10 + 1;
        v16 = (int *)&v31[1];
        v36[v10[1] + 1] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(*v39, _mm_shuffle_ps(v15, v12, 0)), v14), v13);
        v31 = (__m128 *)v16;
        v10 = v32 + 1;
        continue;
      case 4:
        v17 = _mm_mul_ps(v40[2], _mm_shuffle_ps(*v31, *v31, 0xAA));
        v18 = v10[1];
        v19 = v10 + 1;
        v20 = _mm_add_ps(
                _mm_mul_ps(*v40, _mm_shuffle_ps(*v31, *v31, 0)),
                _mm_mul_ps(v40[1], _mm_shuffle_ps(*v31, *v31, 0x55)));
        v32 = v19;
        ++v31;
        v36[v18 + 1] = _mm_add_ps(v20, v17);
        v10 = v19 + 1;
        continue;
      case 5:
        v21 = v10[1];
        v22 = *v31;
        v23 = v10 + 1;
        v24 = (int *)&v31[1];
        v32 = v23;
        v36[v21 + 1] = v22;
        v31 = (__m128 *)v24;
        v10 = v23 + 1;
        continue;
      case 6:
        sub_9120D0(&v32, (int)&v31, (int)a3, &v35, a4, a5);
        v10 = v32 + 1;
        continue;
      case 7:
        sub_912030((int)&v32, (int)&v31, (int)a3, &v35, a4, a5);
        v10 = v32 + 1;
        continue;
      case 8:
        v25 = v31;
        v31 += 3;
        sub_8D2AB0((char *)v37, v39, v25);
        v10 = v32 + 1;
        continue;
      case 9:
        v30 = v31;
        v31 += 3;
        sub_8D2AB0((char *)v38, v40, v30);
        v10 = v32 + 1;
        continue;
      case 0xA:
        v37[0] = *v39;
        v37[1] = v39[1];
        v37[2] = v39[2];
        v10 = v32 + 1;
        continue;
      case 0xB:
        v38[0] = *v40;
        v38[1] = v40[1];
        v38[2] = v40[2];
        v10 = v32 + 1;
        continue;
      case 0xC:
        sub_9121D0(&v32, (int)&v31, (int)a3, (int)&v35, a4, (int)a5);
        v10 = v32 + 1;
        continue;
      case 0xD:
        sub_912280((int)&v32, (int)&v31, (int)a3, (int)&v35, a4, (int)a5);
        v10 = v32 + 1;
        continue;
      case 0xE:
        sub_912940(&v32, (int *)&v31, (int)a3, (int)&v35, a4, a5);
        v10 = v32 + 1;
        continue;
      case 0xF:
        sub_912550(&v32, (float **)&v31, (int)a3, &v35, a4, a5);
        v10 = v32 + 1;
        continue;
      case 0x10:
        sub_912340(&v32, (int **)&v31, (int)a3, &v35, a4, (int *)a5);
        v10 = v32 + 1;
        continue;
      case 0x11:
        sub_9123C0(result, &v32, (float **)&v31, (int)a3, (int)&v35, a4, (int)a5);
        v10 = v32 + 1;
        continue;
      case 0x12:
        sub_9127A0(&v32, (int **)&v31, (int)a3, (int)&v35, a4, (int)a5);
        v10 = v32 + 1;
        continue;
      case 0x13:
        sub_9124B0(&v32, (int **)&v31, (int)a3, (int)&v35, a4, (int)a5);
        v10 = v32 + 1;
        continue;
      case 0x14:
        sub_912690(&v32, (int **)&v31, (int)a3, (int)&v35, a4, (int)a5);
        v10 = v32 + 1;
        continue;
      case 0x15:
        sub_912710(&v32, (int **)&v31, (int)a3, &v35, a4, a5);
        v10 = v32 + 1;
        continue;
      case 0x16:
        sub_8F0F20(v31->m128_i32[0], v31->m128_i32[1], (int)a5);
        ++v31;
        v10 = v32 + 1;
        continue;
      case 0x17:
        sub_8F0F50((int)a5);
        v10 = v32 + 1;
        continue;
      case 0x18:
        v26 = *(_DWORD *)LODWORD(v33);
        v27 = **(void (__usercall ****)(int@<ecx>, __m128 *, int, double@<st0>))LODWORD(v33);
        v32 = v10 + 1;
        (*v27)(v26, &v35, v10[1], result);
        goto LABEL_28;
      case 0x19:
        v28 = *(_DWORD *)LODWORD(v33);
        v29 = **(_DWORD **)LODWORD(v33);
        v32 = v10 + 1;
        (*(void (__thiscall **)(int, __m128 *, int))(v29 + 4))(v28, &v35, v10[1]);
        v33 = result;
        sub_8F0EF0(v33, a4, a5, 1);
LABEL_28:
        def_912B8B((int)a3, a4, (int)a5, a6, a7, a8);
        return result;
      default:
        JUMPOUT(0x913021);
    }
  }
}
