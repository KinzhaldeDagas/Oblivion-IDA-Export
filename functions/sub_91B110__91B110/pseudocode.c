int __thiscall sub_91B110(_DWORD *this)
{
  int result; // eax
  int i; // esi

  result = *(this + 7);
  if ( result )
  {
    for ( i = 0; i < *(_DWORD *)(result + 0x60); ++i )
    {
      sub_91AC60(this + 0xFFFFFFFE, *(_DWORD **)(*(_DWORD *)(result + 0x5C) + 4 * i));
      result = *(this + 7);
    }
  }
  return result;
}
