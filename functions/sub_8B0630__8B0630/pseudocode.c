bhkRefObject *__thiscall sub_8B0630(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8b065c*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8b0662*/
  ++unk_BA7CFC; /*0x8b066d*/
  unk_BA7CF8 = CurrentThreadId; /*0x8b0675*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8b067a*/
  v5 = v4; /*0x8b067f*/
  if ( v4 ) /*0x8b0690*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8b0694*/
    v5->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8b0699*/
    v5[1].__vftable = 0; /*0x8b069f*/
    v5[1].members.m_uiRefCount = 0; /*0x8b06a2*/
    ++unk_BA7D70; /*0x8b06a5*/
    v5->__vftable = (NiObjectVtbl *)&bhkBvTreeShape::`vftable'; /*0x8b06ab*/
    ++unk_BA7F98; /*0x8b06b1*/
    v5->__vftable = (NiObjectVtbl *)&bhkTriSampledHeightFieldBvTreeShape::`vftable'; /*0x8b06b7*/
    ++unk_BA7FA4; /*0x8b06bd*/
  }
  else
  {
    v5 = 0; /*0x8b06c5*/
  }
  (*(void (__thiscall **)(void *, bhkRefObject *, int))(*(_DWORD *)this + 0x80))(this, v5, a2); /*0x8b06df*/
  if ( unk_BA7CFC-- == 1 ) /*0x8b06e1*/
    unk_BA7CF8 = 0; /*0x8b06e9*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8b06f4*/
  return v5; /*0x8b06fc*/
}
