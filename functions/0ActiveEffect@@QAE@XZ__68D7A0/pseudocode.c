ActiveEffect *__thiscall ActiveEffect::ActiveEffect(ActiveEffect *this, MagicCaster *a2, MagicItem *a3, EffectItem *a4)
{
  UInt32 v5; // eax
  int Duration; // [esp+14h] [ebp+8h]

  this->vtbl = (ActiveEffectVtbl *)&ActiveEffect::`vftable';
  this->members.item = a3;
  v5 = (*(int (__thiscall **)(MagicItem *))(*(_DWORD *)a3 + 0x18))(a3);
  this->members.timeElapsed = 0.0;
  this->members.spellType = v5;
  this->members.effectItem = a4;
  this->members.bApplied = 0;
  this->members.bTerminated = 0;
  this->members.bRemoved = 0;
  this->members.magnitude = (float)EffectItem_GetMagnitude(a4);
  Duration = EffectItem_GetDuration(a4);
  this->members.caster = a2;
  this->members.target = 0;
  this->members.duration = (float)Duration;
  this->members.unk2C = 0;
  this->members.boundObjectOrParentForm = 0;
  this->members.hitEffect = 0;
  this->members.aeFlags = 0;
  return this;
}
