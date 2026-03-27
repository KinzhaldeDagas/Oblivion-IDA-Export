char *__cdecl sub_71B090(char *Src)
{
  char *v1; // esi
  rsize_t v3; // [esp-Ch] [ebp-41Ch]
  rsize_t v4; // [esp+0h] [ebp-410h]
  char Dir[771]; // [esp+8h] [ebp-408h] BYREF
  char Dst[257]; // [esp+30Bh] [ebp-105h] BYREF

  v1 = (char *)FormHeapAlloc(0x104u);
  if ( dword_B3FD24 )
  {
    sub_748760(Dir, Src);
    strcpy_s(Dst, 0x100u, dword_B3FD24);
    sub_7487B0(Dir, (int)v1, 0x104);
  }
  else
  {
    HIDWORD(v3) = Src;
    LODWORD(v3) = 0x104;
    strncpy_s(v1, v3, (const char *)(strlen(Src) + 1), v4);
  }
  return v1;
}
