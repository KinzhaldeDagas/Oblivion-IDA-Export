int __usercall setlocale_::_LN22_0@<eax>(int a1@<ebp>, char *a2@<ebx>, UINT *a3@<edi>, int a4@<esi>)
{
  char *v4; // eax

  v4 = _setlocale_nolock(*(char **)(a1 + 0xC), a3, (const char *)a3, *(_DWORD *)(a1 + 8)); /*0x98ad86*/
  *(_DWORD *)(a1 - 0x20) = v4; /*0x98ad8c*/
  if ( v4 == a2 ) /*0x98ad91*/
  {
    __removelocaleref((volatile LONG *)a3); /*0x98ae3c*/
    __freetlocinfo((char *)a3); /*0x98ae42*/
  }
  else
  {
    if ( *(char **)(a1 + 0xC) != a2 ) /*0x98ad9a*/
    {
      if ( strcmp(*(const char **)(a1 + 0xC), "C") ) /*0x98ada4*/
        dword_BA9E10[0] = 1; /*0x98adaf*/
    }
    _lock(0xC); /*0x98adbb*/
    *(_DWORD *)(a1 - 4) = 2; /*0x98adc1*/
    _updatetlocinfoEx_nolock((volatile LONG **)(a4 + 0x6C), (volatile LONG *)a3); /*0x98adcd*/
    __removelocaleref((volatile LONG *)a3); /*0x98add3*/
    if ( (*(_BYTE *)(a4 + 0x70) & 2) == 0 && (dword_B318B0 & 1) == 0 ) /*0x98ade6*/
    {
      _updatetlocinfoEx_nolock((volatile LONG **)&off_B31998, *(volatile LONG **)(a4 + 0x6C)); /*0x98adef*/
      memcpy(&dword_BA9E10[0x204], (char *)off_B31998 + 0xC, 0x18u); /*0x98ae04*/
      sync_legacy_variables_lk(); /*0x98ae0c*/
    }
    *(_DWORD *)(a1 - 4) = 0; /*0x98ae11*/
    ((void (*)(void))setlocale_::_LN25_0)(); /*0x98ae15*/
  }
  return setlocale_::_LN26_0(a1);
}
