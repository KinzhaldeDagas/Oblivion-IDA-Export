char sub_9FEBF0()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x5A4E5246, (int)FrenzyEffect_Make);
  byte_B3C0B0 = result;
  return result;
}
