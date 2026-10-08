void __userpurge _freefls(int a1@<ebp>, int a2@<esi>, int a3)
{
  char *v3; // edi

  _lock(0xC); /*0x98c1c4*/
  *(_DWORD *)(a1 - 4) = 1; /*0x98c1ca*/
  v3 = *(char **)(a2 + 0x6C); /*0x98c1d1*/
  if ( v3 ) /*0x98c1d6*/
  {
    __removelocaleref(*(volatile LONG **)(a2 + 0x6C)); /*0x98c1d9*/
    if ( v3 != (char *)off_B31998 && v3 != (char *)&unk_B318C0 && !*(_DWORD *)v3 ) /*0x98c1ef*/
      __freetlocinfo(v3); /*0x98c1f5*/
  }
  *(_DWORD *)(a1 - 4) = 0xFFFFFFFE; /*0x98c1fb*/
  ((void (*)(void))_freefls)(); /*0x98c202*/
  JUMPOUT(0x98C207); /*0x98c207*/
}
