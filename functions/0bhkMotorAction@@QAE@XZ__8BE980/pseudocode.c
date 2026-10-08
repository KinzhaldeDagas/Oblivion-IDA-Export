bhkMotorAction *__thiscall bhkMotorAction::bhkMotorAction(bhkMotorAction *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8be9ab*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8be9b1*/
  ++unk_BA7CFC; /*0x8be9bc*/
  unk_BA7CF8 = CurrentThreadId; /*0x8be9c4*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8be9c9*/
  v5 = v4; /*0x8be9ce*/
  if ( v4 ) /*0x8be9e1*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8be9e5*/
    v5->__vftable = (NiObjectVtbl *)&bhkAction::`vftable'; /*0x8be9ea*/
    v5[1].__vftable = 0; /*0x8be9f0*/
    ++unk_BA7D00; /*0x8be9f7*/
    v5->__vftable = (NiObjectVtbl *)&bhkUnaryAction::`vftable'; /*0x8be9fd*/
    ++unk_BA7D0C; /*0x8bea03*/
    v5->__vftable = (NiObjectVtbl *)&bhkMotorAction::`vftable'; /*0x8bea09*/
    ++unk_BA807C; /*0x8bea0f*/
  }
  else
  {
    v5 = 0; /*0x8bea17*/
  }
  sub_89E1A0(this, (int)v5, a2); /*0x8bea29*/
  if ( unk_BA7CFC-- == 1 ) /*0x8bea2e*/
    unk_BA7CF8 = 0; /*0x8bea36*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8bea45*/
  return (bhkMotorAction *)v5; /*0x8bea4d*/
}
