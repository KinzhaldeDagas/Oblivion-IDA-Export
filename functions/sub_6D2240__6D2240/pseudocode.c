int __thiscall sub_6D2240(_DWORD *this, float *a2)
{
  int result; // eax

  result = *(this + 0xC); /*0x6d2240*/
  *a2 = *(float *)(result + 0x50); /*0x6d224a*/
  return result; /*0x6d224c*/
}
