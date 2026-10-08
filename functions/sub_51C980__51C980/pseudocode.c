int __thiscall sub_51C980(TESActorBaseData *this)
{
  __int16 Level; // si

  if ( (*((_DWORD *)this + 0xFFFFFFD1) & 0x80) == 0 ) /*0x51c991*/
    return (unsigned __int16)TESAttackDamageForm_GetDamage(this); /*0x51ca02*/
  Level = TESActorBaseData_GetLevel(this + 0xFFFFFFFA); /*0x51c99f*/
  if ( Level < 1 ) /*0x51c9a6*/
    Level = 1; /*0x51c9a8*/
  return (unsigned __int16)(int)(*(float *)&dword_B361CC[0x34] * (double)Level /*0x51c9f9*/
                               + (double)(unsigned __int16)TESAttackDamageForm_GetDamage(this));
}
