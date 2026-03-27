int __usercall TESLeveledList_SimpleCalcLeveledForm_::FindLowestValidEntryLoop@<eax>(
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

  if ( !*a1 )
    return TESLeveledList_SimpleCalcLeveledForm_::FindLowestValidEntryLoop_next((int)a1, a3, a4);
  v11 = *(unsigned __int16 *)*a1;
  if ( v11 > a11 )
    JUMPOUT(0x46CD3B);
  if ( v11 <= a5 || a5 && a2 )
    return TESLeveledList_SimpleCalcLeveledForm_::FindLowestValidEntryLoop_next((int)a1, a3, a4 + 1);
  else
    return TESLeveledList_SimpleCalcLeveledForm_::FindLowestValidEntryLoop_next((int)a1, (int)a1, 1);
}
