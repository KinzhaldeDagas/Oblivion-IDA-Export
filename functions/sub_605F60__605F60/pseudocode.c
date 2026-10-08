// Verified: disposition-cost switch consumes fCrimeDisp* settings; useBase=false scales by observer actor-value36(Responsibility)/100. Returns truncated integer through Double_To_SInt32. Rejoined default/shared epilogue60611C (local-only incoming jumps and shared stack RET8); bytecode unchanged.
int __thiscall Crime_GetDispositionPenalty(Crime *self, Actor *observer, bool useBase)
{
  double v3; // st7
  unsigned int Value; // eax
  float v6; // [esp+4h] [ebp-4h]
  int v7; // [esp+4h] [ebp-4h]
  float v8; // [esp+4h] [ebp-4h]
  float v9; // [esp+4h] [ebp-4h]
  float v10; // [esp+4h] [ebp-4h]
  float v11; // [esp+4h] [ebp-4h]
  float v12; // [esp+4h] [ebp-4h]

  v3 = 0.0; /*0x605f61*/
  v6 = 0.0; /*0x605f69*/
  switch ( self->category ) /*0x605f72*/
  {
    case kCrime_Theft: /*0x605f72*/
      if ( self->object14 ) /*0x605f79*/
        Value = TESForm_GetValue((TESForm *)self->object14); /*0x605f86*/
      else
        Value = self->value18; /*0x605f80*/
      v7 = Value; /*0x605f90*/
      if ( !Value ) /*0x605f93*/
        v7 = 1; /*0x605f95*/
      if ( useBase ) /*0x605fa1*/
        goto LABEL_8; /*0x605fa1*/
      v3 = ((double (__thiscall *)(Actor *, int))observer->vtbl->GetAV_F)(observer, 0x24); /*0x605fc9*/
      goto LABEL_10; /*0x605fc9*/
    case kCrime_Pickpocket: /*0x605f72*/
      if ( useBase ) /*0x60609f*/
        return Double_To_SInt32(g_fCrimeDispPickpocket_Value); /*0x6060ad*/
      v12 = ((double (__thiscall *)(Actor *, int))observer->vtbl->GetAV_F)(observer, 0x24) /*0x6060d2*/
          / fCostant_100
          * g_fCrimeDispPickpocket_Value;
      return Double_To_SInt32(v12); /*0x6060b3*/
    case kCrime_Trespass: /*0x605f72*/
      if ( useBase ) /*0x6060e6*/
        return Double_To_SInt32(g_fCrimeDispTresspass_Value); /*0x6060f4*/
      v6 = ((double (__thiscall *)(Actor *, int))observer->vtbl->GetAV_F)(observer, 0x24) /*0x606119*/
         / fCostant_100
         * g_fCrimeDispTresspass_Value;
      return Double_To_SInt32(v6);
    case kCrime_Attack: /*0x605f72*/
      if ( useBase ) /*0x606011*/
        return Double_To_SInt32(g_fCrimeDispAttack_Value); /*0x60601f*/
      v10 = ((double (__thiscall *)(Actor *, int))observer->vtbl->GetAV_F)(observer, 0x24) /*0x606044*/
          / fCostant_100
          * g_fCrimeDispAttack_Value;
      return Double_To_SInt32(v10); /*0x606025*/
    case kCrime_Murder: /*0x605f72*/
      if ( useBase ) /*0x606058*/
        return Double_To_SInt32(g_fCrimeDispMurder_Value); /*0x606066*/
      v11 = ((double (__thiscall *)(Actor *, int))observer->vtbl->GetAV_F)(observer, 0x24) /*0x60608b*/
          / fCostant_100
          * g_fCrimeDispMurder_Value;
      return Double_To_SInt32(v11); /*0x60606c*/
    case kCrime_StealHorse: /*0x605f72*/
      v7 = g_iCrimeGoldStealHorse_Value; /*0x605ff5*/
      if ( useBase ) /*0x605ff8*/
      {
LABEL_8:
        v8 = (double)v7 * g_fCrimeDispSteal_Value; /*0x605fa3*/
        return Double_To_SInt32(v8); /*0x605fb2*/
      }
      else
      {
        observer->vtbl->GetAV_F(observer, kActorVal_Responsibility); /*0x606008*/
LABEL_10:
        v9 = v3 / fCostant_100 * ((double)v7 * g_fCrimeDispSteal_Value); /*0x605fcb*/
        return Double_To_SInt32(v9); /*0x605fe2*/
      }
    default:
      return Double_To_SInt32(v6);
  }
}
