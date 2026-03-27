char sub_9FEB30()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4B524144, (int)DarknessEffect_Make);
  byte_B3C0A9 = result;
  return result;
}
