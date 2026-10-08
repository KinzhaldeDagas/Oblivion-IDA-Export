int __usercall TESLeveledList_CalcLeveledForm_::CalcEffectiveLevel@<eax>(
        unsigned __int16 *a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        unsigned __int16 si0@<si>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18)
{
  if ( (unsigned __int16 *)(a2 + 4) == a1 ) /*0x46ce39*/
    JUMPOUT(0x46CE5E); /*0x46ce5e*/
  return TESLeveledList_CalcLeveledForm_::FindMaxLevelLoop(
           (unsigned __int16 **)(a2 + 4),
           0,
           a1,
           a2,
           a3,
           si0,
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
           a18);
}
