int __thiscall sub_8CAF80(_DWORD *this, int a2)
{
  int i; // edi
  int result; // eax
  int j; // edi

  if ( *(this + 1) )
  {
    for ( i = 0; i < *(this + 0x16); ++i )
      sub_8CAE40(this + 0xFFFFFFFE, *(int **)(*(this + 0x15) + 4 * i));
  }
  result = a2;
  *(this + 1) = a2;
  if ( a2 )
  {
    result = *(this + 0x16);
    for ( j = 0; j < result; ++j )
    {
      sub_8CAD40(this + 0xFFFFFFFE, *(_DWORD **)(*(this + 0x15) + 4 * j));
      result = *(this + 0x16);
    }
  }
  return result;
}
