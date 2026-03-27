#135 *__thiscall hkReferencedObject::`scalar deleting destructor'(#135 *this, char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(int, #135 *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      dword_BA7D98,
      this,
      *((unsigned __int16 *)this + 2),
      0x12);
  return this;
}
