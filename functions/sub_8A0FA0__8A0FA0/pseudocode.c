bhkRefObject *__thiscall sub_8A0FA0(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8a0fcc*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8a0fd2*/
  ++unk_BA7CFC; /*0x8a0fdd*/
  unk_BA7CF8 = CurrentThreadId; /*0x8a0fe5*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8a0fea*/
  v5 = v4; /*0x8a0fef*/
  if ( v4 ) /*0x8a1000*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8a1004*/
    v5->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8a1009*/
    v5[1].__vftable = 0; /*0x8a100f*/
    v5[1].members.m_uiRefCount = 0; /*0x8a1012*/
    ++unk_BA7D70; /*0x8a1015*/
    v5->__vftable = (NiObjectVtbl *)&bhkShapeCollection::`vftable'; /*0x8a101b*/
    ++unk_BA816C; /*0x8a1021*/
    v5->__vftable = (NiObjectVtbl *)&bhkListShape::`vftable'; /*0x8a1027*/
    ++unk_BA7D58; /*0x8a102d*/
  }
  else
  {
    v5 = 0; /*0x8a1035*/
  }
  (*(void (__thiscall **)(void *, bhkRefObject *, int))(*(_DWORD *)this + 0x80))(this, v5, a2); /*0x8a104f*/
  if ( unk_BA7CFC-- == 1 ) /*0x8a1051*/
    unk_BA7CF8 = 0; /*0x8a1059*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8a1064*/
  return v5; /*0x8a106c*/
}
