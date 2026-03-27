bhkPackedNiTriStripsShape *__thiscall bhkPackedNiTriStripsShape::bhkPackedNiTriStripsShape(
        bhkPackedNiTriStripsShape *this,
        int a2)
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
    v5->__vftable = (NiObjectVtbl *)&bhkShapeCollection::`vftable';
    ++dword_BA816C;
    v5->__vftable = (NiObjectVtbl *)&bhkPackedNiTriStripsShape::`vftable';
    ++dword_BA8120;
  }
  else
  {
    v5 = 0;
  }
  (*(void (__thiscall **)(bhkPackedNiTriStripsShape *, bhkRefObject *, int))(*(_DWORD *)this + 0x80))(this, v5, a2);
  if ( dword_BA7CFC-- == 1 )
    dword_BA7CF8 = 0;
  LeaveCriticalSection(&stru_BA7C80);
  return (bhkPackedNiTriStripsShape *)v5;
}
