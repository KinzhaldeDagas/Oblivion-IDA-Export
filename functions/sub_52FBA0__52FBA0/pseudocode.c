char __thiscall sub_52FBA0(TESForm *this, TESForm *a2)
{
  char result; // al
  void *v4; // eax
  int *TopicInfoParent; // eax
  _DWORD *v6; // eax
  bool v7; // cf

  if ( a2->member.type != kFormType_Dialog )
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
      TopicInfoParent = TESTopic_static_GetTopicInfoParent_((int)v4);
      if ( TopicInfoParent )
      {
        if ( TopicInfoParent == (int *)this )
          return 1;
        else
          return ((char (__thiscall *)(TESForm *, int *))this->vtbl->Unk_0D)(this, TopicInfoParent);
      }
    }
    return 0;
  }
  v6 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESTopic `RTTI Type Descriptor',
         0);
  if ( !v6 )
    return 0;
  v7 = this->member.refID < v6[3];
  result = 1;
  if ( !v7 )
    return 0;
  return result;
}
