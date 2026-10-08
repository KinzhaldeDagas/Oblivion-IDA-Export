void __thiscall sub_9571B0(
        int **this,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        _DWORD *a6,
        int **a7,
        int **a8,
        int **a9,
        int **a10)
{
  int *v11; // edi
  int *v12; // eax
  int *v13; // ecx
  int *v14; // edx
  int v15; // esi
  int v16; // edi
  int v17; // ebx
  int *v18; // edx
  int v19; // eax
  __m128 *v20; // edi
  int *v21; // ecx
  int v22; // edx
  int v23; // ecx
  int *v24; // edi
  int *v25; // esi
  int *v26; // eax
  int *v27; // ebx
  int v28; // edi
  __int32 v29; // ebx
  int *v30; // eax
  int *v31; // ecx
  int v32; // eax
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
  int v43; // [esp+4Ch] [ebp-4h]

  switch ( a2 ) /*0x9571ca*/
  {
    case 0: /*0x9571ca*/
      *a9 += 0xFFFFFFFC; /*0x9572e3*/
      *a10 += 0xFFFFFFFC; /*0x9572e5*/
      v24 = *a8 + 0xFFFFFFFC; /*0x9572ea*/
      *a8 = v24; /*0x9572ed*/
      v25 = *a9; /*0x9572ef*/
      v26 = v24; /*0x9572f1*/
      v27 = *a7; /*0x9572f6*/
      v41 = **a7; /*0x9572fa*/
      v42 = v27[1]; /*0x957301*/
      v28 = v27[2]; /*0x957305*/
      v43 = v27[3]; /*0x95730b*/
      *(unsigned __int64 *)((char *)v39.m128_u64 + 4) = *(_QWORD *)v26; /*0x957311*/
      v29 = v26[2]; /*0x95731c*/
      v40 = v26[3]; /*0x957322*/
      v30 = *a10; /*0x957326*/
      v39.m128_i32[3] = v29; /*0x957328*/
      *v25 = *v30; /*0x95732e*/
      v25[1] = v30[1]; /*0x957333*/
      v25[2] = v30[2]; /*0x957339*/
      v25[3] = v30[3]; /*0x95733f*/
      v31 = *a10; /*0x957342*/
      *v31 = v41; /*0x957348*/
      v31[1] = v42; /*0x95734e*/
      v32 = v43; /*0x957351*/
      v31[2] = v28; /*0x957355*/
      v31[3] = v32; /*0x957358*/
      v33 = *a7; /*0x95735e*/
      if ( *a7 == *a8 ) /*0x957362*/
        goto LABEL_8; /*0x957362*/
      v34 = v39.m128_i32[2]; /*0x957368*/
      *v33 = v39.m128_i32[1]; /*0x95736c*/
      v35 = v39.m128_i32[3]; /*0x95736e*/
      v33[1] = v34; /*0x957372*/
      v36 = v40; /*0x957375*/
      v33[2] = v35; /*0x957379*/
      v33[3] = v36; /*0x95737c*/
      def_9571CA(a2, a3, a4, (int)a5, (int)a6, (int)a7, (int)a8, (int)a9, (int)a10); /*0x95737d*/
      break; /*0x95737d*/
    case 1: /*0x9571ca*/
      *a7 += 4; /*0x9571d4*/
      return; /*0x9571dd*/
    case 2: /*0x9571ca*/
      *a9 += 0xFFFFFFFC; /*0x9571eb*/
      v11 = *a8 + 0xFFFFFFFC; /*0x9571ef*/
      *a8 = v11; /*0x9571f2*/
      v12 = *a7; /*0x9571f7*/
      v13 = *a9; /*0x9571f9*/
      v14 = v11; /*0x9571fd*/
      if ( *a7 == *a9 ) /*0x9571ff*/
        goto LABEL_8; /*0x9571ff*/
      v15 = *v11; /*0x957205*/
      v16 = v11[1]; /*0x957207*/
      v17 = v14[2]; /*0x95720a*/
      v43 = v14[3]; /*0x957210*/
      *v13 = *v12; /*0x957216*/
      v13[1] = v12[1]; /*0x95721b*/
      v13[2] = v12[2]; /*0x957221*/
      v13[3] = v12[3]; /*0x957227*/
      v18 = *a7; /*0x95722d*/
      v19 = v43; /*0x95722f*/
      *v18 = v15; /*0x957233*/
      v18[1] = v16; /*0x957235*/
      v18[2] = v17; /*0x957238*/
      v18[3] = v19; /*0x95723b*/
      break; /*0x957244*/
    case 3: /*0x9571ca*/
      --*a5; /*0x95724a*/
      ++*a6; /*0x957255*/
      *a9 += 0xFFFFFFFC; /*0x957262*/
      v20 = *(__m128 **)(a3 + 0xB8); /*0x957272*/
      v21 = *(this + 0xA); /*0x957278*/
      v22 = *v21; /*0x95727b*/
      v39.m128_f32[0] = (*(float *)(a3 + 0xC0) + *(float *)(a3 + 0xBC)) * kHeadBodyNormalMatchRadius; /*0x957288*/
      (*(void (__thiscall **)(int *, _DWORD, __m128 *, __int32))(v22 + 0x18))(v21, *a7, v20, v39.m128_i32[0]); /*0x957295*/
      v23 = (int)*(this + 0xA); /*0x9572a6*/
      v38 = *a7; /*0x9572b0*/
      v37 = -*(float *)&a4; /*0x9572b3*/
      v39 = _mm_xor_ps(*v20, (__m128)xmmword_A965C0); /*0x9572be*/
      (*(void (__thiscall **)(int, int *, __m128 *, _DWORD, int, int *))(*(_DWORD *)v23 + 0x18))( /*0x9572c6*/
        v23,
        v38,
        &v39,
        LODWORD(v37),
        a4,
        v38);
      *a7 += 4; /*0x9572c9*/
      return; /*0x9572d2*/
    default:
LABEL_8:
      JUMPOUT(0x95737F); /*0x95737f*/
  }
}
