#135 *__thiscall hkReferencedObject::`scalar deleting destructor'(#135 *this, char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x4bfc58*/
  if ( (a2 & 1) != 0 ) /*0x4bfc5e*/
    (*(void (__thiscall **)(int, #135 *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x4bfc73*/
      unk_BA7D98,
      this,
      *((unsigned __int16 *)this + 2),
      0x12);
  return this; /*0x4bfc77*/
}
