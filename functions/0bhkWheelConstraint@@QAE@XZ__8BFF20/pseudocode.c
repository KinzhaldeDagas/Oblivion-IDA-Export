bhkWheelConstraint *__thiscall bhkWheelConstraint::bhkWheelConstraint(bhkWheelConstraint *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8bff4b*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8bff51*/
  ++unk_BA7CFC; /*0x8bff5c*/
  unk_BA7CF8 = CurrentThreadId; /*0x8bff64*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8bff69*/
  v5 = v4; /*0x8bff6e*/
  if ( v4 ) /*0x8bff81*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8bff85*/
    v5->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8bff8a*/
    v5[1].__vftable = 0; /*0x8bff90*/
    ++unk_BA7D4C; /*0x8bff97*/
    v5->__vftable = (NiObjectVtbl *)&bhkWheelConstraint::`vftable'; /*0x8bff9d*/
    ++unk_BA80A0; /*0x8bffa3*/
  }
  else
  {
    v5 = 0; /*0x8bffab*/
  }
  sub_8A0860(this, (int)v5, a2); /*0x8bffbd*/
  if ( unk_BA7CFC-- == 1 ) /*0x8bffc2*/
    unk_BA7CF8 = 0; /*0x8bffca*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8bffd9*/
  return (bhkWheelConstraint *)v5; /*0x8bffe1*/
}
