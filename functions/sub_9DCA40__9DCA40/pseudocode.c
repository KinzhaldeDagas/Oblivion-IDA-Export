int sub_9DCA40()
{
  GameSetting_ConstrAndReg( /*0x9dca4f*/
    (GameSettingString *)&MEMORY[0xB33E90][0xF44],
    "sContinueText",
    "Continue Running Executable?");
  return atexit(sub_A18AD0); /*0x9dca5f*/
}
