int __thiscall sub_51C980(TESActorBaseData *this)
{
  __int16 Level; // si

  if ( (this[0xFFFFFFFA].flags & 0x80) == 0 )
    return (unsigned __int16)TESAttackDamageForm_GetDamage(this);
  Level = TESActorBaseData_GetLevel(this + 0xFFFFFFFA);
  if ( Level < 1 )
    Level = 1;
  return (unsigned __int16)(int)(*((float *)&stru_B36208 + 0x25) * (double)Level
                               + (double)(unsigned __int16)TESAttackDamageForm_GetDamage(this));
}
