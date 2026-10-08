bhkStiffSpringConstraint *__thiscall bhkStiffSpringConstraint::bhkStiffSpringConstraint(
        bhkStiffSpringConstraint *this,
        int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8c067b*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8c0681*/
  ++unk_BA7CFC; /*0x8c068c*/
  unk_BA7CF8 = CurrentThreadId; /*0x8c0694*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8c0699*/
  v5 = v4; /*0x8c069e*/
  if ( v4 ) /*0x8c06b1*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8c06b5*/
    v5->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8c06ba*/
    v5[1].__vftable = 0; /*0x8c06c0*/
    ++unk_BA7D4C; /*0x8c06c7*/
    v5->__vftable = (NiObjectVtbl *)&bhkStiffSpringConstraint::`vftable'; /*0x8c06cd*/
    ++unk_BA80AC; /*0x8c06d3*/
  }
  else
  {
    v5 = 0; /*0x8c06db*/
  }
  sub_8A0860(this, (int)v5, a2); /*0x8c06ed*/
  if ( unk_BA7CFC-- == 1 ) /*0x8c06f2*/
    unk_BA7CF8 = 0; /*0x8c06fa*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8c0709*/
  return (bhkStiffSpringConstraint *)v5; /*0x8c0711*/
}
