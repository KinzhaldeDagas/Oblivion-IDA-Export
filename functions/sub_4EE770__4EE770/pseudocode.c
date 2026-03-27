void __thiscall sub_4EE770(unsigned int *this)
{
  unsigned int *i; // edi
  unsigned int v3; // edi

  for ( i = this; i; i = (unsigned int *)i[1] )
  {
    if ( !*i )
      break;
    FormHeapFree(*i);
  }
  if ( *(this + 1) )
  {
    do
    {
      v3 = *(_DWORD *)(*(this + 1) + 4);
      FormHeapFree(*(this + 1));
      *(this + 1) = v3;
    }
    while ( v3 );
  }
  *this = 0;
}
