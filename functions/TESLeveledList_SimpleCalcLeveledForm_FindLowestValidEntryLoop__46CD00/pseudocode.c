int __userpurge TESLeveledList_SimpleCalcLeveledForm_::FindLowestValidEntryLoop@<eax>(
        _DWORD *a1@<eax>,
        char a2@<dl>,
        int a3@<ebx>,
        int a4@<ebp>,
        int a5@<edi>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned __int16 a11)
{
  int v11; // ecx

  if ( !*a1 ) /*0x46cd00*/
    return TESLeveledList_SimpleCalcLeveledForm_::FindLowestValidEntryLoop_next( /*0x46cd04*/
             (int)a1,
             a3,
             a4,
             a2,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11);
  v11 = *(unsigned __int16 *)*a1; /*0x46cd06*/
  if ( v11 > a11 ) /*0x46cd10*/
    JUMPOUT(0x46CD3B); /*0x46cd3b*/
  if ( v11 <= a5 || a5 && a2 ) /*0x46cd1c*/
    return TESLeveledList_SimpleCalcLeveledForm_::FindLowestValidEntryLoop_next( /*0x46cd32*/
             (int)a1,
             a3,
             a4 + 1,
             a2,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11);
  if ( v11 >= a9 ) /*0x46cd22*/
    a2 = 1; /*0x46cd24*/
  return TESLeveledList_SimpleCalcLeveledForm_::FindLowestValidEntryLoop_next(
           (int)a1,
           (int)a1,
           1,
           a2,
           v11,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}
