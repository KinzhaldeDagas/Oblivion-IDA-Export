double __cdecl Calc_WalkSpeed(float a1, float a2, char a3, char a4, float a5)
{
  if ( !LOBYTE(a5) )
    JUMPOUT(0x547C91);
  return Calc_WalkSpeed_::CapMaxWeight(a1, a2, a3, a4);
}
