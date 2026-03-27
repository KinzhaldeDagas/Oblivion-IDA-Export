bool __thiscall sub_4C9890(_BYTE *this)
{
  char v1; // al

  v1 = *(this + 0x24);
  return (v1 & 1) == 0 && (v1 & 8) != 0;
}
