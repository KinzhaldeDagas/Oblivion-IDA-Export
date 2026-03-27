int __thiscall sub_4D89A0(int *this, int a2, int a3, int a4)
{
  int v4; // edx

  *(this + 8) = a2;
  *(this + 9) = a3;
  v4 = *this;
  *(this + 0xA) = a4;
  return (*(int (__stdcall **)(int))(v4 + 0x40))(4);
}
