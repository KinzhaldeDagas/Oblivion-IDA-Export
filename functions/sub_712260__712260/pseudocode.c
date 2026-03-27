int __thiscall sub_712260(_DWORD *this, int a2)
{
  int v3; // edx
  int result; // eax

  v3 = *this;
  *(this + 0x88) = a2;
  result = (*(int (**)(void))(v3 + 0x40))();
  *(this + 0x88) = 0;
  return result;
}
