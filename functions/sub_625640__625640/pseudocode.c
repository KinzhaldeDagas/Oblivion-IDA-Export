int __thiscall sub_625640(_BYTE *this, int a2, int a3, int a4)
{
  int v4; // eax

  v4 = a2;
  if ( (unsigned int)(a2 - 0xC) <= 6 || a2 == 0x1C )
  {
    v4 = 0xC;
  }
  else
  {
    if ( (unsigned int)(a2 - 0x13) <= 6 )
      return Actor_ForceModCurAVf(this, 0x13, a3, a4);
    if ( (unsigned int)(a2 - 0x1A) <= 6 )
      return Actor_ForceModCurAVf(this, 0x1A, a3, a4);
  }
  return Actor_ForceModCurAVf(this, v4, a3, a4);
}
