bhkRagdollConstraint *__thiscall bhkRagdollConstraint::bhkRagdollConstraint(bhkRagdollConstraint *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8c0a9b*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8c0aa1*/
  ++unk_BA7CFC; /*0x8c0aac*/
  unk_BA7CF8 = CurrentThreadId; /*0x8c0ab4*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8c0ab9*/
  v5 = v4; /*0x8c0abe*/
  if ( v4 ) /*0x8c0ad1*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8c0ad5*/
    v5->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8c0ada*/
    v5[1].__vftable = 0; /*0x8c0ae0*/
    ++unk_BA7D4C; /*0x8c0ae7*/
    v5->__vftable = (NiObjectVtbl *)&bhkRagdollConstraint::`vftable'; /*0x8c0aed*/
    ++unk_BA80B8; /*0x8c0af3*/
  }
  else
  {
    v5 = 0; /*0x8c0afb*/
  }
  sub_8A0860(this, (int)v5, a2); /*0x8c0b0d*/
  if ( unk_BA7CFC-- == 1 ) /*0x8c0b12*/
    unk_BA7CF8 = 0; /*0x8c0b1a*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8c0b29*/
  return (bhkRagdollConstraint *)v5; /*0x8c0b31*/
}
