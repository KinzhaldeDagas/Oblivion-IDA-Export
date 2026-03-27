int __thiscall TESLeveledList_SimpleCalcLeveledForm(
        unsigned __int8 *this,
        int a2,
        _DWORD *a3,
        _WORD *a4,
        int a5,
        int a6,
        __int16 a7)
{
  unsigned __int8 v8; // bl

  *a3 = 0;
  *a4 = 0;
  v8 = *(this + 0xC);
  if ( v8 && GetRandomLargeInteger_(0) % 0x64 < v8 )
    return TESLeveledList_SimpleCalcLeveledForm_::Done(a2, (int)a3, (int)a4, a5);
  else
    return TESLeveledList_SimpleCalcLeveledForm_::CalcMinLevel(this, a2, (int)a3, (int)a4, a5, a6, a7);
}
