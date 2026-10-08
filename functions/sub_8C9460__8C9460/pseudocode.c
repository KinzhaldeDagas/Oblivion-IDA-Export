bhkConvexTransformShape *__thiscall sub_8C9460(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkConvexTransformShape *v4; // eax
  bhkConvexTransformShape *v5; // edi

  EnterCriticalSection(&unk_BA7C80); /*0x8c948a*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8c9490*/
  ++unk_BA7CFC; /*0x8c9496*/
  unk_BA7CF8 = CurrentThreadId; /*0x8c949f*/
  v4 = (bhkConvexTransformShape *)FormHeapAlloc(0x14u); /*0x8c94a4*/
  if ( v4 ) /*0x8c94ba*/
    v5 = bhkConvexTransformShape::bhkConvexTransformShape(v4); /*0x8c94c3*/
  else
    v5 = 0; /*0x8c94c7*/
  (*(void (__thiscall **)(void *, bhkConvexTransformShape *, int))(*(_DWORD *)this + 0x80))(this, v5, a2); /*0x8c94e1*/
  if ( unk_BA7CFC-- == 1 ) /*0x8c94e3*/
    unk_BA7CF8 = 0; /*0x8c94ec*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8c94fb*/
  return v5; /*0x8c9503*/
}
