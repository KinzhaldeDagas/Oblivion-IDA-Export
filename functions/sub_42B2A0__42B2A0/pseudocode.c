char __thiscall sub_42B2A0(_BYTE *this, int a2)
{
  char result; // al

  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 8))(this, a2); /*0x42b2ae*/
  result = *(_BYTE *)(a2 + 0xC); /*0x42b2b0*/
  *(this + 0xC) = result; /*0x42b2b3*/
  *((_WORD *)this + 7) = *(_WORD *)(a2 + 0xE); /*0x42b2bb*/
  return result; /*0x42b2ba*/
}
