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
  __m128 v16[4]; // [esp+20h] [ebp-70h] BYREF
  int v17; // [esp+60h] [ebp-30h]
  int v18; // [esp+64h] [ebp-2Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9145ae*/
  v6 = MEMORY[0xBA9DE4]; /*0x9145b6*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9145bc*/
  v15 = a1; /*0x9145cb*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x9145cf*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9145d1*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x9145d3*/
    *v9 = "TtrcMopp"; /*0x9145d9*/
    v10 = __rdtsc(); /*0x9145df*/
    v9[1] = v10; /*0x9145e9*/
    a2 = v9 + 3; /*0x9145ec*/
    *(_DWORD *)(v8 + 0x1A4) = a2; /*0x9145ef*/
    a1 = v15; /*0x9145f5*/
  }
  v17 = 0; /*0x914602*/
  v18 = 0; /*0x914606*/
  sub_945960(v16, (int)a2, *(_DWORD *)(a1 + 0xC), *(_DWORD *)(a1 + 0x10), a3, a4, a5); /*0x91461b*/
  LODWORD(v11) = ThreadLocalStoragePointer[v6]; /*0x914620*/
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) ) /*0x91462f*/
  {
    v12 = ThreadLocalStoragePointer[v6]; /*0x914631*/
    v13 = *(_DWORD **)(v11 + 0x1A4); /*0x914633*/
    *v13 = "Et"; /*0x914639*/
    v11 = __rdtsc(); /*0x91463f*/
    v13[1] = v11; /*0x914649*/
    *(_DWORD *)(v12 + 0x1A4) = v13 + 3; /*0x91464f*/
  }
  return v11; /*0x914655*/
}
