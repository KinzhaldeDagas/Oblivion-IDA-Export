_BYTE *__thiscall sub_92A780(__m128 *this, _BYTE *a2, __m128 *a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  __int32 v11; // ecx
  int v12; // eax
  int v13; // ebx
  _DWORD *v14; // ecx
  unsigned __int64 v15; // rax
  _BYTE *result; // eax
  char v17; // [esp+17h] [ebp-39h] BYREF
  int v18; // [esp+18h] [ebp-38h]
  __m128 *v19; // [esp+1Ch] [ebp-34h]
  _OWORD v20[3]; // [esp+20h] [ebp-30h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v19 = this;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtrcConvTransl";
    v8 = __rdtsc();
    v18 = v8;
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = *a3;
  qmemcpy(v20, a3, sizeof(v20));
  v10 = v19[2];
  v11 = v19[1].m128_i32[0];
  v20[0] = _mm_sub_ps(v9, v10);
  v20[1] = _mm_sub_ps(a3[1], v10);
  (*(void (__thiscall **)(__int32, char *, _OWORD *, int))(*(_DWORD *)v11 + 0x14))(v11, &v17, v20, a4);
  v12 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v12 + 0x1A4) >= *(_DWORD *)(v12 + 0x1A8) )
  {
    result = a2;
  }
  else
  {
    v13 = ThreadLocalStoragePointer[TlsIndex];
    v14 = *(_DWORD **)(v12 + 0x1A4);
    *v14 = "Et";
    v15 = __rdtsc();
    v19 = (__m128 *)v15;
    v14[1] = v15;
    result = a2;
    *(_DWORD *)(v13 + 0x1A4) = v14 + 3;
  }
  *a2 = v17;
  return result;
}
