void __cdecl sub_41DE50(ExtraDataList *a1)
{
  _DWORD *ThreadLocalStoragePointer; // edx
  int v2; // esi

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  ++dword_B33780;
  v2 = ThreadLocalStoragePointer[TlsIndex];
  ++*(_DWORD *)(v2 + 0xC);
  if ( a1 == *(ExtraDataList **)(v2 + 8) )
  {
    _memset(v2 + 0x10, 0, 0x174);
    *(_DWORD *)(v2 + 8) = 0;
  }
}
