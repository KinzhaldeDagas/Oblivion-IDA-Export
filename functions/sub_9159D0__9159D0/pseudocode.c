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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TthkShapeCollection::getMaximumProjection";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v16 = -3.4028235e38;
  for ( i = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x20))(a1, a2);
        i != 0xFFFFFFFF;
        i = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x24))(a1, i) )
  {
    v10 = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)a1 + 0x28))(a1, i, v17);
    v11 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v10 + 0x10))(v10, a3);
    if ( v16 <= v11 )
      v16 = v11;
  }
  LODWORD(v12) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v12 + 0x1A4) < *(_DWORD *)(v12 + 0x1A8) )
  {
    v13 = ThreadLocalStoragePointer[TlsIndex];
    v14 = *(_DWORD **)(v12 + 0x1A4);
    *v14 = "Et";
    v12 = __rdtsc();
    v14[1] = v12;
    *(_DWORD *)(v13 + 0x1A4) = v14 + 3;
  }
  return v12;
}
