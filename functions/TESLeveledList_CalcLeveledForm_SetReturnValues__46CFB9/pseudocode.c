void __userpurge TESLeveledList_CalcLeveledForm_::SetReturnValues(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        TESContainer *a18)
{
  TESContainer_CopyContentsFrom(a18, (int)&a8); /*0x46cfc2*/
  a13 = 0xFFFFFFFF; /*0x46cfcb*/
  TESContainer_destr(&a7); /*0x46cfd3*/
  TESLeveledList_CalcLeveledForm_::Done(a1, a2, a3); /*0x46cfd4*/
}
