int __thiscall sub_631B90(int this, int a2, char a3)
{
  int result; // eax
  double v4; // st7

  result = a2;
  if ( a3 )
  {
    if ( (a2 & 0x30) != 0 )
    {
      if ( (LowProcess *)this == TESDataHandler_g_PlayerRef->super.super.super.process )
        v4 = fPCTurnAnimMinTime;
      else
        v4 = fActorTurnAnimMinTime;
      *(float *)(this + 0x1E0) = v4;
      *(_BYTE *)(this + 0x1E4) = a2 & 0x30;
    }
    *(_WORD *)(this + 0x1FC) |= a2;
  }
  else
  {
    *(_WORD *)(this + 0x1FC) &= ~(_WORD)a2;
    return ~a2;
  }
  return result;
}
