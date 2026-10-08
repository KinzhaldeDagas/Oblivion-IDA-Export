_BYTE *__userpurge sub_9144C0@<eax>(int a1@<ecx>, int a2@<ebx>, _BYTE *a3, __m128 *a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v7; // edi
  int v8; // eax
  bool v9; // cf
  int v10; // ecx
  _DWORD *v11; // ebx
  unsigned __int64 v12; // rax
  __int32 v13; // edx
  int v14; // eax
  int v15; // esi
  _DWORD *v16; // ecx
  unsigned __int64 v17; // rax
  _BYTE *result; // eax
  char v19; // [esp+17h] [ebp-79h] BYREF
  int v20; // [esp+18h] [ebp-78h]
  int v21; // [esp+1Ch] [ebp-74h]
  __m128 v22[4]; // [esp+20h] [ebp-70h] BYREF
  int v23; // [esp+60h] [ebp-30h]
  int v24; // [esp+64h] [ebp-2Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9144ce*/
  v7 = MEMORY[0xBA9DE4]; /*0x9144d6*/
  v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9144dc*/
  v9 = *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8); /*0x9144e5*/
  v21 = a1; /*0x9144eb*/
  if ( v9 ) /*0x9144ef*/
  {
    v10 = v8; /*0x9144f1*/
    v11 = *(_DWORD **)(v8 + 0x1A4); /*0x9144f3*/
    *v11 = "TtrcMopp"; /*0x9144f9*/
    v12 = __rdtsc(); /*0x9144ff*/
    v20 = v12; /*0x914501*/
    v11[1] = v12; /*0x914509*/
    a2 = (int)(v11 + 3); /*0x91450c*/
    *(_DWORD *)(v10 + 0x1A4) = a2; /*0x91450f*/
    a1 = v21; /*0x914515*/
  }
  v13 = *(_DWORD *)(a1 + 0x10); /*0x91451f*/
  v23 = 0; /*0x914522*/
  v24 = 0; /*0x914526*/
  sub_945880(v22, a2, &v19, *(_DWORD *)(a1 + 0xC), v13, a4, a5); /*0x91453c*/
  v14 = ThreadLocalStoragePointer[v7]; /*0x914541*/
  if ( *(_DWORD *)(v14 + 0x1A4) >= *(_DWORD *)(v14 + 0x1A8) ) /*0x914550*/
  {
    result = a3; /*0x914588*/
  }
  else
  {
    v15 = ThreadLocalStoragePointer[v7]; /*0x914552*/
    v16 = *(_DWORD **)(v14 + 0x1A4); /*0x914554*/
    *v16 = "Et"; /*0x91455a*/
    v17 = __rdtsc(); /*0x914560*/
    v21 = v17; /*0x914562*/
    v16[1] = v17; /*0x91456a*/
    result = a3; /*0x91456d*/
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3; /*0x914573*/
  }
  *a3 = v19; /*0x91457d*/
  return result; /*0x91457f*/
}
