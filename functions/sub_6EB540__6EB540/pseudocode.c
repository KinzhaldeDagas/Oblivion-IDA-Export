char __thiscall sub_6EB540(_BYTE *this, int a2)
{
  char result; // al

  result = sub_6CCD10(this, a2);
  if ( result )
    return *(this + 0x30) == *(_BYTE *)(a2 + 0x30);
  return result;
}
