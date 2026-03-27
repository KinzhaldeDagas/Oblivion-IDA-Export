double __thiscall sub_613780(void **this)
{
  double result; // st7
  _DWORD *v3; // ebx
  void (__thiscall **v4)(_DWORD *, int); // edi
  char *v5; // eax
  int WeaponSkillAV; // eax
  void *v7; // eax

  if ( Actor_IsCreature((Actor *)*(this + 0xF)) )
  {
    v7 = OblivionDynamicCast(
           *(this + 0xF),
           0,
           (struct _s_RTTICompleteObjectLocator *)&Actor `RTTI Type Descriptor',
           &Creature `RTTI Type Descriptor',
           0);
    if ( v7 )
    {
      result = sub_624FC0(v7);
      Double_To_SInt32(result);
    }
  }
  else if ( *(this + 0x1C) )
  {
    if ( sub_612D60(this) )
    {
      v3 = *(this + 0xF);
      v4 = (void (__thiscall **)(_DWORD *, int))(*v3 + 0x284);
      v5 = (char *)sub_612D60(this);
      WeaponSkillAV = TESObjectWEAP_GetWeaponSkillAV(v5);
      (*v4)(v3, WeaponSkillAV);
    }
  }
  else
  {
    return ((double (__thiscall *)(_DWORD, int))*(_DWORD *)(*(_DWORD *)*(this + 0xF) + 0x284))(*(this + 0xF), 0x11);
  }
  return result;
}
