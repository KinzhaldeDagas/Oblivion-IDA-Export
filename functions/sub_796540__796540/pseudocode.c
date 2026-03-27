unsigned int **__thiscall sub_796540(unsigned int *this, int a2, unsigned __int8 a3)
{
  int v4; // ecx
  unsigned int v5; // edx

  v4 = *(this + 1);
  v5 = (unsigned int)a3 % *(_DWORD *)(v4 + 0x2C);
  *(float *)&a2 = 1.0 - *(float *)&a2;
  a3 = *(_BYTE *)(v4 + 0x28) + v5;
  sub_785F30(this + 0x3E, &a2);
  return sub_78D4E0(this + 0x42, &a3);
}
