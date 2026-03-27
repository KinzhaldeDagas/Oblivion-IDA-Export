bhkCylinderShape *__thiscall sub_8C8170(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkCylinderShape *v4; // eax
  bhkCylinderShape *v5; // edi

  EnterCriticalSection(&stru_BA7C80);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_BA7CFC;
  dword_BA7CF8 = CurrentThreadId;
  v4 = (bhkCylinderShape *)FormHeapAlloc(0x14u);
  if ( v4 )
    v5 = bhkCylinderShape::bhkCylinderShape(v4);
  else
    v5 = 0;
  (*(void (__thiscall **)(void *, bhkCylinderShape *, int))(*(_DWORD *)this + 0x80))(this, v5, a2);
  if ( dword_BA7CFC-- == 1 )
    dword_BA7CF8 = 0;
  LeaveCriticalSection(&stru_BA7C80);
  return v5;
}
