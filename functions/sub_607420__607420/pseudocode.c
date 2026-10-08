void __thiscall sub_607420(TESObjectREFR *this, int a2, int a3)
{
  UInt32 v4; // eax
  TESForm *v5; // eax
  UInt32 v6; // eax
  TESForm *v7; // eax
  UInt32 v8; // eax
  TESForm *v9; // eax
  _DWORD *v10; // eax
  UInt32 v11; // eax
  TESForm *v12; // eax
  int ProcessLevel; // eax
  int v14; // eax

  MobileObject_LinkModifierForm(this, a2, a3); /*0x60742f*/
  v4 = *((_DWORD *)this + 0x1E); /*0x607434*/
  if ( v4 ) /*0x607439*/
  {
    v5 = TESForm_LookupByFormID(v4); /*0x60744a*/
    *((_DWORD *)this + 0x1E) = OblivionDynamicCast( /*0x60745b*/
                                 v5,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &Actor `RTTI Type Descriptor',
                                 0);
  }
  v6 = *((_DWORD *)this + 0x1F); /*0x60745e*/
  if ( v6 ) /*0x607463*/
  {
    v7 = TESForm_LookupByFormID(v6); /*0x607474*/
    *((_DWORD *)this + 0x1F) = OblivionDynamicCast( /*0x607485*/
                                 v7,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &EnchantmentItem `RTTI Type Descriptor',
                                 0);
  }
  v8 = *((_DWORD *)this + 0x21); /*0x607488*/
  if ( v8 ) /*0x607490*/
  {
    v9 = TESForm_LookupByFormID(v8); /*0x6074a1*/
    *((_DWORD *)this + 0x21) = OblivionDynamicCast( /*0x6074b2*/
                                 v9,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &AlchemyItem `RTTI Type Descriptor',
                                 0);
  }
  v10 = *((_DWORD **)this + 0x17); /*0x6074b8*/
  if ( v10 ) /*0x6074bd*/
  {
    if ( *v10 <= 1u ) /*0x6074c4*/
    {
      v11 = v10[0xA]; /*0x6074ca*/
      if ( v11 ) /*0x6074cf*/
      {
        v12 = TESForm_LookupByFormID(v11); /*0x6074e0*/
        *(_DWORD *)(*((_DWORD *)this + 0x17) + 0x28) = OblivionDynamicCast( /*0x6074f4*/
                                                         v12,
                                                         0,
                                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                                         0);
      }
    }
  }
  ProcessLevel = Actor::GetProcessLevel((Actor *)this); /*0x6074f9*/
  sub_674550((int)this, ProcessLevel); /*0x607505*/
  v14 = Actor::GetProcessLevel((Actor *)this); /*0x607512*/
  ActorProcessManager_AddMobileObject((ActorProcessManager *)&qword_B3BB2C[0x75], (MobileObject *)this, v14, 0, 0, 0); /*0x60751e*/
}
