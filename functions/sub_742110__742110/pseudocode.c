int __thiscall sub_742110(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 0x2D); /*0x742110*/
  *(_WORD *)(result + 0x2E) = *(_WORD *)(result + 0x2E) & 0xFFF | 0x8000; /*0x742124*/
  return result; /*0x742128*/
}
