int __thiscall sub_941190(int *this, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  int result; // eax

  sub_941070(this, a2, a3, a4, a5, off_B30590[0]);
  *(this + 0x11) = sub_8B1550(this + 5, (unsigned int)a2, 0xFFFFFFFF);
  result = sub_8B1550(this + 5, (unsigned int)a3, 0xFFFFFFFF);
  *(this + 0x12) = result;
  return result;
}
