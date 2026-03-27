bhkMoppBvTreeShape *__thiscall bhkMoppBvTreeShape::bhkMoppBvTreeShape(bhkMoppBvTreeShape *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&stru_BA7C80);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_BA7CFC;
  dword_BA7CF8 = CurrentThreadId;
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u);
  v5 = v4;
  if ( v4 )
  {
    bhkRefObject::bhkRefObject(v4);
    v5->__vftable = (NiObjectVtbl *)&bhkShape::`vftable';
    v5[1].__vftable = 0;
    v5[1].members.m_uiRefCount = 0;
    ++dword_BA7D70;
    v5->__vftable = (NiObjectVtbl *)&bhkBvTreeShape::`vftable';
    ++dword_BA7F98;
    v5->__vftable = (NiObjectVtbl *)&bhkMoppBvTreeShape::`vftable';
    ++dword_BA80F4;
  }
  else
  {
    v5 = 0;
  }
  (*(void (__thiscall **)(bhkMoppBvTreeShape *, bhkRefObject *, int))(*(_DWORD *)this + 0x80))(this, v5, a2);
  if ( dword_BA7CFC-- == 1 )
    dword_BA7CF8 = 0;
  LeaveCriticalSection(&stru_BA7C80);
  return (bhkMoppBvTreeShape *)v5;
}
