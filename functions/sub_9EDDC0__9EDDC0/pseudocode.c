// 3DTheft: registers iClassThief default FormID 0002378F; plugin uses this exact Oblivion class ID as authoritative thief-class test.
int sub_9EDDC0()
{
  GameSetting_ConstrAndReg((GameSettingString *)&MEMORY[0xB37A58][0x9C], "iClassThief", (const char *)0x2378F); /*0x9eddcf*/
  return atexit(sub_A200B0); /*0x9edddf*/
}
