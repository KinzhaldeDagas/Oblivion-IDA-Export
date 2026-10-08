bhkRefObject *__thiscall sub_8C20C0(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8c20eb*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8c20f1*/
  ++unk_BA7CFC; /*0x8c20fc*/
  unk_BA7CF8 = CurrentThreadId; /*0x8c2104*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8c2109*/
  v5 = v4; /*0x8c210e*/
  if ( v4 ) /*0x8c2121*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8c2125*/
    v5->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8c212a*/
    v5[1].__vftable = 0; /*0x8c2130*/
    ++unk_BA7D4C; /*0x8c2137*/
    v5->__vftable = (NiObjectVtbl *)&bhkGenericConstraint::`vftable'; /*0x8c213d*/
    ++unk_BA8354; /*0x8c2143*/
    v5->__vftable = (NiObjectVtbl *)&bhkFixedConstraint::`vftable'; /*0x8c2149*/
    ++unk_BA80D0; /*0x8c214f*/
  }
  else
  {
    v5 = 0; /*0x8c2157*/
  }
  sub_8A0860(this, (int)v5, a2); /*0x8c2169*/
  if ( unk_BA7CFC-- == 1 ) /*0x8c216e*/
    unk_BA7CF8 = 0; /*0x8c2176*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8c2185*/
  return v5; /*0x8c218d*/
}
