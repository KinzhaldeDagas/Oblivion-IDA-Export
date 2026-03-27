BOOL __thiscall sub_4330A0(unsigned int *this)
{
  unsigned int i; // edi
  unsigned int *v4; // [esp+8h] [ebp-4h]

  for ( i = 0; i < *this; ++i )
  {
    v4 = *(unsigned int **)(*(this + 2) + 8 * i + 4);
    if ( v4 )
    {
      while ( v4[3] )
        sub_432740(v4);
      FormHeapFree((unsigned int)v4);
    }
  }
  FormHeapFree(*(this + 2));
  return TlsFree(*(this + 1));
}
