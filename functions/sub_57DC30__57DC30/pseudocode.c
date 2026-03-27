unsigned int __thiscall sub_57DC30(_DWORD *this, int a2)
{
  unsigned int result; // eax

  result = Seed;
  *(this + 0x48) = Seed;
  *(this + 0x49) = 0;
  *(this + 0x47) = a2;
  return result;
}
