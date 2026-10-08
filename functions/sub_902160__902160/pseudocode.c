int __cdecl sub_902160(int *a1, __m128 **a2, int a3, int *a4)
{
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  float v10; // ecx
  int v11; // eax
  double v12; // st7
  __m128 *v13; // edx
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // ecx
  unsigned __int64 v17; // rax
  int v18; // edx
  int v19; // eax
  _DWORD *v20; // ecx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // edi
  _DWORD *v24; // ecx
  int (__stdcall **v26)(char); // [esp+14h] [ebp-ACh] BYREF
  char v27; // [esp+18h] [ebp-A8h]
  __m128 *v28[4]; // [esp+1Ch] [ebp-A4h] BYREF
  int (__stdcall **v29)(char); // [esp+2Ch] [ebp-94h] BYREF
  __int16 v30; // [esp+32h] [ebp-8Eh]
  int v31; // [esp+34h] [ebp-8Ch]
  float v32; // [esp+38h] [ebp-88h]
  int v33; // [esp+3Ch] [ebp-84h]
  int v34; // [esp+40h] [ebp-80h]
  _DWORD v35[3]; // [esp+44h] [ebp-7Ch] BYREF
  int v36[4]; // [esp+50h] [ebp-70h] BYREF
  __int128 v37; // [esp+60h] [ebp-60h]
  __int128 v38; // [esp+70h] [ebp-50h]
  int v39; // [esp+80h] [ebp-40h]
  _OWORD v40[2]; // [esp+90h] [ebp-30h] BYREF
  int *v41; // [esp+B0h] [ebp-10h]
  __m128 **v42; // [esp+B4h] [ebp-Ch]

  v4 = MEMORY[0xBA9DE4]; /*0x90216d*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x902175*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90217c*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x90218b*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90218d*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x90218f*/
    *v8 = "LtCvxList"; /*0x902195*/
    v8[3] = "checkHull"; /*0x90219b*/
    v9 = __rdtsc(); /*0x9021a2*/
    v8[1] = v9; /*0x9021ac*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4; /*0x9021b2*/
  }
  v10 = flt_B2FFE4; /*0x9021be*/
  v28[2] = a2[2]; /*0x9021c4*/
  v11 = (int)*a2; /*0x9021c8*/
  v32 = v10; /*0x9021ca*/
  v28[3] = (__m128 *)a2; /*0x9021ce*/
  v30 = 1; /*0x9021d2*/
  v31 = 0; /*0x9021d9*/
  v29 = &off_A9BB94; /*0x9021e1*/
  v12 = *(float *)(**(_DWORD **)(v11 + 0x10) + 0xC); /*0x9021ee*/
  v13 = a2[1]; /*0x9021f1*/
  v33 = *(_DWORD *)(v11 + 0x10); /*0x9021f4*/
  v14 = *(_DWORD *)(v11 + 0x14); /*0x9021f8*/
  v32 = v12; /*0x9021fb*/
  v34 = v14; /*0x9021ff*/
  v28[0] = (__m128 *)&v29; /*0x90220f*/
  v28[1] = v13; /*0x902216*/
  v26 = &off_A9BB84; /*0x902221*/
  v27 = 0; /*0x902229*/
  sub_93F800((int)a1, v28, a3, (int)&v26); /*0x90222e*/
  if ( v27 ) /*0x90223c*/
  {
    v15 = ThreadLocalStoragePointer[v4]; /*0x90223e*/
    if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) ) /*0x90224d*/
    {
      v16 = *(_DWORD **)(v15 + 0x1A4); /*0x90224f*/
      *v16 = "Stchildren"; /*0x902255*/
      v17 = __rdtsc(); /*0x90225b*/
      HIDWORD(v17) = v17; /*0x902261*/
      LODWORD(v17) = ThreadLocalStoragePointer[v4]; /*0x902265*/
      v16[1] = HIDWORD(v17); /*0x902268*/
      *(_DWORD *)(v17 + 0x1A4) = v16 + 3; /*0x90226e*/
    }
    v35[2] = a4; /*0x90227f*/
    v35[1] = 0x7F7FFFFF; /*0x902289*/
    v35[0] = &off_A9B4E0; /*0x902291*/
    sub_9050F0((int *)a2, a1, a3, (int)v35); /*0x902299*/
  }
  else
  {
    v36[0] = (int)&hkClosestCdPointCollector::`vftable'; /*0x9022b5*/
    v39 = 0; /*0x9022bd*/
    HIDWORD(v38) = 0x7F7FFFFF; /*0x9022c8*/
    v36[1] = 0x7F7FFFFF; /*0x9022d3*/
    sub_93F250((int)a1, v28, a3, v36); /*0x9022db*/
    if ( v39 ) /*0x9022ec*/
    {
      if ( *((float *)&v38 + 3) <= (double)(*a2)[1].m128_f32[3] ) /*0x902300*/
      {
        v19 = ThreadLocalStoragePointer[v4]; /*0x90233f*/
        if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) ) /*0x90234e*/
        {
          v20 = *(_DWORD **)(v19 + 0x1A4); /*0x902350*/
          *v20 = "Stchildren"; /*0x902356*/
          v21 = __rdtsc(); /*0x90235c*/
          HIDWORD(v21) = v21; /*0x902362*/
          LODWORD(v21) = ThreadLocalStoragePointer[v4]; /*0x902366*/
          v20[1] = HIDWORD(v21); /*0x902369*/
          *(_DWORD *)(v21 + 0x1A4) = v20 + 3; /*0x90236f*/
        }
        sub_901E00(a1, (int *)a2, a3, (int)a4); /*0x902382*/
      }
      else
      {
        v18 = *a4; /*0x90230d*/
        v41 = a1; /*0x90230f*/
        v40[0] = v37; /*0x90231d*/
        v42 = a2; /*0x90232b*/
        v40[1] = v38; /*0x902332*/
        (*(void (__thiscall **)(int *, _OWORD *))(v18 + 4))(a4, v40); /*0x90233a*/
      }
    }
  }
  LODWORD(v22) = ThreadLocalStoragePointer[v4]; /*0x90238a*/
  if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) ) /*0x902399*/
  {
    v23 = ThreadLocalStoragePointer[v4]; /*0x90239b*/
    v24 = *(_DWORD **)(v22 + 0x1A4); /*0x90239d*/
    *v24 = "lt"; /*0x9023a3*/
    v22 = __rdtsc(); /*0x9023a9*/
    v24[1] = v22; /*0x9023b3*/
    *(_DWORD *)(v23 + 0x1A4) = v24 + 3; /*0x9023b9*/
  }
  return v22; /*0x9023bf*/
}
