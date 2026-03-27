int __thiscall sub_915880(void *this, int a2, int a3, __m128 *a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  __m128 v13; // xmm0
  _DWORD *v14; // ecx
  unsigned __int64 v15; // rax
  int v16; // esi
  _DWORD *v17; // ecx
  __m128 v19[2]; // [esp+30h] [ebp-230h] BYREF
  _BYTE v20[524]; // [esp+50h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TthkShapeCollection::getAabb";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  *a4 = 0;
  a4[1] = 0;
  v10 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x20))(this);
  if ( v10 != 0xFFFFFFFF )
  {
    v11 = (*(int (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 0x28))(this, v10, v20);
    (*(void (__thiscall **)(int, int, int, __m128 *))(*(_DWORD *)v11 + 0xC))(v11, a2, a3, a4);
    do
    {
      v12 = (*(int (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 0x28))(this, v10, v20);
      (*(void (__thiscall **)(int, int, int, __m128 *))(*(_DWORD *)v12 + 0xC))(v12, a2, a3, v19);
      v13 = v19[1];
      *a4 = _mm_min_ps(*a4, v19[0]);
      a4[1] = _mm_max_ps(a4[1], v13);
      v10 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x24))(this, v10);
    }
    while ( v10 != 0xFFFFFFFF );
  }
  v14 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v15) = v14[TlsIndex];
  if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) )
  {
    v16 = v14[TlsIndex];
    v17 = *(_DWORD **)(v15 + 0x1A4);
    *v17 = "Et";
    v15 = __rdtsc();
    v17[1] = v15;
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3;
  }
  return v15;
}
