// positive sp value has been detected, the output may be wrong!
char __usercall Actor_MagicCaster_IsMagicItemUseable_::CalcAlchemySkill@<al>(double a1@<st0>, int a2, float *a3)
{
  signed int v4; // [esp-14h] [ebp-18h]
  int v5; // [esp+0h] [ebp-4h]
  float v8; // [esp+14h] [ebp+10h]

  Actor_GetLuckModifiedBaseAV(v5 - 0x5C, 0x13, v4);
  if ( a3 )
  {
    v8 = a1;
    *a3 = Calc_WortcraftAlchemyFactor(v8);
  }
  return 1;
}
