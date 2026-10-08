// Registers fJumpFallVelocityMin default 600.0 at flt_B37470, but no observed xref from 0x890740 fall-timer accumulation. Do not assume this setting drives +0x320 without another observed use.
int sub_9EAFB0()
{
  GameSetting_ConstrAndReg_float(&unk_B37470, (int)"fJumpFallVelocityMin", 600.0); /*0x9eafc4*/
  return atexit(sub_A1F000); /*0x9eafd4*/
}
