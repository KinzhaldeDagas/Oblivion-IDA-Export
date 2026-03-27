int __thiscall sub_4E5F10(_DWORD *this)
{
  int result; // eax
  unsigned int i; // esi
  _BYTE *v4; // ecx

  result = *(this + 9);
  if ( result )
  {
    for ( i = 0; i < *(unsigned __int16 *)(result + 0xA); ++i )
    {
      v4 = *(_BYTE **)(*(_DWORD *)(result + 4) + 4 * i);
      if ( v4 )
        sub_67ED80(v4, 0);
      result = *(this + 9);
    }
  }
  return result;
}
