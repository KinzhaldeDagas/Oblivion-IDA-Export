bhkMoppBvTreeShape *__thiscall bhkMoppBvTreeShape::bhkMoppBvTreeShape(bhkMoppBvTreeShape *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8c349c*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8c34a2*/
  ++unk_BA7CFC; /*0x8c34ad*/
  unk_BA7CF8 = CurrentThreadId; /*0x8c34b5*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8c34ba*/
  v5 = v4; /*0x8c34bf*/
  if ( v4 ) /*0x8c34d0*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8c34d4*/
    v5->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8c34d9*/
    v5[1].__vftable = 0; /*0x8c34df*/
    v5[1].members.m_uiRefCount = 0; /*0x8c34e2*/
    ++unk_BA7D70; /*0x8c34e5*/
    v5->__vftable = (NiObjectVtbl *)&bhkBvTreeShape::`vftable'; /*0x8c34eb*/
    ++unk_BA7F98; /*0x8c34f1*/
    v5->__vftable = (NiObjectVtbl *)&bhkMoppBvTreeShape::`vftable'; /*0x8c34f7*/
    ++unk_BA80F4; /*0x8c34fd*/
  }
  else
  {
    v5 = 0; /*0x8c3505*/
  }
  (*(void (__thiscall **)(bhkMoppBvTreeShape *, bhkRefObject *, int))(*(_DWORD *)this + 0x80))(this, v5, a2); /*0x8c351f*/
  if ( unk_BA7CFC-- == 1 ) /*0x8c3521*/
    unk_BA7CF8 = 0; /*0x8c3529*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8c3534*/
  return (bhkMoppBvTreeShape *)v5; /*0x8c353c*/
}
