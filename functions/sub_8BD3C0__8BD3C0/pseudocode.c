bhkCachingShapePhantom *__thiscall sub_8BD3C0(void *this, _DWORD **a2)
{
  DWORD CurrentThreadId; // eax
  bhkCachingShapePhantom *v4; // eax
  bhkCachingShapePhantom *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8bd3ea*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8bd3f0*/
  ++unk_BA7CFC; /*0x8bd3f6*/
  unk_BA7CF8 = CurrentThreadId; /*0x8bd3ff*/
  v4 = (bhkCachingShapePhantom *)FormHeapAlloc(0x14u); /*0x8bd404*/
  if ( v4 ) /*0x8bd41a*/
    v5 = bhkCachingShapePhantom::bhkCachingShapePhantom(v4); /*0x8bd423*/
  else
    v5 = 0; /*0x8bd427*/
  sub_89F5D0(this, (int)v5, a2); /*0x8bd439*/
  if ( unk_BA7CFC-- == 1 ) /*0x8bd43e*/
    unk_BA7CF8 = 0; /*0x8bd447*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8bd456*/
  return v5; /*0x8bd45e*/
}
