_DWORD *__thiscall sub_6E5520(float *this, int a2, _DWORD **a3)
{
  _DWORD *result; // eax

  result = sub_6ED2B0(this, a2, a3); /*0x6e552e*/
  *(float *)(a2 + 0x1C) = *(this + 7); /*0x6e5536*/
  *(float *)(a2 + 0x20) = *(this + 8); /*0x6e553c*/
  return result; /*0x6e553f*/
}
