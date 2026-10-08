bhkRefObject *__thiscall sub_8B2C70(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8b2c9b*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8b2ca1*/
  ++unk_BA7CFC; /*0x8b2cac*/
  unk_BA7CF8 = CurrentThreadId; /*0x8b2cb4*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8b2cb9*/
  v5 = v4; /*0x8b2cbe*/
  if ( v4 ) /*0x8b2cd1*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8b2cd5*/
    v5->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8b2cda*/
    v5[1].__vftable = 0; /*0x8b2ce0*/
    ++unk_BA7D4C; /*0x8b2ce7*/
    v5->__vftable = (NiObjectVtbl *)&bhkLimitedHingeConstraint::`vftable'; /*0x8b2ced*/
    ++unk_BA7FC8; /*0x8b2cf3*/
  }
  else
  {
    v5 = 0; /*0x8b2cfb*/
  }
  sub_8A0860(this, (int)v5, a2); /*0x8b2d0d*/
  if ( unk_BA7CFC-- == 1 ) /*0x8b2d12*/
    unk_BA7CF8 = 0; /*0x8b2d1a*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8b2d29*/
  return v5; /*0x8b2d31*/
}
