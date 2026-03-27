signed int __thiscall sub_8B9D60(_DWORD *this)
{
  int i; // edi
  signed int result; // eax
  int v4; // edi
  bool v5; // zf
  bool v6; // sf

  for ( i = 0; i < *(this + 0x24); ++i )
    result = sub_8A6300(*(int **)(*(this + 0x23) + 4 * i), (int)(this + 2));
  v4 = 0;
  v5 = *(this + 0x27) == 0;
  v6 = (int)*(this + 0x27) < 0;
  *(this + 0x24) = 0;
  if ( !v6 && !v5 )
  {
    do
      result = sub_8DE670(*(_DWORD **)(*(this + 0x26) + 4 * v4++), (int)(this + 3));
    while ( v4 < *(this + 0x27) );
  }
  *(this + 0x27) = 0;
  return result;
}
