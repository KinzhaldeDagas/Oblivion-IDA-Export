int **__thiscall sub_9571B0(
        int **this,
        int a2,
        int a3,
        float a4,
        _DWORD *a5,
        _DWORD *a6,
        int **a7,
        int **a8,
        int **a9,
        int **a10)
{
  int **result; // eax
  int *v12; // edi
  int *v13; // eax
  int *v14; // ecx
  int *v15; // edx
  int v16; // esi
  int v17; // edi
  int v18; // ebx
  int *v19; // edx
  __m128 *v20; // edi
  int *v21; // ecx
  int v22; // edx
  int v23; // ecx
  int v24; // edi
  int *v25; // esi
  int v26; // eax
  int *v27; // ebx
  int v28; // edi
  __int32 v29; // ebx
  int *v30; // eax
  int *v31; // ecx
  int **v32; // eax
  int *v33; // ecx
  __int32 v34; // eax
  __int32 v35; // edx
  int v36; // eax
  float v37; // [esp+0h] [ebp-50h]
  int *v38; // [esp+8h] [ebp-48h]
  __m128 v39; // [esp+2Ch] [ebp-24h] BYREF
  int v40; // [esp+3Ch] [ebp-14h]
  int v41; // [esp+40h] [ebp-10h]
  int v42; // [esp+44h] [ebp-Ch]
  int **v43; // [esp+4Ch] [ebp-4h]

  switch ( a2 )
  {
    case 0:
      *a9 += 0xFFFFFFFC;
      *a10 += 0xFFFFFFFC;
      v24 = (int)(*a8 + 0xFFFFFFFC);
      *a8 = (int *)v24;
      v25 = *a9;
      v26 = v24;
      v27 = *a7;
      v41 = **a7;
      v42 = v27[1];
      v28 = v27[2];
      v43 = (int **)v27[3];
      *(unsigned __int64 *)((char *)v39.m128_u64 + 4) = *(_QWORD *)v26;
      v29 = *(_DWORD *)(v26 + 8);
      v40 = *(_DWORD *)(v26 + 0xC);
      v30 = *a10;
      v39.m128_i32[3] = v29;
      *v25 = *v30;
      v25[1] = v30[1];
      v25[2] = v30[2];
      v25[3] = v30[3];
      v31 = *a10;
      *v31 = v41;
      v31[1] = v42;
      v32 = v43;
      v31[2] = v28;
      v31[3] = (int)v32;
      v33 = *a7;
      if ( *a7 == *a8 )
        goto LABEL_8;
      v34 = v39.m128_i32[2];
      *v33 = v39.m128_i32[1];
      v35 = v39.m128_i32[3];
      v33[1] = v34;
      v36 = v40;
      v33[2] = v35;
      v33[3] = v36;
      result = (int **)def_9571CA(a2, a3, LODWORD(a4), a5, a6, a7, a8, a9, a10);
      break;
    case 1:
      *a7 += 4;
      return a7;
    case 2:
      *a9 += 0xFFFFFFFC;
      v12 = *a8 + 0xFFFFFFFC;
      *a8 = v12;
      v13 = *a7;
      v14 = *a9;
      v15 = v12;
      if ( *a7 == *a9 )
        goto LABEL_8;
      v16 = *v12;
      v17 = v12[1];
      v18 = v15[2];
      v43 = (int **)v15[3];
      *v14 = *v13;
      v14[1] = v13[1];
      v14[2] = v13[2];
      v14[3] = v13[3];
      v19 = *a7;
      result = v43;
      *v19 = v16;
      v19[1] = v17;
      v19[2] = v18;
      v19[3] = (int)result;
      break;
    case 3:
      --*a5;
      ++*a6;
      *a9 += 0xFFFFFFFC;
      v20 = *(__m128 **)(a3 + 0xB8);
      v21 = *(this + 0xA);
      v22 = *v21;
      v39.m128_f32[0] = (*(float *)(a3 + 0xC0) + *(float *)(a3 + 0xBC)) * flt_A3D65C;
      (*(void (__thiscall **)(int *, _DWORD, __m128 *, __int32))(v22 + 0x18))(v21, *a7, v20, v39.m128_i32[0]);
      v23 = (int)*(this + 0xA);
      v38 = *a7;
      v37 = -a4;
      v39 = _mm_xor_ps(*v20, (__m128)xmmword_A965C0);
      result = (int **)(*(int (__thiscall **)(int, int *, __m128 *, _DWORD, _DWORD, int *))(*(_DWORD *)v23 + 0x18))(
                         v23,
                         v38,
                         &v39,
                         LODWORD(v37),
                         LODWORD(a4),
                         v38);
      *a7 += 4;
      return result;
    default:
LABEL_8:
      JUMPOUT(0x95737F);
  }
  return result;
}
