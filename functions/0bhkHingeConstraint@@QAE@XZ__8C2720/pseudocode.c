bhkHingeConstraint *__thiscall bhkHingeConstraint::bhkHingeConstraint(bhkHingeConstraint *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&stru_BA7C80);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_BA7CFC;
  dword_BA7CF8 = CurrentThreadId;
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u);
  v5 = v4;
  if ( v4 )
  {
    bhkRefObject::bhkRefObject(v4);
    v5->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable';
    v5[1].__vftable = 0;
    ++dword_BA7D4C;
    v5->__vftable = (NiObjectVtbl *)&bhkHingeConstraint::`vftable';
    ++dword_BA80DC;
  }
  else
  {
    v5 = 0;
  }
  sub_8A0860(this, (int)v5, a2);
  if ( dword_BA7CFC-- == 1 )
    dword_BA7CF8 = 0;
  LeaveCriticalSection(&stru_BA7C80);
  return (bhkHingeConstraint *)v5;
}
