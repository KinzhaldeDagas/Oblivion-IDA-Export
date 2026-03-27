int __thiscall sub_77FF00(_DWORD *this)
{
  int result; // eax
  int v2; // edx

  result = *(this + 0x3F8);
  v2 = *(this + 0x3FA);
  *(this + 0x3F9) = result;
  *(this + 0x3FB) = v2;
  return result;
}
