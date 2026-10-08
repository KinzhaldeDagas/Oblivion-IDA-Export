void __cdecl sub_4011E0(char a1)
{
  byte_B32B00 = 0; /*0x4011e5*/
  byte_B32B01 = 0; /*0x4011ec*/
  NiLeaveCriticalSection_0(&unk_B32C00); /*0x4011f3*/
  if ( a1 ) /*0x4011fd*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x401207*/
}
