// Returns the combat actor's weapon-skill level as an integer. Actor paths read the relevant actor value; creature fallback converts its floating calculation to SInt32 before returning EAX.
int __thiscall CombatController_GetWeaponSkillLevel(void *this)
{
  _DWORD *v3; // ebx
  int (__thiscall **v4)(_DWORD *, int); // edi
  char *EquippedWeaponForm; // eax
  int WeaponSkillAV; // eax
  Actor *v7; // eax
  double v8; // st7

  if ( Actor_IsCreature(*((Actor **)this + 0xF)) ) /*0x613789*/
  {
    v7 = (Actor *)OblivionDynamicCast( /*0x6137eb*/
                    *((void **)this + 0xF),
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&Actor `RTTI Type Descriptor',
                    &Creature `RTTI Type Descriptor',
                    0);
    if ( v7 ) /*0x6137f5*/
    {
      v8 = sub_624FC0(v7); /*0x6137f9*/
      return Double_To_SInt32(v8); /*0x613800*/
    }
  }
  else
  {
    if ( !*((_DWORD *)this + 0x1C) ) /*0x613792*/
      return (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0xF) + 0x284))(*((_DWORD *)this + 0xF), 0x11); /*0x6137a8*/
    if ( CombatController_GetEquippedWeaponForm(this) ) /*0x6137ab*/
    {
      v3 = *((_DWORD **)this + 0xF); /*0x6137b5*/
      v4 = (int (__thiscall **)(_DWORD *, int))(*v3 + 0x284); /*0x6137bc*/
      EquippedWeaponForm = (char *)CombatController_GetEquippedWeaponForm(this); /*0x6137c2*/
      WeaponSkillAV = TESObjectWEAP_GetWeaponSkillAV(EquippedWeaponForm);// Sidecar hook boundary: replace player-facing combat score with the effective exclusive Blade/Spear sidecar level while preserving the native weapon AV return elsewhere. /*0x6137c9*/
      return (*v4)(v3, WeaponSkillAV); /*0x6137d8*/
    }
  }
  return 0; /*0x6137a6*/
}
