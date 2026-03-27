void __userpurge _freefls(int a1@<ebp>, int a2@<esi>, int a3)
{
  char *v3; // edi

  _lock(0xC);
  *(_DWORD *)(a1 - 4) = 1;
  v3 = *(char **)(a2 + 0x6C);
  if ( v3 )
  {
    __removelocaleref(*(volatile LONG **)(a2 + 0x6C));
    if ( v3 != (char *)off_B31998 && v3 != (char *)&unk_B318C0 && !*(_DWORD *)v3 )
      __freetlocinfo(v3);
  }
  *(_DWORD *)(a1 - 4) = 0xFFFFFFFE;
  ((void (*)(void))_freefls)();
  JUMPOUT(0x98C207);
}
