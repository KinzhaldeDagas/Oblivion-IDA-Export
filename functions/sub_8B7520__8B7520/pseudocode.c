bhkRefObject *__thiscall sub_8B7520(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8b754c*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8b7552*/
  ++unk_BA7CFC; /*0x8b755d*/
  unk_BA7CF8 = CurrentThreadId; /*0x8b7565*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8b756a*/
  v5 = v4; /*0x8b756f*/
  if ( v4 ) /*0x8b7580*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8b7584*/
    v5->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8b7589*/
    v5[1].__vftable = 0; /*0x8b758f*/
    v5[1].members.m_uiRefCount = 0; /*0x8b7592*/
    ++unk_BA7D70; /*0x8b7595*/
    v5->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable'; /*0x8b759b*/
    ++unk_BA7F44; /*0x8b75a1*/
    v5->__vftable = (NiObjectVtbl *)&bhkMultiSphereShape::`vftable'; /*0x8b75a7*/
    ++unk_BA7FE8; /*0x8b75ad*/
  }
  else
  {
    v5 = 0; /*0x8b75b5*/
  }
  (*(void (__thiscall **)(void *, bhkRefObject *, int))(*(_DWORD *)this + 0x80))(this, v5, a2); /*0x8b75cf*/
  if ( unk_BA7CFC-- == 1 ) /*0x8b75d1*/
    unk_BA7CF8 = 0; /*0x8b75d9*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8b75e4*/
  return v5; /*0x8b75ec*/
}
