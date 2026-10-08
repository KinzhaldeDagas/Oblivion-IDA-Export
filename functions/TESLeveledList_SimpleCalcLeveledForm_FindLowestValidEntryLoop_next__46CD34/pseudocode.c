int __userpurge TESLeveledList_SimpleCalcLeveledForm_::FindLowestValidEntryLoop_next@<eax>(
        int a1@<eax>,
        int a2@<ebx>,
        int a3@<ebp>,
        char a4@<dl>,
        int a5@<edi>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned __int16 a11)
{
  _DWORD *v11; // eax

  v11 = *(_DWORD **)(a1 + 4); /*0x46cd34*/
  if ( v11 ) /*0x46cd39*/
    return TESLeveledList_SimpleCalcLeveledForm_::FindLowestValidEntryLoop( /*0x46cd39*/
             v11,
             a4,
             a2,
             a3,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11);
  if ( !a2 ) /*0x46cd3d*/
    return TESLeveledList_SimpleCalcLeveledForm_::Done_(a6, a7, a8, a9); /*0x46cd3d*/
  if ( !(Game_RandomLargeInteger(0) % a3) ) /*0x46cd56*/
    JUMPOUT(0x46CD66); /*0x46cd66*/
  return TESLeveledList_SimpleCalcLeveledForm_::FindRandomValidEntryLoop(a6, a7, a8, a9);
}
