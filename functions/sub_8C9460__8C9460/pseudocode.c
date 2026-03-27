bhkConvexTransformShape *__thiscall sub_8C9460(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkConvexTransformShape *v4; // eax
  bhkConvexTransformShape *v5; // edi

  EnterCriticalSection(&stru_BA7C80);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_BA7CFC;
  dword_BA7CF8 = CurrentThreadId;
  v4 = (bhkConvexTransformShape *)FormHeapAlloc(0x14u);
  if ( v4 )
    v5 = bhkConvexTransformShape::bhkConvexTransformShape(v4);
  else
    v5 = 0;
  (*(void (__thiscall **)(void *, bhkConvexTransformShape *, int))(*(_DWORD *)this + 0x80))(this, v5, a2);
  if ( dword_BA7CFC-- == 1 )
    dword_BA7CF8 = 0;
  LeaveCriticalSection(&stru_BA7C80);
  return v5;
}
