bhkRefObject *__thiscall sub_8BF050(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8bf07b*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8bf081*/
  ++unk_BA7CFC; /*0x8bf08c*/
  unk_BA7CF8 = CurrentThreadId; /*0x8bf094*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8bf099*/
  v5 = v4; /*0x8bf09e*/
  if ( v4 ) /*0x8bf0b1*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8bf0b5*/
    v5->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8bf0ba*/
    v5[1].__vftable = 0; /*0x8bf0c0*/
    ++unk_BA7D4C; /*0x8bf0c7*/
    v5->__vftable = (NiObjectVtbl *)&bhkMalleableConstraint::`vftable'; /*0x8bf0cd*/
    ++unk_BA8088; /*0x8bf0d3*/
  }
  else
  {
    v5 = 0; /*0x8bf0db*/
  }
  sub_8A0860(this, (int)v5, a2); /*0x8bf0ed*/
  if ( unk_BA7CFC-- == 1 ) /*0x8bf0f2*/
    unk_BA7CF8 = 0; /*0x8bf0fa*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8bf109*/
  return v5; /*0x8bf111*/
}
