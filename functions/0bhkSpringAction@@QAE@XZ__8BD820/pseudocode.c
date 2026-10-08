bhkSpringAction *__thiscall bhkSpringAction::bhkSpringAction(bhkSpringAction *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8bd84b*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8bd851*/
  ++unk_BA7CFC; /*0x8bd85c*/
  unk_BA7CF8 = CurrentThreadId; /*0x8bd864*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8bd869*/
  v5 = v4; /*0x8bd86e*/
  if ( v4 ) /*0x8bd881*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8bd885*/
    v5->__vftable = (NiObjectVtbl *)&bhkAction::`vftable'; /*0x8bd88a*/
    v5[1].__vftable = 0; /*0x8bd890*/
    ++unk_BA7D00; /*0x8bd897*/
    v5->__vftable = (NiObjectVtbl *)&bhkBinaryAction::`vftable'; /*0x8bd89d*/
    ++unk_BA7D40; /*0x8bd8a3*/
    v5->__vftable = (NiObjectVtbl *)&bhkSpringAction::`vftable'; /*0x8bd8a9*/
    ++unk_BA8058; /*0x8bd8af*/
  }
  else
  {
    v5 = 0; /*0x8bd8b7*/
  }
  (*(void (__thiscall **)(bhkSpringAction *, bhkRefObject *, int))(*(_DWORD *)this + 0x88))(this, v5, a2); /*0x8bd8d1*/
  if ( unk_BA7CFC-- == 1 ) /*0x8bd8d3*/
    unk_BA7CF8 = 0; /*0x8bd8db*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8bd8ea*/
  return (bhkSpringAction *)v5; /*0x8bd8f2*/
}
