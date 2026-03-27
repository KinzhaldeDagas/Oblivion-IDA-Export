char sub_9FEBB0()
{
  char result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x45574944, (int)DisintegrateWeaponEffect_Make);
  byte_B3C0AE = result;
  return result;
}
