void __cdecl std::_Locinfo::_Locinfo_dtor(struct std::_Locinfo *a1)
{
  const char *v1; // eax

  if ( *((_DWORD *)a1 + 0x14) ) /*0x980949*/
  {
    if ( *((_DWORD *)a1 + 0x15) < 0x10u ) /*0x980953*/
      v1 = (char *)a1 + 0x40; /*0x98095a*/
    else
      v1 = *((const char **)a1 + 0x10); /*0x980955*/
    setlocale(0, v1); /*0x980960*/
  }
}
