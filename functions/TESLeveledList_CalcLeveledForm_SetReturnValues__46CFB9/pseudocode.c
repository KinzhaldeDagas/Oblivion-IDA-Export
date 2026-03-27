int __userpurge TESLeveledList_CalcLeveledForm_::SetReturnValues@<eax>(
        int ebx0@<ebx>,
        int ebp0@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20)
{
  TESContainer_CopyContentsFrom(a20, ebx0, ebp0, (int)&a10);
  a15 = 0xFFFFFFFF;
  TESContainer_destr(&a9);
  return TESLeveledList_CalcLeveledForm_::Done(a3, a4, a5);
}
