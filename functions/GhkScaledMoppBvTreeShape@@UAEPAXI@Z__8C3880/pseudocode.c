hkScaledMoppBvTreeShape *__thiscall hkScaledMoppBvTreeShape::`scalar deleting destructor'(
        hkScaledMoppBvTreeShape *this,
        char a2)
{
  hkScaledMoppBvTreeShape::~hkScaledMoppBvTreeShape(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(hkScaledMoppBvTreeShape *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this;
}
