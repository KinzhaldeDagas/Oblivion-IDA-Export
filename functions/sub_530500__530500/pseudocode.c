void __thiscall sub_530500(unsigned int *this)
{
  unsigned int v2; // edi
  unsigned int v3; // edi

  if ( *(this + 3) )
  {
    do
    {
      v2 = *(_DWORD *)(*(this + 3) + 4);
      FormHeapFree(*(this + 3));
      *(this + 3) = v2;
    }
    while ( v2 );
  }
  *(this + 2) = 0;
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
