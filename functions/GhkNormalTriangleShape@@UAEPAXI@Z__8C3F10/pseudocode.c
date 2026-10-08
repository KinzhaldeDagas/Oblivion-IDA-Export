hkNormalTriangleShape *__thiscall hkNormalTriangleShape::`scalar deleting destructor'(
        hkNormalTriangleShape *this,
        char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x8c3f18*/
  if ( (a2 & 1) != 0 ) /*0x8c3f1e*/
    (*(void (__thiscall **)(int, hkNormalTriangleShape *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8c3f33*/
      unk_BA7D98,
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x8c3f37*/
}
