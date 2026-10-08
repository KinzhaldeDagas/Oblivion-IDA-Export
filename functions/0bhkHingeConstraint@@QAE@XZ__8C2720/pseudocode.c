bhkHingeConstraint *__thiscall bhkHingeConstraint::bhkHingeConstraint(bhkHingeConstraint *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8c274b*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8c2751*/
  ++unk_BA7CFC; /*0x8c275c*/
  unk_BA7CF8 = CurrentThreadId; /*0x8c2764*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8c2769*/
  v5 = v4; /*0x8c276e*/
  if ( v4 ) /*0x8c2781*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8c2785*/
    v5->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8c278a*/
    v5[1].__vftable = 0; /*0x8c2790*/
    ++unk_BA7D4C; /*0x8c2797*/
    v5->__vftable = (NiObjectVtbl *)&bhkHingeConstraint::`vftable'; /*0x8c279d*/
    ++unk_BA80DC; /*0x8c27a3*/
  }
  else
  {
    v5 = 0; /*0x8c27ab*/
  }
  sub_8A0860(this, (int)v5, a2); /*0x8c27bd*/
  if ( unk_BA7CFC-- == 1 ) /*0x8c27c2*/
    unk_BA7CF8 = 0; /*0x8c27ca*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8c27d9*/
  return (bhkHingeConstraint *)v5; /*0x8c27e1*/
}
