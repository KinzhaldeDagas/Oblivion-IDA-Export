unsigned int __thiscall sub_481E20(_DWORD *this)
{
  unsigned int result; // eax
  unsigned int i; // ebx
  unsigned int v4; // edi

  result = *(this + 3);
  for ( i = 0; i < result; ++i )
  {
    v4 = 0;
    if ( result )
    {
      do
        (*(void (__thiscall **)(_DWORD *, unsigned int, unsigned int))(*this + 0x18))(this, i, v4++);
      while ( v4 < *(this + 3) );
    }
    result = *(this + 3);
  }
  return result;
}
