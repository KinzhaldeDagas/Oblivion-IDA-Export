char *__cdecl sub_794E00(void *Src, int a2, char *Dst)
{
  int v3; // eax
  char *v4; // esi
  rsize_t v6; // [esp-Ch] [ebp-14h]
  rsize_t v7; // [esp+0h] [ebp-8h]

  v3 = (a2 - (int)Src) >> 1;
  v4 = &Dst[2 * v3];
  if ( v3 > 0 )
  {
    HIDWORD(v6) = Src;
    LODWORD(v6) = 2 * v3;
    memmove_s(Dst, v6, (const void *)(2 * v3), v7);
  }
  return v4;
}
