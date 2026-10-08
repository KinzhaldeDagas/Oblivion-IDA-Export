bhkRefObject *__thiscall sub_89E4D0(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x89e4fb*/
  CurrentThreadId = GetCurrentThreadId(); /*0x89e501*/
  ++unk_BA7CFC; /*0x89e50c*/
  unk_BA7CF8 = CurrentThreadId; /*0x89e514*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x89e519*/
  v5 = v4; /*0x89e51e*/
  if ( v4 ) /*0x89e531*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x89e535*/
    v5->__vftable = (NiObjectVtbl *)&bhkAction::`vftable'; /*0x89e53a*/
    v5[1].__vftable = 0; /*0x89e540*/
    ++unk_BA7D00; /*0x89e547*/
    v5->__vftable = (NiObjectVtbl *)&bhkUnaryAction::`vftable'; /*0x89e54d*/
    ++unk_BA7D0C; /*0x89e553*/
    v5->__vftable = (NiObjectVtbl *)&bhkMouseSpringAction::`vftable'; /*0x89e559*/
    ++unk_BA7D18; /*0x89e55f*/
  }
  else
  {
    v5 = 0; /*0x89e567*/
  }
  sub_89E1A0(this, (int)v5, a2); /*0x89e579*/
  if ( unk_BA7CFC-- == 1 ) /*0x89e57e*/
    unk_BA7CF8 = 0; /*0x89e586*/
  LeaveCriticalSection(&unk_BA7C80); /*0x89e595*/
  return v5; /*0x89e59d*/
}
