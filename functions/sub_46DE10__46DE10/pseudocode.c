void __thiscall sub_46DE10(unsigned int *this)
{
  unsigned int i; // edi
  int v3; // eax
  unsigned int v4; // ebx

  if ( *(this + 1) )
  {
    for ( i = 0; i < *this; ++i )
    {
      v3 = *(this + 1);
      v4 = *(_DWORD *)(v3 + 4 * i);
      if ( v4 )
      {
        sub_46D450(*(_DWORD **)(v3 + 4 * i));
        FormHeapFree(v4);
      }
    }
    FormHeapFree(*(this + 1));
    *(this + 1) = 0;
  }
  *this = 0;
}
