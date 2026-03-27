int __thiscall sub_625790(_BYTE *this, int a2, int a3)
{
  int v3; // eax

  v3 = a2;
  if ( (unsigned int)(a2 - 0xC) <= 6 || a2 == 0x1C )
  {
    v3 = 0xC;
  }
  else
  {
    if ( (unsigned int)(a2 - 0x13) <= 6 )
      return Actor_ModBaseAVi(this, 0x13, a3);
    if ( (unsigned int)(a2 - 0x1A) <= 6 )
      return Actor_ModBaseAVi(this, 0x1A, a3);
  }
  return Actor_ModBaseAVi(this, v3, a3);
}
