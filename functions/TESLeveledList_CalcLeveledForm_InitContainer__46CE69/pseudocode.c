int __userpurge TESLeveledList_CalcLeveledForm_::InitContainer@<eax>(
        TESObject *a1@<ebx>,
        unsigned __int8 *a2@<ebp>,
        unsigned __int16 si0@<si>,
        int a4,
        int a5,
        void *a6,
        TESObject *a7,
        TESObject *a8,
        int a9,
        TESObject *a10,
        int a11,
        void *a12,
        TESContainer a13,
        TESObject *a14,
        int a15,
        int a16,
        int a17,
        int a18)
{
  bool v18; // zf

  TESContainer_constr((TESContainer *)&a11); /*0x46ce6d*/
  v18 = (a2[0xD] & 2) == 0; /*0x46ce72*/
  a14 = a1; /*0x46ce76*/
  if ( v18 ) /*0x46ce7a*/
    return TESLeveledList_CalcLeveledForm_::CalcEntireCountTogether( /*0x46ce7a*/
             a1,
             a2,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             (int)a14,
             a15,
             a16,
             a17,
             a18);
  else
    return TESLeveledList_CalcLeveledForm_::CalcForEachItemInCount( /*0x46ce7b*/
             (int)a1,
             si0,
             (int)a2,
             a4,
             a5,
             (int)a6,
             (int)a7,
             (int)a8,
             a9,
             (char)a10,
             a11,
             (int)a12,
             (int)a13.vtbl,
             *(int *)&a13.type,
             (int)a13.list.data,
             (int)a13.list.next,
             (int)a14,
             a15,
             a16,
             a17,
             a18);
}
