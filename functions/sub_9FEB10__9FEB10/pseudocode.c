char sub_9FEB10()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x55484F43, (int)CommandHumanoidEffect_Make);
  byte_B3C0A8 = result;
  return result;
}
