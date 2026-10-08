bhkBreakableConstraint *__thiscall bhkBreakableConstraint::bhkBreakableConstraint(bhkBreakableConstraint *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8bf77b*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8bf781*/
  ++unk_BA7CFC; /*0x8bf78c*/
  unk_BA7CF8 = CurrentThreadId; /*0x8bf794*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8bf799*/
  v5 = v4; /*0x8bf79e*/
  if ( v4 ) /*0x8bf7b1*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8bf7b5*/
    v5->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8bf7ba*/
    v5[1].__vftable = 0; /*0x8bf7c0*/
    ++unk_BA7D4C; /*0x8bf7c7*/
    v5->__vftable = (NiObjectVtbl *)&bhkBreakableConstraint::`vftable'; /*0x8bf7cd*/
    ++unk_BA8094; /*0x8bf7d3*/
  }
  else
  {
    v5 = 0; /*0x8bf7db*/
  }
  sub_8A0860(this, (int)v5, a2); /*0x8bf7ed*/
  if ( unk_BA7CFC-- == 1 ) /*0x8bf7f2*/
    unk_BA7CF8 = 0; /*0x8bf7fa*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8bf809*/
  return (bhkBreakableConstraint *)v5; /*0x8bf811*/
}
