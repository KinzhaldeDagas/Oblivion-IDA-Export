int __usercall TESLeveledList_SimpleCalcLeveledForm_::CalcMinLevel@<eax>(
        _BYTE *a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned __int16 a7)
{
  int v7; // eax
  int v9; // [esp+Ch] [ebp+8h]

  v9 = (unsigned __int16)a5; /*0x46ccc6*/
  if ( (a1[0xD] & 1) != 0 )                     // 3DTheft decode 2026-05-14: TESLeveledList flag bit 0x01 (CalcAllLevels) changes the minimum eligible level using the owner GetMaxLevelDiff virtual. /*0x46ccca*/
  {
    v7 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x10))(a1); /*0x46ccd3*/
    if ( v7 ) /*0x46ccd7*/
      v9 = (unsigned __int16)a5 - v7; /*0x46ccdb*/
    else
      v9 = 0xFFFFFFFF; /*0x46cce1*/
  }
  if ( a1 == (_BYTE *)0xFFFFFFFC ) /*0x46ccfa*/
    return TESLeveledList_SimpleCalcLeveledForm_::Done_(a2, v9, a4, a5); /*0x46ccfa*/
  else
    return TESLeveledList_SimpleCalcLeveledForm_::FindLowestValidEntryLoop( /*0x46ccfb*/
             (_DWORD *)a1 + 1,
             0,
             0,
             1,
             0,
             a2,
             v9,
             a4,
             a5,
             a6,
             a7);
}
