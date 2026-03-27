char __thiscall sub_7730A0(_DWORD *this, int a2, _DWORD *a3, _BYTE *a4)
{
  unsigned __int16 v4; // ax

  v4 = *(_WORD *)(2 * a2 + 0xB427E0);
  if ( v4 >= 8u )
    return 0;
  if ( *((_BYTE *)this + v4 + 0x5C) )
  {
    *a3 = *(this + v4 + 0xF);
    *a4 = 0;
    return 1;
  }
  if ( !*((_BYTE *)this + v4 + 0x2C) )
    return 0;
  *a3 = *(this + v4 + 3);
  *a4 = 1;
  return 1;
}
