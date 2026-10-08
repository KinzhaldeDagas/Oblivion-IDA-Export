signed int __thiscall sub_8B9D60(_DWORD *this)
{
  int i; // edi
  signed int result; // eax
  int v4; // edi
  bool v5; // zf
  bool v6; // sf

  for ( i = 0; i < *(this + 0x24); ++i ) /*0x8b9d6d*/
    result = sub_8A6300(*(int **)(*(this + 0x23) + 4 * i), (int)(this + 2)); /*0x8b9d7c*/
  v4 = 0; /*0x8b9d8c*/
  v5 = *(this + 0x27) == 0; /*0x8b9d8e*/
  v6 = (int)*(this + 0x27) < 0; /*0x8b9d8e*/
  *(this + 0x24) = 0; /*0x8b9d94*/
  if ( !v6 && !v5 ) /*0x8b9d9e*/
  {
    do /*0x8b9dbb*/
      result = sub_8DE670(*(int **)(*(this + 0x26) + 4 * v4++), (int)(this + 3)); /*0x8b9dad*/
    while ( v4 < *(this + 0x27) ); /*0x8b9dbb*/
  }
  *(this + 0x27) = 0; /*0x8b9dbe*/
  return result; /*0x8b9dbd*/
}
