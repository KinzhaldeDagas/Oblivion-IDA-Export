bhkCylinderShape *__thiscall sub_8C8170(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkCylinderShape *v4; // eax
  bhkCylinderShape *v5; // edi

  EnterCriticalSection(&unk_BA7C80); /*0x8c819a*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8c81a0*/
  ++unk_BA7CFC; /*0x8c81a6*/
  unk_BA7CF8 = CurrentThreadId; /*0x8c81af*/
  v4 = (bhkCylinderShape *)FormHeapAlloc(0x14u); /*0x8c81b4*/
  if ( v4 ) /*0x8c81ca*/
    v5 = bhkCylinderShape::bhkCylinderShape(v4); /*0x8c81d3*/
  else
    v5 = 0; /*0x8c81d7*/
  (*(void (__thiscall **)(void *, bhkCylinderShape *, int))(*(_DWORD *)this + 0x80))(this, v5, a2); /*0x8c81f1*/
  if ( unk_BA7CFC-- == 1 ) /*0x8c81f3*/
    unk_BA7CF8 = 0; /*0x8c81fc*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8c820b*/
  return v5; /*0x8c8213*/
}
