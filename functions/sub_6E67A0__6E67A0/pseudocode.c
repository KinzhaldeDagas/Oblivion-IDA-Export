int __thiscall sub_6E67A0(float *this, _DWORD *a2, _DWORD **a3)
{
  int result; // eax

  sub_6ED2B0(this, (int)a2, a3);
  a2[7] = *((_DWORD *)this + 7);
  a2[8] = *((_DWORD *)this + 8);
  result = *((_DWORD *)this + 9);
  a2[9] = result;
  a2[0xA] = *((_DWORD *)this + 0xA);
  a2[0xB] = *((_DWORD *)this + 0xB);
  return result;
}
