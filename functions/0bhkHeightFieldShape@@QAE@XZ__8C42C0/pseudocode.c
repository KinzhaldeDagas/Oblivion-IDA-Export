bhkHeightFieldShape *__thiscall bhkHeightFieldShape::bhkHeightFieldShape(bhkHeightFieldShape *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8c42ec*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8c42f2*/
  ++unk_BA7CFC; /*0x8c42fd*/
  unk_BA7CF8 = CurrentThreadId; /*0x8c4305*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8c430a*/
  v5 = v4; /*0x8c430f*/
  if ( v4 ) /*0x8c4320*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8c4324*/
    v5->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8c4329*/
    v5[1].__vftable = 0; /*0x8c432f*/
    v5[1].members.m_uiRefCount = 0; /*0x8c4332*/
    ++unk_BA7D70; /*0x8c4335*/
    v5->__vftable = (NiObjectVtbl *)&bhkHeightFieldShape::`vftable'; /*0x8c433b*/
    ++unk_BA8400; /*0x8c4341*/
    v5->__vftable = (NiObjectVtbl *)&bhkPlaneShape::`vftable'; /*0x8c4347*/
    ++unk_BA810C; /*0x8c434d*/
  }
  else
  {
    v5 = 0; /*0x8c4355*/
  }
  (*(void (__thiscall **)(bhkHeightFieldShape *, bhkRefObject *, int))(*(_DWORD *)this + 0x80))(this, v5, a2); /*0x8c436f*/
  if ( unk_BA7CFC-- == 1 ) /*0x8c4371*/
    unk_BA7CF8 = 0; /*0x8c4379*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8c4384*/
  return (bhkHeightFieldShape *)v5; /*0x8c438c*/
}
