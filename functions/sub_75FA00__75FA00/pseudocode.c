bool __thiscall sub_75FA00(_DWORD *this, int a2, int a3)
{
  int v3; // eax

  v3 = *(this + 5);
  return dword_B28CB0 >= (unsigned int)(v3 + a2)
      && dword_B28CB4 >= (unsigned int)(a3 + *(this + 7))
      && dword_B28CB4 >= (unsigned int)(a3 + v3);
}
