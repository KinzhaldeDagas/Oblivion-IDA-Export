// BSTreeNode update throttle helper: schedules updates by global update group interval and returns whether work should run this frame/time.
char __thiscall sub_563F90(float *this, float a2)
{
  double v3; // st7

  if ( a2 == 0.0 ) /*0x563fa1*/
    return 1; /*0x563fa5*/
  v3 = a2; /*0x563fac*/
  if ( 0.0 == *(this + 0x3B) ) /*0x563fb9*/
  {
    *(this + 0x3B) = v3 + unk_B3A024[0] + unk_B3A024[0] / (double)MEMORY[0xB3A01C] * (double)(unsigned __int8)unk_B3A000; /*0x563fe0*/
    unk_B3A000 = (unsigned __int8)(unk_B3A000 + 1) % MEMORY[0xB3A01C]; /*0x563ffb*/
    return 1; /*0x563ff9*/
  }
  else if ( *(this + 0x3B) >= v3 ) /*0x564013*/
  {
    return 0; /*0x56402a*/
  }
  else
  {
    *(this + 0x3B) = v3 + unk_B3A024[0]; /*0x56401f*/
    return 1; /*0x56401d*/
  }
}
