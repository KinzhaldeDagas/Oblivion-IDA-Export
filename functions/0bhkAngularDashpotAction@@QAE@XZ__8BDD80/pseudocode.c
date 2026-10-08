bhkAngularDashpotAction *__thiscall bhkAngularDashpotAction::bhkAngularDashpotAction(
        bhkAngularDashpotAction *this,
        int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8bddab*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8bddb1*/
  ++unk_BA7CFC; /*0x8bddbc*/
  unk_BA7CF8 = CurrentThreadId; /*0x8bddc4*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8bddc9*/
  v5 = v4; /*0x8bddce*/
  if ( v4 ) /*0x8bdde1*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8bdde5*/
    v5->__vftable = (NiObjectVtbl *)&bhkAction::`vftable'; /*0x8bddea*/
    v5[1].__vftable = 0; /*0x8bddf0*/
    ++unk_BA7D00; /*0x8bddf7*/
    v5->__vftable = (NiObjectVtbl *)&bhkBinaryAction::`vftable'; /*0x8bddfd*/
    ++unk_BA7D40; /*0x8bde03*/
    v5->__vftable = (NiObjectVtbl *)&bhkAngularDashpotAction::`vftable'; /*0x8bde09*/
    ++unk_BA8064; /*0x8bde0f*/
  }
  else
  {
    v5 = 0; /*0x8bde17*/
  }
  (*(void (__thiscall **)(bhkAngularDashpotAction *, bhkRefObject *, int))(*(_DWORD *)this + 0x88))(this, v5, a2); /*0x8bde31*/
  if ( unk_BA7CFC-- == 1 ) /*0x8bde33*/
    unk_BA7CF8 = 0; /*0x8bde3b*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8bde4a*/
  return (bhkAngularDashpotAction *)v5; /*0x8bde52*/
}
