int __cdecl sub_902160(int *a1, __m128 **a2, int a3, int *a4)
{
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  float v10; // ecx
  __m128 *v11; // eax
  double v12; // st7
  __m128 *v13; // edx
  __int32 v14; // eax
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
  __int32 v33; // [esp+3Ch] [ebp-84h]
  __int32 v34; // [esp+40h] [ebp-80h]
  _DWORD v35[3]; // [esp+44h] [ebp-7Ch] BYREF
  int v36[4]; // [esp+50h] [ebp-70h] BYREF
  __int128 v37; // [esp+60h] [ebp-60h]
  __int128 v38; // [esp+70h] [ebp-50h]
  int v39; // [esp+80h] [ebp-40h]
  _OWORD v40[2]; // [esp+90h] [ebp-30h] BYREF
  int *v41; // [esp+B0h] [ebp-10h]
  __m128 **v42; // [esp+B4h] [ebp-Ch]

  v4 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "LtCvxList";
    v8[3] = "checkHull";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4;
  }
  v10 = flt_B2FFE4;
  v28[2] = a2[2];
  v11 = *a2;
  v32 = v10;
  v28[3] = (__m128 *)a2;
  v30 = 1;
  v31 = 0;
  v29 = &off_A9BB94;
  v12 = *(float *)(*(_DWORD *)v11[1].m128_i32[0] + 0xC);
  v13 = a2[1];
  v33 = v11[1].m128_i32[0];
  v14 = v11[1].m128_i32[1];
  v32 = v12;
  v34 = v14;
  v28[0] = (__m128 *)&v29;
  v28[1] = v13;
  v26 = &off_A9BB84;
  v27 = 0;
  sub_93F800((int)a1, v28, a3, (int)&v26);
  if ( v27 )
  {
    v15 = ThreadLocalStoragePointer[v4];
    if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) )
    {
      v16 = *(_DWORD **)(v15 + 0x1A4);
      *v16 = "Stchildren";
      v17 = __rdtsc();
      HIDWORD(v17) = v17;
      LODWORD(v17) = ThreadLocalStoragePointer[v4];
      v16[1] = HIDWORD(v17);
      *(_DWORD *)(v17 + 0x1A4) = v16 + 3;
    }
    v35[2] = a4;
    v35[1] = 0x7F7FFFFF;
    v35[0] = &off_A9B4E0;
    sub_9050F0(a2, a1, a3, (int)v35);
  }
  else
  {
    v36[0] = (int)&hkClosestCdPointCollector::`vftable';
    v39 = 0;
    HIDWORD(v38) = 0x7F7FFFFF;
    v36[1] = 0x7F7FFFFF;
    sub_93F250((int)a1, (int)v28, a3, v36);
    if ( v39 )
    {
      if ( *((float *)&v38 + 3) <= (double)(*a2)[1].m128_f32[3] )
      {
        v19 = ThreadLocalStoragePointer[v4];
        if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) )
        {
          v20 = *(_DWORD **)(v19 + 0x1A4);
          *v20 = "Stchildren";
          v21 = __rdtsc();
          HIDWORD(v21) = v21;
          LODWORD(v21) = ThreadLocalStoragePointer[v4];
          v20[1] = HIDWORD(v21);
          *(_DWORD *)(v21 + 0x1A4) = v20 + 3;
        }
        sub_901E00(a1, a2, a3, (int)a4);
      }
      else
      {
        v18 = *a4;
        v41 = a1;
        v40[0] = v37;
        v42 = a2;
        v40[1] = v38;
        (*(void (__thiscall **)(int *, _OWORD *))(v18 + 4))(a4, v40);
      }
    }
  }
  LODWORD(v22) = ThreadLocalStoragePointer[v4];
  if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) )
  {
    v23 = ThreadLocalStoragePointer[v4];
    v24 = *(_DWORD **)(v22 + 0x1A4);
    *v24 = "lt";
    v22 = __rdtsc();
    v24[1] = v22;
    *(_DWORD *)(v23 + 0x1A4) = v24 + 3;
  }
  return v22;
}
