unsigned int __thiscall sub_482530(_DWORD *this, int a2)
{
  unsigned int result; // eax
  unsigned int i; // ebx
  unsigned int j; // edi

  result = *(this + 3);
  for ( i = 0; i < result; ++i )
  {
    for ( j = 0; j < result; ++j )
    {
      if ( *(_DWORD *)(*(this + 4) + 8 * (j + i * result)) == a2 )
        (*(void (__thiscall **)(_DWORD *, unsigned int, unsigned int))(*this + 0x1C))(this, i, j);
      result = *(this + 3);
    }
    result = *(this + 3);
  }
  return result;
}
