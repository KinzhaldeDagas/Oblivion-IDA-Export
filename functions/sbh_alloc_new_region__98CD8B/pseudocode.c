char *__sbh_alloc_new_region()
{
  int v0; // esi
  void *v1; // eax
  char *v3; // esi
  LPVOID v4; // eax
  LPVOID v5; // eax
  SIZE_T v6; // [esp-4h] [ebp-Ch]
  DWORD v7; // [esp+0h] [ebp-8h]

  v0 = unk_BAABC4; /*0x98cd91*/
  if ( unk_BAABC4 == unk_BAABD4 ) /*0x98cd9c*/
  {
    LODWORD(v6) = 0x14 * (unk_BAABD4 + 0x10); /*0x98cda4*/
    v1 = HeapReAlloc((HANDLE)dword_BA9E10[0x127], 0, MEMORY[0xBAABC8], v6); /*0x98cdb2*/
    if ( !v1 ) /*0x98cdba*/
      return 0; /*0x98cdbe*/
    unk_BAABD4 += 0x10; /*0x98cdc0*/
    v0 = unk_BAABC4; /*0x98cdc7*/
    MEMORY[0xBAABC8] = v1; /*0x98cdcd*/
  }
  v3 = (char *)MEMORY[0xBAABC8] + 0x14 * v0; /*0x98cdd5*/
  LODWORD(v6) = 0x41C4; /*0x98cddb*/
  v4 = HeapAlloc((HANDLE)dword_BA9E10[0x127], 8u, v6); /*0x98cde8*/
  *((_DWORD *)v3 + 4) = v4; /*0x98cdf0*/
  if ( !v4 ) /*0x98cdf3*/
    return 0; /*0x98cdf3*/
  v5 = VirtualAlloc(0, 0x200000100000uLL, 4u, v7); /*0x98ce02*/
  *((_DWORD *)v3 + 3) = v5; /*0x98ce0a*/
  if ( !v5 ) /*0x98ce0d*/
  {
    HeapFree((HANDLE)dword_BA9E10[0x127], 0, *((LPVOID *)v3 + 4)); /*0x98ce19*/
    return 0; /*0x98ce1f*/
  }
  *((_DWORD *)v3 + 2) = 0xFFFFFFFF; /*0x98ce21*/
  *(_DWORD *)v3 = 0; /*0x98ce25*/
  *((_DWORD *)v3 + 1) = 0; /*0x98ce27*/
  ++unk_BAABC4; /*0x98ce2a*/
  **((_DWORD **)v3 + 4) = 0xFFFFFFFF; /*0x98ce33*/
  return v3; /*0x98ce38*/
}
