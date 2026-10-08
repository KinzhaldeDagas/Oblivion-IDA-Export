bhkCharacterStateOnGround *__thiscall bhkCharacterStateOnGround::`scalar deleting destructor'(
        bhkCharacterStateOnGround *this,
        char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x8cfa58*/
  if ( (a2 & 1) != 0 ) /*0x8cfa5e*/
    (*(void (__thiscall **)(int, bhkCharacterStateOnGround *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8cfa73*/
      unk_BA7D98,
      this,
      *((unsigned __int16 *)this + 2),
      0x31);
  return this; /*0x8cfa77*/
}
