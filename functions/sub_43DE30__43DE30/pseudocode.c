void __thiscall sub_43DE30(_DWORD *this, TESChildCELL *a2)
{
  TESChildCELL *v3; // ebp
  _DWORD *v4; // ecx
  volatile LONG *v5; // esi
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v7; // [esp+14h] [ebp-20h] BYREF
  _DWORD v8[3]; // [esp+18h] [ebp-1Ch] BYREF
  int v9; // [esp+24h] [ebp-10h]
  int v10; // [esp+30h] [ebp-4h]

  v8[0] = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::LockFreeMapIterator::`vftable'; /*0x43de5b*/
  v8[1] = 0; /*0x43de63*/
  v8[2] = 0; /*0x43de67*/
  LOBYTE(v9) = 0; /*0x43de6b*/
  v3 = a2; /*0x43de6f*/
  v10 = 0; /*0x43de73*/
  do /*0x43deea*/
  {
    a2 = 0; /*0x43de80*/
    v7 = 0; /*0x43de84*/
    v4 = (_DWORD *)*(this + 2); /*0x43de94*/
    LOBYTE(v10) = 1; /*0x43de9c*/
    if ( sub_642D90(v4, (int)v8, &a2, &v7, 1) ) /*0x43dea1*/
    {
      v5 = (volatile LONG *)a2; /*0x43deaa*/
      if ( (TESChildCELL *)Shared_GetDwordAtOffset40(a2) == v3 ) /*0x43deb7*/
        sub_439DC0((_DWORD **)this, v5); /*0x43debc*/
    }
    v6 = (void (__thiscall ***)(_DWORD, int))v7; /*0x43dec1*/
    LOBYTE(v10) = 0; /*0x43dec7*/
    if ( v7 ) /*0x43decb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) ) /*0x43ded1*/
        (**v6)(v6, 1); /*0x43dee3*/
    }
  }
  while ( (v9 & 2) == 0 ); /*0x43deea*/
}
