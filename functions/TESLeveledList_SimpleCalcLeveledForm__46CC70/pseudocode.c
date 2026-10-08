// CustomAnimSupport decode: simple leveled-list resolver evidence; not a form-list target expansion path for animation manifests.
void __thiscall TESLeveledList_SimpleCalcLeveledForm(
        unsigned __int8 *this,
        int a2,
        _DWORD *a3,
        _WORD *a4,
        int a5,
        int a6,
        __int16 a7)
{
  unsigned __int8 v8; // bl

  *a3 = 0; /*0x46cc7d*/
  *a4 = 0; /*0x46cc83*/
  v8 = *(this + 0xC);                           // 3DTheft decode 2026-05-14: TESLeveledList simple resolver rolls chanceNone at list+0x0C with Game_RandomLargeInteger % 100 before selecting an entry. /*0x46cc88*/
  if ( v8 && Game_RandomLargeInteger(0) % 0x64 < v8 ) /*0x46ccb6*/
    TESLeveledList_SimpleCalcLeveledForm_::Done(a2, (int)a3, (int)a4, a5); /*0x46ccb6*/
  else
    TESLeveledList_SimpleCalcLeveledForm_::CalcMinLevel(this, a2, (int)a3, (int)a4, a5, a6, a7); /*0x46ccb7*/
}
