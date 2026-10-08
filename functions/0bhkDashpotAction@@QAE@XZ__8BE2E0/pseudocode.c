bhkDashpotAction *__thiscall bhkDashpotAction::bhkDashpotAction(bhkDashpotAction *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8be30b*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8be311*/
  ++unk_BA7CFC; /*0x8be31c*/
  unk_BA7CF8 = CurrentThreadId; /*0x8be324*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8be329*/
  v5 = v4; /*0x8be32e*/
  if ( v4 ) /*0x8be341*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8be345*/
    v5->__vftable = (NiObjectVtbl *)&bhkAction::`vftable'; /*0x8be34a*/
    v5[1].__vftable = 0; /*0x8be350*/
    ++unk_BA7D00; /*0x8be357*/
    v5->__vftable = (NiObjectVtbl *)&bhkBinaryAction::`vftable'; /*0x8be35d*/
    ++unk_BA7D40; /*0x8be363*/
    v5->__vftable = (NiObjectVtbl *)&bhkDashpotAction::`vftable'; /*0x8be369*/
    ++unk_BA8070; /*0x8be36f*/
  }
  else
  {
    v5 = 0; /*0x8be377*/
  }
  (*(void (__thiscall **)(bhkDashpotAction *, bhkRefObject *, int))(*(_DWORD *)this + 0x88))(this, v5, a2); /*0x8be391*/
  if ( unk_BA7CFC-- == 1 ) /*0x8be393*/
    unk_BA7CF8 = 0; /*0x8be39b*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8be3aa*/
  return (bhkDashpotAction *)v5; /*0x8be3b2*/
}
