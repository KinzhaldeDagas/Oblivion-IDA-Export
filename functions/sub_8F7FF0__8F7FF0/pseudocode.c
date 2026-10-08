__int16 __thiscall sub_8F7FF0(_WORD *this)
{
  _WORD *v2; // esi
  int v3; // ebx
  int v4; // eax

  v2 = this + 0xE; /*0x8f7ff5*/
  v3 = 8; /*0x8f7ff8*/
  do /*0x8f8018*/
  {
    v4 = (unsigned __int16)*v2; /*0x8f8002*/
    if ( *v2 != 0xFFFF ) /*0x8f8009*/
      LOWORD(v4) = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v4); /*0x8f8011*/
    ++v2; /*0x8f8014*/
    --v3; /*0x8f8017*/
  }
  while ( v3 ); /*0x8f8018*/
  if ( this ) /*0x8f801c*/
    LOWORD(v4) = (**(__int16 (__thiscall ***)(_WORD *, int))this)(this, 1); /*0x8f8024*/
  return v4; /*0x8f8026*/
}
