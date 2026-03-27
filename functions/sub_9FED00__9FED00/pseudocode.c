char sub_9FED00()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4E45504F, (int)OpenEffect_Make);
  byte_B3C0DD = result;
  return result;
}
