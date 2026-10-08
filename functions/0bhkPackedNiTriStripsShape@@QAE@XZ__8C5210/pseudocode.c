bhkPackedNiTriStripsShape *__thiscall bhkPackedNiTriStripsShape::bhkPackedNiTriStripsShape(
        bhkPackedNiTriStripsShape *this,
        int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8c523c*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8c5242*/
  ++unk_BA7CFC; /*0x8c524d*/
  unk_BA7CF8 = CurrentThreadId; /*0x8c5255*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8c525a*/
  v5 = v4; /*0x8c525f*/
  if ( v4 ) /*0x8c5270*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8c5274*/
    v5->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8c5279*/
    v5[1].__vftable = 0; /*0x8c527f*/
    v5[1].members.m_uiRefCount = 0; /*0x8c5282*/
    ++unk_BA7D70; /*0x8c5285*/
    v5->__vftable = (NiObjectVtbl *)&bhkShapeCollection::`vftable'; /*0x8c528b*/
    ++unk_BA816C; /*0x8c5291*/
    v5->__vftable = (NiObjectVtbl *)&bhkPackedNiTriStripsShape::`vftable'; /*0x8c5297*/
    ++unk_BA8120; /*0x8c529d*/
  }
  else
  {
    v5 = 0; /*0x8c52a5*/
  }
  (*(void (__thiscall **)(bhkPackedNiTriStripsShape *, bhkRefObject *, int))(*(_DWORD *)this + 0x80))(this, v5, a2); /*0x8c52bf*/
  if ( unk_BA7CFC-- == 1 ) /*0x8c52c1*/
    unk_BA7CF8 = 0; /*0x8c52c9*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8c52d4*/
  return (bhkPackedNiTriStripsShape *)v5; /*0x8c52dc*/
}
