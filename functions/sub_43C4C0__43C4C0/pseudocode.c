BOOL __thiscall sub_43C4C0(unsigned int *this)
{
  unsigned int i; // edi
  _DWORD *v4; // [esp+8h] [ebp-4h]

  for ( i = 0; i < *this; ++i )
  {
    v4 = *(_DWORD **)(*(this + 2) + 8 * i + 4);
    if ( v4 )
    {
      while ( v4[8] )
        sub_43A3F0(v4);
      FormHeapFree((unsigned int)v4);
    }
  }
  FormHeapFree(*(this + 2));
  return TlsFree(*(this + 1));
}
