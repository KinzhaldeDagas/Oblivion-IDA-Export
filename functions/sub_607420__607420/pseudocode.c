void __userpurge sub_607420(
        TESObjectREFR *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  float x; // eax
  TESForm *v9; // eax
  float y; // eax
  TESForm *v11; // eax
  UInt32 v12; // eax
  TESForm *v13; // eax
  _DWORD *v14; // eax
  UInt32 v15; // eax
  TESForm *v16; // eax
  int ProcessLevel; // eax
  int v18; // eax

  MobileObject_LinkModifierForm(a1, a6, a7);
  x = a1[1].member.rot.x;
  if ( x != 0.0 )
  {
    v9 = TESForm_LookupByFormID(LODWORD(x));
    LODWORD(a1[1].member.rot.x) = OblivionDynamicCast(
                                    v9,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &Actor `RTTI Type Descriptor',
                                    0);
  }
  y = a1[1].member.rot.y;
  if ( y != 0.0 )
  {
    v11 = TESForm_LookupByFormID(LODWORD(y));
    LODWORD(a1[1].member.rot.y) = OblivionDynamicCast(
                                    v11,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &EnchantmentItem `RTTI Type Descriptor',
                                    0);
  }
  v12 = LODWORD(a1[1].member.pos[0]);
  if ( v12 )
  {
    v13 = TESForm_LookupByFormID(v12);
    LODWORD(a1[1].member.pos[0]) = OblivionDynamicCast(
                                     v13,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &AlchemyItem `RTTI Type Descriptor',
                                     0);
  }
  v14 = *(_DWORD **)&a1[1].member.super.type;
  if ( v14 )
  {
    if ( *v14 <= 1u )
    {
      v15 = v14[0xA];
      if ( v15 )
      {
        v16 = TESForm_LookupByFormID(v15);
        *(_DWORD *)(*(_DWORD *)&a1[1].member.super.type + 0x28) = OblivionDynamicCast(
                                                                    v16,
                                                                    0,
                                                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                                    (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                                                    0);
      }
    }
  }
  ProcessLevel = Actor::GetProcessLevel((Actor *)a1);
  sub_674550(a2, a3, a4, a5, (int)a1, ProcessLevel);
  v18 = Actor::GetProcessLevel((Actor *)a1);
  sub_673A90((int)a1, v18, 0, 0, 0);
}
