char sub_9FEDC0()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4E525554, (int)TurnUndeadEffect_Make);
  byte_B3C0EA = result;
  return result;
}
