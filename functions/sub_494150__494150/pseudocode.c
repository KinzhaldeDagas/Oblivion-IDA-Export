unsigned int *__usercall sub_494150@<eax>(int a1@<ebp>, int a2@<edi>, const char **a3, signed int a4, signed int a5)
{
  const char *v5; // esi
  _DWORD *v6; // eax

  v5 = *a3;
  if ( !*a3 || !OBSE_g_FileFinder || !OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, v5, 0, 0, 0xFFFFFFFF) )
    return 0;
  v6 = sub_431130(v5, 0, 0x2800, 0x10);
  return sub_493F60(a1, a2, v6, a4, a5);
}
