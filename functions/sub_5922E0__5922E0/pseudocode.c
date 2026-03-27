_DWORD *__thiscall sub_5922E0(_DWORD *this, int a2, float a3, unsigned __int8 *a4)
{
  CHAR *v5; // eax

  if ( a2 == 0xFDE )
  {
    if ( !sub_588C10(this, 0xFDE) && a4
      || sub_588C10(this, 0xFDE) && (v5 = sub_588C10(this, 0xFDE), !_mbscmp(a4, (const unsigned __int8 *)v5)) )
    {
LABEL_6:
      *(this + 0xB) |= 2u;
      return this;
    }
  }
  else if ( a2 == 0xFD1 && a3 != Tile_GetFloat(this, 0xFD1) )
  {
    goto LABEL_6;
  }
  return 0;
}
