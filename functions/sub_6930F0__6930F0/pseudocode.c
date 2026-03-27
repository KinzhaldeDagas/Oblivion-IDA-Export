bool sub_6930F0()
{
  bool result; // al

  result = TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
             (Actor *)TESDataHandler_g_PlayerRef,
             kActorVal_DetectLifeRange) > 0;
  byte_B3C0AB = result;
  return result;
}
