// positive sp value has been detected, the output may be wrong!
int __userpurge TESLeveledList_CalcLeveledForm_::CalcEntireCountTogether@<eax>(
        TESObject *a1@<ebx>,
        unsigned __int8 *a2@<ebp>,
        int a3,
        int a4,
        void *a5,
        TESObject *a6,
        TESObject *a7,
        int a8,
        TESObject *a9,
        char a10,
        void *a11,
        TESContainer a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17)
{
  TESObject *v17; // esi
  int v18; // edi
  TESObject *v19; // eax
  TESObject *v20; // eax
  int v22; // [esp-8h] [ebp-Ch]
  int v23; // [esp-4h] [ebp-8h]
  __int16 v24; // [esp+0h] [ebp-4h]

  a7 = a1; /*0x46cf37*/
  a6 = a1; /*0x46cf3b*/
  TESLeveledList_SimpleCalcLeveledForm(a2, (int)a5, &a7, &a6, v22, v23, v24); /*0x46cf3f*/
  v17 = a9; /*0x46cf44*/
  if ( a9 != a1 ) /*0x46cf4a*/
  {
    v18 = a8; /*0x46cf4c*/
    if ( (_WORD)a8 != (_WORD)a1 ) /*0x46cf53*/
    {
      v19 = (TESObject *)OblivionDynamicCast( /*0x46cf62*/
                           a9,
                           (int)a1,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           &TESLeveledList `RTTI Type Descriptor',
                           (int)a1);            // 3DTheft decode 2026-05-14: Full TESLeveledList resolver detects nested TESLeveledList entries and recurses instead of adding the list itself to the output container.
      if ( v19 == a1 ) /*0x46cf6c*/
      {
        v20 = (TESObject *)OblivionDynamicCast( /*0x46cf8f*/
                             v17,
                             (int)a1,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                             (int)a1);
        if ( v20 != a1 ) /*0x46cf99*/
          TESContainer_AddValidatedForm((TESContainer *)&a10, v20, (unsigned __int16)v18, (bool)a1);// 3DTheft decode 2026-05-14: Full TESLeveledList resolver adds only resolved TESBoundObject forms to the temporary TESContainer with the selected count. /*0x46cfa5*/
      }
      else
      {
        TESLeveledList_CalcLeveledForm(v19, a15, v18); /*0x46cf7b*/
      }
      TESContainer_MultiplyContents((char *)&a9, (unsigned __int16)a15); /*0x46cfb4*/
    }
  }
  return TESLeveledList_CalcLeveledForm_::SetReturnValues(
           (int)a1,
           (int)a2,
           a3,
           a4,
           (int)a5,
           (int)a6,
           (int)a7,
           a8,
           (int)a9,
           a10,
           (int)a11,
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
