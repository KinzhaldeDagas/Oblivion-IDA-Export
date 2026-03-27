__int16 __thiscall sub_631B50(int this, __int16 a2)
{
  __int16 result; // ax
  double v3; // st7

  result = a2;
  if ( (a2 & 0x30) != 0 )
  {
    if ( (LowProcess *)this == TESDataHandler_g_PlayerRef->super.super.super.process )
      v3 = fPCTurnAnimMinTime;
    else
      v3 = fActorTurnAnimMinTime;
    *(float *)(this + 0x1E0) = v3;
    *(_BYTE *)(this + 0x1E4) = a2 & 0x30;
  }
  *(_WORD *)(this + 0x1FC) = a2;
  return result;
}
