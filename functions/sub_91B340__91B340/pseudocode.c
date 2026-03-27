int __thiscall sub_91B340(_DWORD **this, int a2, int a3)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  unsigned __int64 v4; // rax
  _DWORD **v5; // ebx
  int v6; // esi
  _DWORD *v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  int v11; // edx
  _DWORD *v12; // esi
  int v13; // eax
  __m128 *v14; // ecx
  int v15; // edi
  int v16; // esi
  _DWORD *v17; // ecx
  int v19; // [esp+10h] [ebp-50h]
  float v20; // [esp+14h] [ebp-4Ch]
  int v21; // [esp+18h] [ebp-48h]
  _BYTE v23[64]; // [esp+20h] [ebp-40h] BYREF

  HIDWORD(v4) = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v4) = ThreadLocalStoragePointer[TlsIndex];
  v5 = this;
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v4 + 0x1A4);
    *v7 = "TthkConvexRadiusViewer";
    v4 = __rdtsc();
    v7[1] = v4;
    HIDWORD(v4) = TlsIndex;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v8 = a2;
  v20 = *(float *)(a2 + 0x10);
  v9 = 0;
  v21 = 0;
  if ( *(int *)(a2 + 0x3C) > 0 )
  {
    do
    {
      v10 = *(_DWORD *)(*(_DWORD *)(v8 + 0x38) + 4 * v9);
      v11 = *(_DWORD *)(v10 + 0x38);
      v12 = (_DWORD *)(v10 + 0x34);
      v19 = 0;
      if ( v11 > 0 )
      {
        do
        {
          v13 = *(_DWORD *)(*v12 + 4 * v19);
          v14 = *(__m128 **)(v13 + 0x50);
          v15 = v13 + 0x17;
          if ( v20 == v14[5].m128_f32[3] )
          {
            (*(void (__thiscall **)(_DWORD *, __m128 *, int, int))(*v5[0xFFFFFFFB] + 0xC))(
              v5[0xFFFFFFFB],
              v14 + 1,
              v15,
              dword_BA842C);
            v5 = this;
          }
          else
          {
            sub_89DB70(v14, v20, (int)v23);
            (*(void (__thiscall **)(_DWORD *, _BYTE *, int, int))(*v5[0xFFFFFFFB] + 0xC))(
              v5[0xFFFFFFFB],
              v23,
              v15,
              dword_BA842C);
          }
          ++v19;
        }
        while ( v19 < v12[1] );
        v9 = v21;
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
        v8 = a2;
      }
      v21 = ++v9;
    }
    while ( v9 < *(_DWORD *)(v8 + 0x3C) );
    HIDWORD(v4) = TlsIndex;
  }
  LODWORD(v4) = ThreadLocalStoragePointer[HIDWORD(v4)];
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) )
  {
    v16 = ThreadLocalStoragePointer[HIDWORD(v4)];
    v17 = *(_DWORD **)(v4 + 0x1A4);
    *v17 = "Et";
    v4 = __rdtsc();
    v17[1] = v4;
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3;
  }
  return v4;
}
