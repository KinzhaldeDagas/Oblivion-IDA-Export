char __thiscall sub_780A20(_BYTE *this)
{
  char result; // al

  *(_DWORD *)this = 0;
  result = sub_7809C0(this, dword_B3FAA4);
  *(this + 4) = 1;
  return result;
}
