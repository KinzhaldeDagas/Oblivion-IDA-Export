void __thiscall sub_60E2E0(void *this, float a2)
{
  void *v2; // eax
  float *v3; // eax

  v2 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
  v3 = (float *)OblivionDynamicCast(
                  v2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESNPC `RTTI Type Descriptor',
                  0);
  sub_529530(v3, a2);
}
