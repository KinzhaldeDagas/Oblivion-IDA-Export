bhkBallAndSocketConstraint *__thiscall bhkBallAndSocketConstraint::bhkBallAndSocketConstraint(
        bhkBallAndSocketConstraint *this,
        int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8c306b*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8c3071*/
  ++unk_BA7CFC; /*0x8c307c*/
  unk_BA7CF8 = CurrentThreadId; /*0x8c3084*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8c3089*/
  v5 = v4; /*0x8c308e*/
  if ( v4 ) /*0x8c30a1*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8c30a5*/
    v5->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8c30aa*/
    v5[1].__vftable = 0; /*0x8c30b0*/
    ++unk_BA7D4C; /*0x8c30b7*/
    v5->__vftable = (NiObjectVtbl *)&bhkBallAndSocketConstraint::`vftable'; /*0x8c30bd*/
    ++unk_BA80E8; /*0x8c30c3*/
  }
  else
  {
    v5 = 0; /*0x8c30cb*/
  }
  sub_8A0860(this, (int)v5, a2); /*0x8c30dd*/
  if ( unk_BA7CFC-- == 1 ) /*0x8c30e2*/
    unk_BA7CF8 = 0; /*0x8c30ea*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8c30f9*/
  return (bhkBallAndSocketConstraint *)v5; /*0x8c3101*/
}
