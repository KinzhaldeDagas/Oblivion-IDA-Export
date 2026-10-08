// [Controller decode 2026-07-09] Initializes game setting sXBox360Controller = Xbox 360 Controller. UI label only; not evidence of XInput polling and not related to IsXBox.
int GameSetting_Init_sXBox360Controller()
{
  GameSetting_ConstrAndReg(&stru_B38F00, "sXBox360Controller", "Xbox 360 Controller"); /*0x9f32bf*/
  return atexit(GameSetting_Destroy_sXBox360Controller); /*0x9f32cf*/
}
