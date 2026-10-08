// Verified: gold-cost switch: theft uses value-derived multiplier, horse stealing uses fixed setting; other categories use corresponding iCrimeGold* values. Rejoined shared/default return6061CA (local jumps, shared stack, RET0). Oblivion setting literals independently establish category enum.
float __thiscall Crime_GetGoldValue(Crime *self)
{
  unsigned int Value; // eax
  double v2; // st7
  float v4; // [esp+0h] [ebp-4h]
  int v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+0h] [ebp-4h]
  float v7; // [esp+0h] [ebp-4h]
  float v8; // [esp+0h] [ebp-4h]
  float v9; // [esp+0h] [ebp-4h]
  float v10; // [esp+0h] [ebp-4h]

  v4 = 0.0; /*0x606149*/
  switch ( self->category ) /*0x60614e*/
  {
    case kCrime_Theft: /*0x60614e*/
      if ( self->object14 ) /*0x606155*/
        Value = TESForm_GetValue((TESForm *)self->object14); /*0x606162*/
      else
        Value = self->value18; /*0x60615c*/
      v5 = Value; /*0x60616c*/
      if ( !Value ) /*0x60616f*/
        v5 = 1; /*0x606171*/
      v6 = (double)v5 * g_fCrimeGoldSteal_Value; /*0x606181*/
      v2 = v6; /*0x606184*/
      break; /*0x606188*/
    case kCrime_Pickpocket: /*0x60614e*/
      v10 = (float)(int)g_iCrimeGoldPickpocket_Value.value; /*0x6061b9*/
      v2 = v10; /*0x6061bc*/
      break; /*0x6061c0*/
    case kCrime_Trespass: /*0x60614e*/
      v4 = (float)(int)g_iCrimeGoldTresspass_Value.value; /*0x6061c7*/
      goto LABEL_13; /*0x6061c7*/
    case kCrime_Attack: /*0x60614e*/
      v7 = (float)(int)g_iCrimeGoldAttack_Value.value; /*0x60618f*/
      v2 = v7; /*0x606192*/
      break; /*0x606196*/
    case kCrime_Murder: /*0x60614e*/
      v9 = (float)(int)g_iCrimeGoldMurder_Value.value; /*0x6061ab*/
      v2 = v9; /*0x6061ae*/
      break; /*0x6061b2*/
    case kCrime_StealHorse: /*0x60614e*/
      v8 = (float)(int)g_iCrimeGoldStealHorse_Value.value; /*0x60619d*/
      v2 = v8; /*0x6061a0*/
      break; /*0x6061a4*/
    default:
LABEL_13:
      v2 = v4; /*0x6061ca*/
      break; /*0x6061ca*/
  }
  return v2; /*0x606188*/
}
