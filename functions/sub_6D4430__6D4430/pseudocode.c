int __thiscall sub_6D4430(_DWORD *this, bool *a2)
{
  int result; // eax

  result = *(this + 0xC); /*0x6d4430*/
  *a2 = (*(_BYTE *)(result + 0x18) & 1) == 0; /*0x6d443f*/
  return result; /*0x6d4441*/
}
