unsigned int __thiscall sub_709EE0(int *this, _DWORD *a2)
{
  unsigned int result; // eax

  sub_707F00(this, (int)a2);
  sub_712AE0(a2);
  result = sub_712AE0(a2);
  *((_WORD *)this + 0xC) &= ~0x40u;
  return result;
}
