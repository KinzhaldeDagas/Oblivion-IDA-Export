// local variable allocation has failed, the output may be wrong!
int __userpurge TESLeveledList_CalcLeveledForm_::CalcForEachItemInCount_Loop_next@<eax>(
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
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        TESObject *a17,
        int a18,
        TESObject *a19,
        int a20)
{
  int v21; // [esp+1Ch] [ebp+1Ch]

  v21 = a9 - 1;
  if ( v21 )
    return TESLeveledList_CalcLeveledForm_::CalcForEachItemInCount_Loop(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             v21,
             a10,
             a11,
             *(TESContainer *)&a12,
             a16,
             a17,
             a18,
             a19,
             a20);
  else
    return TESLeveledList_CalcLeveledForm_::SetReturnValues(
             (int)a1,
             (int)a2,
             a3,
             a4,
             a5,
             (int)a6,
             a7,
             a8,
             0,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             (int)a17,
             a18,
             (int)a19,
             a20);
}
