int __thiscall sub_6FD8B0(_WORD *this)
{
  unsigned int i; // edi
  unsigned int *v3; // ebx
  int result; // eax
  int v5; // ecx

  for ( i = 0; i < (unsigned __int16)*(this + 0x27); ++i )
  {
    v3 = *(unsigned int **)(*((_DWORD *)this + 0x12) + 4 * i);
    if ( v3 )
    {
      FormHeapFree(*v3);
      FormHeapFree((unsigned int)v3);
    }
  }
  for ( result = 0; (unsigned __int16)result < *(this + 0x27); *(_DWORD *)(*((_DWORD *)this + 0x12) + 4 * v5) = 0 )
    v5 = (unsigned __int16)result++;
  *(this + 0x28) = 0;
  *(this + 0x27) = 0;
  return result;
}
