char __thiscall sub_530720(TESForm *this, TESForm *a2)
{
  void *v4; // edi
  int *v5; // esi
  int *v6; // eax
  int *v7; // edi
  int *TopicInfoParent; // eax

  if ( a2->member.type == kFormType_Dialog ) /*0x530732*/
  {
    v7 = (int *)OblivionDynamicCast( /*0x5307a1*/
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESTopic `RTTI Type Descriptor',
                  0);
    if ( v7 ) /*0x5307a8*/
    {
      TopicInfoParent = TESTopic_static_GetTopicInfoParent_((int)this); /*0x5307ab*/
      if ( TopicInfoParent != v7 ) /*0x5307b5*/
        return (*(char (__thiscall **)(int *, int *))(*TopicInfoParent + 0x34))(TopicInfoParent, v7); /*0x5307c4*/
    }
  }
  else
  {
    if ( a2->member.type != kFormType_DialogInfo ) /*0x530737*/
      return TESForm_LessThan(this, a2); /*0x530744*/
    v4 = OblivionDynamicCast( /*0x53075b*/
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESTopicInfo `RTTI Type Descriptor',
           0);
    if ( v4 ) /*0x530762*/
    {
      v5 = TESTopic_static_GetTopicInfoParent_((int)this); /*0x53076b*/
      v6 = TESTopic_static_GetTopicInfoParent_((int)v4); /*0x53076d*/
      if ( v6 ) /*0x530777*/
      {
        if ( v6 != v5 ) /*0x53077b*/
          return (*(char (__thiscall **)(int *, int *))(*v5 + 0x34))(v5, v6); /*0x53078a*/
      }
    }
  }
  return 0; /*0x530741*/
}
