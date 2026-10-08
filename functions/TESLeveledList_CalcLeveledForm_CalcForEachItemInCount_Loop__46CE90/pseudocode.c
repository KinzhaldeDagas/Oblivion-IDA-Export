// positive sp value has been detected, the output may be wrong!
int __userpurge TESLeveledList_CalcLeveledForm_::CalcForEachItemInCount_Loop@<eax>(
        TESObject *a1@<ebx>,
        unsigned __int8 *a2@<ebp>,
        int a3,
        int a4,
        int a5,
        TESObject *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        TESContainer a12,
        int a13,
        TESObject *a14,
        int a15,
        TESObject *a16,
        int a17)
{
  TESObject *v17; // esi
  int v18; // edi
  TESObject *v19; // eax
  TESObject *v21; // eax
  int v22; // [esp-8h] [ebp-Ch]
  int v23; // [esp-4h] [ebp-8h]
  __int16 v24; // [esp+0h] [ebp-4h]

  a14 = a1; /*0x46cea2*/
  a6 = a1; /*0x46cea6*/
  TESLeveledList_SimpleCalcLeveledForm(a2, a5, &a14, &a6, v22, v23, v24); /*0x46ceaa*/
  v17 = a16; /*0x46ceaf*/
  if ( a16 != a1 ) /*0x46ceb5*/
  {
    v18 = a8; /*0x46ceb7*/
    if ( (_WORD)a8 != (_WORD)a1 ) /*0x46cebe*/
    {
      v19 = (TESObject *)OblivionDynamicCast( /*0x46cecd*/
                           a16,
                           (int)a1,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           &TESLeveledList `RTTI Type Descriptor',
                           (int)a1);
      if ( v19 == a1 ) /*0x46ced7*/
      {
        v21 = (TESObject *)OblivionDynamicCast( /*0x46cefa*/
                             v17,
                             (int)a1,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                             (int)a1);
        if ( v21 != a1 ) /*0x46cf04*/
          TESContainer_AddValidatedForm((TESContainer *)&a10, v21, (unsigned __int16)v18, (bool)a1); /*0x46cf10*/
      }
      else
      {
        TESLeveledList_CalcLeveledForm(v19, a15, v18); /*0x46cee6*/
      }
    }
  }
  return TESLeveledList_CalcLeveledForm_::CalcForEachItemInCount_Loop_next(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           (int)a12.vtbl,
           *(int *)&a12.type,
           (int)a12.list.data,
           (int)a12.list.next,
           a13,
           a14,
           a15,
           a16,
           a17);
}
