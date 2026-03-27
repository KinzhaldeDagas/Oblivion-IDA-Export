bhkRefObject *__thiscall sub_89E4D0(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&stru_BA7C80);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_BA7CFC;
  dword_BA7CF8 = CurrentThreadId;
  v4 = (bhkRefObject *)FormHeapAlloc(0x10u);
  v5 = v4;
  if ( v4 )
  {
    bhkRefObject::bhkRefObject(v4);
    v5->__vftable = (NiObjectVtbl *)&bhkAction::`vftable';
    v5[1].__vftable = 0;
    ++dword_BA7D00;
    v5->__vftable = (NiObjectVtbl *)&bhkUnaryAction::`vftable';
    ++dword_BA7D0C;
    v5->__vftable = (NiObjectVtbl *)&bhkMouseSpringAction::`vftable';
    ++dword_BA7D18;
  }
  else
  {
    v5 = 0;
  }
  sub_89E1A0(this, (int)v5, a2);
  if ( dword_BA7CFC-- == 1 )
    dword_BA7CF8 = 0;
  LeaveCriticalSection(&stru_BA7C80);
  return v5;
}
