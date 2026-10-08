bool __stdcall ReanimateEffect_ValidTarget(int a1)
{
  void *v1; // eax
  Actor *v2; // esi

  v1 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6a3fe8*/
  v2 = (Actor *)OblivionDynamicCast( /*0x6a3ff0*/
                  v1,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Character `RTTI Type Descriptor',
                  0);
  return v2 /*0x6a4025*/
      && v2->vtbl->super.super.IsDead((TESObjectREFR *)v2, 0)
      && Actor::GetDeadState(v2) != 4
      && Actor::GetDeadState(v2) != 6;
}
