_BYTE *__fastcall sub_9144C0(int a1, _DWORD a2, _BYTE *a3, __m128 *a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v6; // edi
  int v7; // eax
  bool v8; // cf
  int v9; // ecx
  _DWORD *v10; // ebx
  unsigned __int64 v11; // rax
  int v12; // edx
  int v13; // eax
  int v14; // esi
  _DWORD *v15; // ecx
  unsigned __int64 v16; // rax
  _BYTE *result; // eax
  char v18; // [esp+17h] [ebp-79h] BYREF
  int v19; // [esp+18h] [ebp-78h]
  int v20; // [esp+1Ch] [ebp-74h]
  int v21; // [esp+60h] [ebp-30h]
  int v22; // [esp+64h] [ebp-2Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = TlsIndex;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  v8 = *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8);
  v20 = a1;
  if ( v8 )
  {
    v9 = v7;
    v10 = *(_DWORD **)(v7 + 0x1A4);
    *v10 = "TtrcMopp";
    v11 = __rdtsc();
    v19 = v11;
    v10[1] = v11;
    *(_DWORD *)(v9 + 0x1A4) = v10 + 3;
    a1 = v20;
  }
  v12 = *(_DWORD *)(a1 + 0x10);
  v21 = 0;
  v22 = 0;
  sub_945880(&v18, *(_DWORD *)(a1 + 0xC), v12, a4, a5);
  v13 = ThreadLocalStoragePointer[v6];
  if ( *(_DWORD *)(v13 + 0x1A4) >= *(_DWORD *)(v13 + 0x1A8) )
  {
    result = a3;
  }
  else
  {
    v14 = ThreadLocalStoragePointer[v6];
    v15 = *(_DWORD **)(v13 + 0x1A4);
    *v15 = "Et";
    v16 = __rdtsc();
    v20 = v16;
    v15[1] = v16;
    result = a3;
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3;
  }
  *a3 = v18;
  return result;
}
