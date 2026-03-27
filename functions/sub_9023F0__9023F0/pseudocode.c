int __cdecl sub_9023F0(int *a1, __m128 **a2, int a3, int a4)
{
  int v4; // ebp
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
  int v16; // ebx
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // edi
  _DWORD *v21; // ecx
  int (__stdcall **v23)(char); // [esp+Ch] [ebp-3Ch] BYREF
  char v24; // [esp+10h] [ebp-38h]
  int (__stdcall **v25)(char); // [esp+14h] [ebp-34h] BYREF
  char v26; // [esp+18h] [ebp-30h]
  int v27; // [esp+1Ch] [ebp-2Ch]
  __m128 *v28[4]; // [esp+20h] [ebp-28h] BYREF
  int (__stdcall **v29)(char); // [esp+30h] [ebp-18h] BYREF
  __int16 v30; // [esp+36h] [ebp-12h]
  int v31; // [esp+38h] [ebp-10h]
  float v32; // [esp+3Ch] [ebp-Ch]
  __int32 v33; // [esp+40h] [ebp-8h]
  __int32 v34; // [esp+44h] [ebp-4h]

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
    v23 = (int (__stdcall **)(char))v9;
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
  v23 = &off_A9BB84;
  v24 = 0;
  sub_93F800((int)a1, v28, a3, (int)&v23);
  if ( v24 )
  {
    v15 = ThreadLocalStoragePointer[v4];
    if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) )
    {
      v16 = ThreadLocalStoragePointer[v4];
      v17 = *(_DWORD **)(v15 + 0x1A4);
      *v17 = "Stchildren";
      v18 = __rdtsc();
      v17[1] = v18;
      *(_DWORD *)(v16 + 0x1A4) = v17 + 3;
    }
    v27 = a4;
    v26 = 0;
    v25 = &off_A9B4F0;
    sub_905630(a2, a1, a3, (int)&v25);
  }
  LODWORD(v19) = ThreadLocalStoragePointer[v4];
  if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) )
  {
    v20 = ThreadLocalStoragePointer[v4];
    v21 = *(_DWORD **)(v19 + 0x1A4);
    *v21 = "lt";
    v19 = __rdtsc();
    v21[1] = v19;
    *(_DWORD *)(v20 + 0x1A4) = v21 + 3;
  }
  return v19;
}
