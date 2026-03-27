char sub_9FED60()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x50525453, (int)SoulTrapEffect_Make);
  byte_B3C0E0 = result;
  return result;
}
