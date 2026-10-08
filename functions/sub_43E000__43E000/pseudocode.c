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

  v9[0] = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::LockFreeMapIterator::`vftable'; /*0x43e02b*/
  v9[1] = 0; /*0x43e033*/
  v9[2] = 0; /*0x43e037*/
  LOBYTE(v10) = 0; /*0x43e03b*/
  v11 = 0; /*0x43e045*/
  while ( 1 ) /*0x43e050*/
  {
    v8 = 0; /*0x43e050*/
    v7 = 0; /*0x43e054*/
    v3 = (_DWORD *)*(this + 2); /*0x43e064*/
    LOBYTE(v11) = 1; /*0x43e06c*/
    if ( sub_642D90(v3, (int)v9, &v8, &v7, 1) ) /*0x43e071*/
    {
      if ( (TESObjectCELL *)Shared_GetDwordAtOffset40(v8) == a2 ) /*0x43e087*/
        break; /*0x43e087*/
    }
    v4 = (void (__thiscall ***)(_DWORD, int))v7; /*0x43e089*/
    LOBYTE(v11) = 0; /*0x43e08f*/
    if ( v7 ) /*0x43e093*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) ) /*0x43e099*/
        (**v4)(v4, 1); /*0x43e0a7*/
    }
    if ( (v10 & 2) != 0 ) /*0x43e0ae*/
      return 0; /*0x43e0c5*/
  }
  v6 = (void (__thiscall ***)(_DWORD, int))v7; /*0x43e0c8*/
  LOBYTE(v11) = 0; /*0x43e0ce*/
  if ( v7 ) /*0x43e0d2*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) ) /*0x43e0d8*/
      (**v6)(v6, 1); /*0x43e0e6*/
  }
  return 1; /*0x43e0b2*/
}
