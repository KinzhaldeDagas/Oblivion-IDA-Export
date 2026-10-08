int __stdcall MemoryHeap_Free_checked(void *a1)
{
  _DWORD *v1; // ecx
  int result; // eax

  result = (int)a1; /*0x401e40*/
  if ( a1 ) /*0x401e46*/
    MemoryHeap_Free(v1, (unsigned int)a1); /*0x401e4c*/
  return result; /*0x401e51*/
}
