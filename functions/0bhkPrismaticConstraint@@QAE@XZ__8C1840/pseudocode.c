bhkPrismaticConstraint *__thiscall bhkPrismaticConstraint::bhkPrismaticConstraint(bhkPrismaticConstraint *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8c186b*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8c1871*/
  ++unk_BA7CFC; /*0x8c187c*/
  unk_BA7CF8 = CurrentThreadId; /*0x8c1884*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8c1889*/
  v5 = v4; /*0x8c188e*/
  if ( v4 ) /*0x8c18a1*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8c18a5*/
    v5->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8c18aa*/
    v5[1].__vftable = 0; /*0x8c18b0*/
    ++unk_BA7D4C; /*0x8c18b7*/
    v5->__vftable = (NiObjectVtbl *)&bhkPrismaticConstraint::`vftable'; /*0x8c18bd*/
    ++unk_BA80C4; /*0x8c18c3*/
  }
  else
  {
    v5 = 0; /*0x8c18cb*/
  }
  sub_8A0860(this, (int)v5, a2); /*0x8c18dd*/
  if ( unk_BA7CFC-- == 1 ) /*0x8c18e2*/
    unk_BA7CF8 = 0; /*0x8c18ea*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8c18f9*/
  return (bhkPrismaticConstraint *)v5; /*0x8c1901*/
}
