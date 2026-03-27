char __thiscall sub_530720(TESForm *this, TESForm *a2)
{
  void *v4; // edi
  int *v5; // esi
  int *v6; // eax
  int *v7; // edi
  int *TopicInfoParent; // eax

  if ( a2->member.type == kFormType_Dialog )
  {
    v7 = (int *)OblivionDynamicCast(
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESTopic `RTTI Type Descriptor',
                  0);
    if ( v7 )
    {
      TopicInfoParent = TESTopic_static_GetTopicInfoParent_((int)this);
      if ( TopicInfoParent != v7 )
        return (*(char (__thiscall **)(int *, int *))(*TopicInfoParent + 0x34))(TopicInfoParent, v7);
    }
  }
  else
  {
    if ( a2->member.type != kFormType_DialogInfo )
      return TESForm_LessThan(this, a2);
    v4 = OblivionDynamicCast(
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESTopicInfo `RTTI Type Descriptor',
           0);
    if ( v4 )
    {
      v5 = TESTopic_static_GetTopicInfoParent_((int)this);
      v6 = TESTopic_static_GetTopicInfoParent_((int)v4);
      if ( v6 )
      {
        if ( v6 != v5 )
          return (*(char (__thiscall **)(int *, int *))(*v5 + 0x34))(v5, v6);
      }
    }
  }
  return 0;
}
