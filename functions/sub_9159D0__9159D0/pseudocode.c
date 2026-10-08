int __userpurge sub_9159D0@<eax>(int a1@<ecx>, double a2@<st0>, int a3)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int i; // edi
  int v10; // eax
  double v11; // st7
  unsigned __int64 v12; // rax
  int v13; // esi
  _DWORD *v14; // ecx
  float v16; // [esp+18h] [ebp-218h]
  _BYTE v17[524]; // [esp+20h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9159e2*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9159f9*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x915a09*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x915a0b*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x915a0d*/
    *v7 = "TthkShapeCollection::getMaximumProjection"; /*0x915a13*/
    v8 = __rdtsc(); /*0x915a19*/
    v7[1] = v8; /*0x915a23*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x915a29*/
  }
  v16 = -3.4028235e38; /*0x915a33*/
  for ( i = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x20))(a1, a2); /*0x915a43*/
        i != 0xFFFFFFFF;
        i = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x24))(a1, i) )
  {
    v10 = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)a1 + 0x28))(a1, i, v17); /*0x915a4f*/
    v11 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v10 + 0x10))(v10, a3); /*0x915a5a*/
    if ( v16 <= v11 ) /*0x915a68*/
      v16 = v11; /*0x915a6a*/
  }
  LODWORD(v12) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x915a87*/
  if ( *(_DWORD *)(v12 + 0x1A4) < *(_DWORD *)(v12 + 0x1A8) ) /*0x915a96*/
  {
    v13 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x915a98*/
    v14 = *(_DWORD **)(v12 + 0x1A4); /*0x915a9a*/
    *v14 = "Et"; /*0x915aa0*/
    v12 = __rdtsc(); /*0x915aa6*/
    v14[1] = v12; /*0x915ab0*/
    *(_DWORD *)(v13 + 0x1A4) = v14 + 3; /*0x915ab6*/
  }
  return v12; /*0x915ac7*/
}
