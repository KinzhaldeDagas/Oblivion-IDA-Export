void __cdecl std::_Locinfo::_Locinfo_dtor(struct std::_Locinfo *a1)
{
  const char *v1; // eax

  if ( *((_DWORD *)a1 + 0x14) )
  {
    if ( *((_DWORD *)a1 + 0x15) < 0x10u )
      v1 = (char *)a1 + 0x40;
    else
      v1 = *((const char **)a1 + 0x10);
    setlocale(0, v1);
  }
}
