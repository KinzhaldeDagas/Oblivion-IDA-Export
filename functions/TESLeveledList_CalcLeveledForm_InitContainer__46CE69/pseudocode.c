int __usercall TESLeveledList_CalcLeveledForm_::InitContainer@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        unsigned __int16 si0@<si>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        TESContainer a11,
        int a12,
        int a13,
        int a14)
{
  bool v14; // zf

  TESContainer_constr(&a11);
  v14 = (*(_BYTE *)(a2 + 0xD) & 2) == 0;
  a14 = a1;
  if ( v14 )
    return TESLeveledList_CalcLeveledForm_::CalcEntireCountTogether(
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11.vtbl,
             *(_DWORD *)&a11.type,
             a11.list.data,
             a11.list.next,
             a12,
             a13,
             a14);
  else
    return TESLeveledList_CalcLeveledForm_::CalcForEachItemInCount(a1, si0, a4, a5, a6, a7, a8, a9, a10);
}
