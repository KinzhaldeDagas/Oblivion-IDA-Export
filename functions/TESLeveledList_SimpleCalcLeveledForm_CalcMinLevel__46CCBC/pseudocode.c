int __usercall TESLeveledList_SimpleCalcLeveledForm_::CalcMinLevel@<eax>(
        _BYTE *a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int16 a7)
{
  int v7; // eax
  unsigned int v9; // [esp+Ch] [ebp+8h]

  v9 = (unsigned __int16)a5;
  if ( (a1[0xD] & 1) != 0 )
  {
    v7 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x10))(a1);
    if ( v7 )
      v9 = (unsigned __int16)a5 - v7;
    else
      v9 = 0xFFFFFFFF;
  }
  if ( a1 == (_BYTE *)0xFFFFFFFC )
    return TESLeveledList_SimpleCalcLeveledForm_::Done_(a2, v9, a4, a5);
  else
    return TESLeveledList_SimpleCalcLeveledForm_::FindLowestValidEntryLoop(a2, v9, a4, a5, a6, a7);
}
