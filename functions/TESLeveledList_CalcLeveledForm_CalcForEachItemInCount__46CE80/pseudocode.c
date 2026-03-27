int __userpurge TESLeveledList_CalcLeveledForm_::CalcForEachItemInCount@<eax>(
        int a1@<ebx>,
        unsigned __int16 a2@<si>,
        int a3@<ebp>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        char a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21)
{
  if ( a2 <= a1 )
    return TESLeveledList_CalcLeveledForm_::SetReturnValues(
             a1,
             a3,
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
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             a20,
             a21);
  else
    return TESLeveledList_CalcLeveledForm_::CalcForEachItemInCount_Loop(a4, a5, a6, a7, a8, a9, a2);
}
