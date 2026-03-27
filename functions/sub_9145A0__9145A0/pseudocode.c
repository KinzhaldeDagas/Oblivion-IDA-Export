int __userpurge sub_9145A0@<eax>(int a1@<ecx>, _DWORD *a2@<ebx>, __m128 *a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // ebx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // esi
  _DWORD *v13; // ecx
  int v15; // [esp+1Ch] [ebp-74h]
  _BYTE v16[64]; // [esp+20h] [ebp-70h] BYREF
  int v17; // [esp+60h] [ebp-30h]
  int v18; // [esp+64h] [ebp-2Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = TlsIndex;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  v15 = a1;
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "TtrcMopp";
    v10 = __rdtsc();
    v9[1] = v10;
    a2 = v9 + 3;
    *(_DWORD *)(v8 + 0x1A4) = a2;
    a1 = v15;
  }
  v17 = 0;
  v18 = 0;
  sub_945960((int)v16, (int)a2, *(_DWORD *)(a1 + 0xC), *(_DWORD *)(a1 + 0x10), a3, a4, a5);
  LODWORD(v11) = ThreadLocalStoragePointer[v6];
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) )
  {
    v12 = ThreadLocalStoragePointer[v6];
    v13 = *(_DWORD **)(v11 + 0x1A4);
    *v13 = "Et";
    v11 = __rdtsc();
    v13[1] = v11;
    *(_DWORD *)(v12 + 0x1A4) = v13 + 3;
  }
  return v11;
}
