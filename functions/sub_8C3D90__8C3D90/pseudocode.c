bhkTriangleShape *__thiscall sub_8C3D90(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkTriangleShape *v4; // eax
  bhkTriangleShape *v5; // edi

  EnterCriticalSection(&unk_BA7C80); /*0x8c3dba*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8c3dc0*/
  ++unk_BA7CFC; /*0x8c3dc6*/
  unk_BA7CF8 = CurrentThreadId; /*0x8c3dcf*/
  v4 = (bhkTriangleShape *)FormHeapAlloc(0x14u); /*0x8c3dd4*/
  if ( v4 ) /*0x8c3dea*/
    v5 = bhkTriangleShape::bhkTriangleShape(v4); /*0x8c3df3*/
  else
    v5 = 0; /*0x8c3df7*/
  (*(void (__thiscall **)(void *, bhkTriangleShape *, int))(*(_DWORD *)this + 0x80))(this, v5, a2); /*0x8c3e11*/
  if ( unk_BA7CFC-- == 1 ) /*0x8c3e13*/
    unk_BA7CF8 = 0; /*0x8c3e1c*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8c3e2b*/
  return v5; /*0x8c3e33*/
}
