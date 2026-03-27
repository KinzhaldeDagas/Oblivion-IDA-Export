void __thiscall sub_43DE30(_DWORD *this, TESChildCELL *a2)
{
  TESObjectCELL *v3; // ebp
  _DWORD *v4; // ecx
  volatile LONG *v5; // esi
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v7; // [esp+14h] [ebp-20h] BYREF
  _DWORD v8[3]; // [esp+18h] [ebp-1Ch] BYREF
  int v9; // [esp+24h] [ebp-10h]
  int v10; // [esp+30h] [ebp-4h]

  v8[0] = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::LockFreeMapIterator::`vftable';
  v8[1] = 0;
  v8[2] = 0;
  LOBYTE(v9) = 0;
  v3 = (TESObjectCELL *)a2;
  v10 = 0;
  do
  {
    a2 = 0;
    v7 = 0;
    v4 = (_DWORD *)*(this + 2);
    LOBYTE(v10) = 1;
    if ( sub_642D90(v4, (int)v8, &a2, &v7, 1) )
    {
      v5 = (volatile LONG *)a2;
      if ( TESObjectREFR_GetParentCell((TESObjectREFR *)a2) == v3 )
        sub_439DC0((_DWORD **)this, v5);
    }
    v6 = (void (__thiscall ***)(_DWORD, int))v7;
    LOBYTE(v10) = 0;
    if ( v7 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) )
        (**v6)(v6, 1);
    }
  }
  while ( (v9 & 2) == 0 );
}
