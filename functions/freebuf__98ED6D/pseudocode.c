int __cdecl _freebuf(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 0xC); /*0x98ed72*/
  if ( (result & 0x83) != 0 && (result & 8) != 0 ) /*0x98ed7b*/
  {
    free(*(void **)(a1 + 8)); /*0x98ed80*/
    *(_DWORD *)(a1 + 0xC) &= 0xFFFFFBF7; /*0x98ed85*/
    *(_DWORD *)a1 = 0; /*0x98ed8f*/
    *(_DWORD *)(a1 + 8) = 0; /*0x98ed91*/
    *(_DWORD *)(a1 + 4) = 0; /*0x98ed94*/
    return 0; /*0x98ed8c*/
  }
  return result; /*0x98ed97*/
}
