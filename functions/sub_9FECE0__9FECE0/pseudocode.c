char sub_9FECE0()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4559454E, (int)NightEyeEffect_Make);
  byte_B3C0DC = result;
  return result;
}
