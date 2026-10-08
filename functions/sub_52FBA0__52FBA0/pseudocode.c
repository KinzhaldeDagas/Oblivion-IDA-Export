char __thiscall sub_52FBA0(TESForm *this, TESForm *a2)
{
  char result; // al
  void *v4; // eax
  int *TopicInfoParent; // eax
  _DWORD *v6; // eax
  bool v7; // cf

  if ( a2->member.type != kFormType_Dialog ) /*0x52fbb1*/
  {
    if ( a2->member.type != kFormType_DialogInfo ) /*0x52fbb6*/
      return TESForm_LessThan(this, a2); /*0x52fbc2*/
    v4 = OblivionDynamicCast( /*0x52fbd4*/
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESTopicInfo `RTTI Type Descriptor',
           0);
    if ( v4 ) /*0x52fbde*/
    {
      TopicInfoParent = TESTopic_static_GetTopicInfoParent_((int)v4); /*0x52fbe1*/
      if ( TopicInfoParent ) /*0x52fbeb*/
      {
        if ( TopicInfoParent == (int *)this ) /*0x52fbef*/
          return 1; /*0x52fbf2*/
        else
          return ((char (__thiscall *)(TESForm *, int *))this->vtbl->Unk_0D)(this, TopicInfoParent); /*0x52fc00*/
      }
    }
    return 0; /*0x52fc2c*/
  }
  v6 = OblivionDynamicCast( /*0x52fc16*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESTopic `RTTI Type Descriptor',
         0);
  if ( !v6 ) /*0x52fc20*/
    return 0; /*0x52fc20*/
  v7 = this->member.refID < v6[3]; /*0x52fc25*/
  result = 1; /*0x52fc28*/
  if ( !v7 ) /*0x52fc2a*/
    return 0; /*0x52fc2a*/
  return result; /*0x52fbc0*/
}
