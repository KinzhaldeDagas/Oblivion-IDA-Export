bhkRefObject *__thiscall sub_911E60(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x911e8b*/
  CurrentThreadId = GetCurrentThreadId(); /*0x911e91*/
  ++unk_BA7CFC; /*0x911e9c*/
  unk_BA7CF8 = CurrentThreadId; /*0x911ea4*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x911ea9*/
  v5 = v4; /*0x911eae*/
  if ( v4 ) /*0x911ec1*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x911ec5*/
    v5->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x911eca*/
    v5[1].__vftable = 0; /*0x911ed0*/
    ++unk_BA7D4C; /*0x911ed7*/
    v5->__vftable = (NiObjectVtbl *)&bhkGenericConstraint::`vftable'; /*0x911edd*/
    ++unk_BA8354; /*0x911ee3*/
  }
  else
  {
    v5 = 0; /*0x911eeb*/
  }
  sub_8A0860(this, (int)v5, a2); /*0x911efd*/
  if ( unk_BA7CFC-- == 1 ) /*0x911f02*/
    unk_BA7CF8 = 0; /*0x911f0a*/
  LeaveCriticalSection(&unk_BA7C80); /*0x911f19*/
  return v5; /*0x911f21*/
}
