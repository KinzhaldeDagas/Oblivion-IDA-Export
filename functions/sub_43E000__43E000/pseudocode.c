char __thiscall sub_43E000(_DWORD *this, TESObjectCELL *a2)
{
  _DWORD *v3; // ecx
  void (__thiscall ***v4)(_DWORD, int); // esi
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v7; // [esp+14h] [ebp-24h] BYREF
  TESChildCELL *v8; // [esp+18h] [ebp-20h] BYREF
  _DWORD v9[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v10; // [esp+28h] [ebp-10h]
  int v11; // [esp+34h] [ebp-4h]

  v9[0] = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::LockFreeMapIterator::`vftable';
  v9[1] = 0;
  v9[2] = 0;
  LOBYTE(v10) = 0;
  v11 = 0;
  while ( 1 )
  {
    v8 = 0;
    v7 = 0;
    v3 = (_DWORD *)*(this + 2);
    LOBYTE(v11) = 1;
    if ( sub_642D90(v3, (int)v9, &v8, &v7, 1) )
    {
      if ( TESObjectREFR_GetParentCell((TESObjectREFR *)v8) == a2 )
        break;
    }
    v4 = (void (__thiscall ***)(_DWORD, int))v7;
    LOBYTE(v11) = 0;
    if ( v7 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) )
        (**v4)(v4, 1);
    }
    if ( (v10 & 2) != 0 )
      return 0;
  }
  v6 = (void (__thiscall ***)(_DWORD, int))v7;
  LOBYTE(v11) = 0;
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) )
      (**v6)(v6, 1);
  }
  return 1;
}
