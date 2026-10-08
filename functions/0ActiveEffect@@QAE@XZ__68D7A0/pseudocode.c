// Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
ActiveEffect *__thiscall ActiveEffect_Ctor(ActiveEffect *this, MagicCaster *a2, MagicItem *a3, EffectItem *a4)
{
  UInt32 v5; // eax
  int Duration; // [esp+14h] [ebp+8h]

  this->vtbl = (ActiveEffectVtbl *)&ActiveEffect::`vftable'; /*0x68d7a8*/
  this->members.item = a3; /*0x68d7ae*/
  v5 = (*(int (__thiscall **)(MagicItem *))(*(_DWORD *)a3 + 0x18))(a3); /*0x68d7b7*/
  this->members.timeElapsed = 0.0; /*0x68d7bf*/
  this->members.spellType = v5; /*0x68d7c6*/
  this->members.effectItem = a4; /*0x68d7c9*/
  this->members.bApplied = 0;                   // Verified ActiveEffect lifecycle field: constructor initializes bApplied=false; ProcessEffect calls Apply (+0x38) before setting it true after first successful application. /*0x68d7cc*/
  this->members.bTerminated = 0;                // Verified ActiveEffect lifecycle field: constructor initializes bTerminated=false. Expiration, target-death handling, or ActiveEffect_Base_Remove set it true; MagicTarget_ProcessEffects then unlinks/destroys the effect. /*0x68d7cf*/
  this->members.bRemoved = 0;                   // Verified ActiveEffect lifecycle field: constructor initializes bRemoved=false; RemoveEffect sets it after the virtual onRemove hook and target-side cleanup. /*0x68d7d2*/
  this->members.magnitude = (float)EffectItem_GetMagnitude(a4); /*0x68d7e4*/
  Duration = EffectItem_GetDuration(a4);        // OBMEFix verification 2026-05-30: ActiveEffect ctor reads EffectItem duration before MagicTarget_AddEffect calls vtable +0x34; OBMEFix can use activeEffect->duration in the creation guard. /*0x68d7ec*/
  this->members.caster = a2; /*0x68d7f8*/
  this->members.target = 0; /*0x68d7fc*/
  this->members.duration = (float)Duration; /*0x68d7ff*/
  this->members.unk2C = 0; /*0x68d802*/
  this->members.boundObjectOrParentForm = 0; /*0x68d805*/
  this->members.hitEffectList = 0; /*0x68d808*/
  this->members.aeFlags = 0; /*0x68d80b*/
  return this; /*0x68d810*/
}
