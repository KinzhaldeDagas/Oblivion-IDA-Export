int __usercall TESLeveledList_CalcLeveledForm_::FindMaxLevelLoop@<eax>(
        unsigned __int16 **a1@<eax>,
        unsigned __int16 a2@<cx>,
        unsigned __int16 *a3@<ebx>,
        int a4@<ebp>,
        int a5@<edi>,
        unsigned __int16 si0@<si>,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20)
{
  unsigned __int16 *v20; // edx
  unsigned __int16 v21; // ax

  v20 = a1[1];
  if ( v20 == a3 && *a1 == a3 )
    JUMPOUT(0x46CE5E);
  v21 = **a1;
  if ( v21 <= a2 )
    return TESLeveledList_CalcLeveledForm_::FindMaxLevelLoop_next(
             (int)v20,
             a2,
             (int)a3,
             a4,
             a5,
             si0,
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
             a20);
  else
    return TESLeveledList_CalcLeveledForm_::FindMaxLevelLoop_next(
             (int)v20,
             v21,
             (int)a3,
             a4,
             a5,
             si0,
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
             a20);
}
