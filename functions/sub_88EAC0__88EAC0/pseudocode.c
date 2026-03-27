char __thiscall sub_88EAC0(float *this, int a2)
{
  char v3; // cl
  char v4; // cl

  v3 = sub_89E950(a2);
  if ( v3 )
  {
    v4 = (*(this + 6) == *(float *)(a2 + 0x18)) & v3;
    if ( *(this + 5) == *(float *)(a2 + 0x14) )
      return v4 & 1;
    return 0;
  }
  return v3;
}
