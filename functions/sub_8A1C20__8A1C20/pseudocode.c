bhkRefObject *__thiscall sub_8A1C20(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8a1c4c*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8a1c52*/
  ++unk_BA7CFC; /*0x8a1c5d*/
  unk_BA7CF8 = CurrentThreadId; /*0x8a1c65*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8a1c6a*/
  v5 = v4; /*0x8a1c6f*/
  if ( v4 ) /*0x8a1c80*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8a1c84*/
    v5->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8a1c89*/
    v5[1].__vftable = 0; /*0x8a1c8f*/
    v5[1].members.m_uiRefCount = 0; /*0x8a1c92*/
    ++unk_BA7D70; /*0x8a1c95*/
    v5->__vftable = (NiObjectVtbl *)&bhkTransformShape::`vftable'; /*0x8a1c9b*/
    ++unk_BA7D64; /*0x8a1ca1*/
  }
  else
  {
    v5 = 0; /*0x8a1ca9*/
  }
  (*(void (__thiscall **)(void *, bhkRefObject *, int))(*(_DWORD *)this + 0x80))(this, v5, a2); /*0x8a1cc3*/
  if ( unk_BA7CFC-- == 1 ) /*0x8a1cc5*/
    unk_BA7CF8 = 0; /*0x8a1ccd*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8a1cd8*/
  return v5; /*0x8a1ce0*/
}
