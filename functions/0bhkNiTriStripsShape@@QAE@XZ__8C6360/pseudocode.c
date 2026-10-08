bhkNiTriStripsShape *__thiscall bhkNiTriStripsShape::bhkNiTriStripsShape(bhkNiTriStripsShape *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8c638c*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8c6392*/
  ++unk_BA7CFC; /*0x8c639d*/
  unk_BA7CF8 = CurrentThreadId; /*0x8c63a5*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8c63aa*/
  v5 = v4; /*0x8c63af*/
  if ( v4 ) /*0x8c63c0*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8c63c4*/
    v5->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8c63c9*/
    v5[1].__vftable = 0; /*0x8c63cf*/
    v5[1].members.m_uiRefCount = 0; /*0x8c63d2*/
    ++unk_BA7D70; /*0x8c63d5*/
    v5->__vftable = (NiObjectVtbl *)&bhkShapeCollection::`vftable'; /*0x8c63db*/
    ++unk_BA816C; /*0x8c63e1*/
    v5->__vftable = (NiObjectVtbl *)&bhkNiTriStripsShape::`vftable'; /*0x8c63e7*/
    ++unk_BA812C; /*0x8c63ed*/
  }
  else
  {
    v5 = 0; /*0x8c63f5*/
  }
  (*(void (__thiscall **)(bhkNiTriStripsShape *, bhkRefObject *, int))(*(_DWORD *)this + 0x80))(this, v5, a2); /*0x8c640f*/
  if ( unk_BA7CFC-- == 1 ) /*0x8c6411*/
    unk_BA7CF8 = 0; /*0x8c6419*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8c6424*/
  return (bhkNiTriStripsShape *)v5; /*0x8c642c*/
}
