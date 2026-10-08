int __thiscall sub_6FD8B0(_WORD *this)
{
  unsigned int i; // edi
  unsigned int *v3; // ebx
  int result; // eax
  int v5; // ecx

  for ( i = 0; i < (unsigned __int16)*(this + 0x27); ++i ) /*0x6fd8b9*/
  {
    v3 = *(unsigned int **)(*((_DWORD *)this + 0x12) + 4 * i); /*0x6fd8c3*/
    if ( v3 ) /*0x6fd8c8*/
    {
      FormHeapFree(*v3); /*0x6fd8cd*/
      FormHeapFree((unsigned int)v3); /*0x6fd8d3*/
    }
  }
  for ( result = 0; (unsigned __int16)result < *(this + 0x27); *(_DWORD *)(*((_DWORD *)this + 0x12) + 4 * v5) = 0 ) /*0x6fd8e9*/
    v5 = (unsigned __int16)result++; /*0x6fd8f3*/
  *(this + 0x28) = 0; /*0x6fd903*/
  *(this + 0x27) = 0; /*0x6fd907*/
  return result; /*0x6fd902*/
}
