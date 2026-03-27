char __thiscall sub_43E0F0(_DWORD *this)
{
  _DWORD *v2; // ecx
  char v3; // al
  volatile LONG *v4; // esi
  _DWORD *v5; // ecx
  char v6; // al
  volatile LONG *v7; // esi
  _DWORD *v8; // ecx
  char v9; // al
  volatile LONG *v10; // esi
  volatile LONG *v12; // [esp+14h] [ebp-44h] BYREF
  int v13; // [esp+18h] [ebp-40h] BYREF
  _DWORD v14[3]; // [esp+1Ch] [ebp-3Ch] BYREF
  int v15; // [esp+28h] [ebp-30h]
  _DWORD v16[3]; // [esp+2Ch] [ebp-2Ch] BYREF
  int v17; // [esp+38h] [ebp-20h]
  _DWORD v18[3]; // [esp+3Ch] [ebp-1Ch] BYREF
  char v19; // [esp+48h] [ebp-10h]
  int v20; // [esp+54h] [ebp-4h]

  sub_432860((volatile LONG *)ioManager);
  v14[0] = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::LockFreeMapIterator::`vftable';
  v14[1] = 0;
  v14[2] = 0;
  LOBYTE(v15) = 0;
  v20 = 0;
  do
  {
    v12 = 0;
    v2 = (_DWORD *)*(this + 2);
    LOBYTE(v20) = 1;
    v3 = sub_642D90(v2, (int)v14, &v13, (int *)&v12, 1);
    v4 = v12;
    if ( v3 )
      sub_432130(v12);
    LOBYTE(v20) = 0;
    if ( v4 )
    {
      if ( !InterlockedDecrement(v4 + 2) )
        (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1);
    }
  }
  while ( (v15 & 2) == 0 );
  v16[0] = &LockFreeMap<AnimIdle *,NiPointer<QueuedAnimIdle>>::LockFreeMapIterator::`vftable';
  v16[1] = 0;
  v16[2] = 0;
  LOBYTE(v17) = 0;
  do
  {
    v12 = 0;
    v5 = (_DWORD *)*(this + 3);
    LOBYTE(v20) = 3;
    v6 = sub_642D90(v5, (int)v16, &v13, (int *)&v12, 1);
    v7 = v12;
    if ( v6 )
      sub_432130(v12);
    LOBYTE(v20) = 2;
    if ( v7 )
    {
      if ( !InterlockedDecrement(v7 + 2) )
        (**(void (__thiscall ***)(volatile LONG *, int))v7)(v7, 1);
    }
  }
  while ( (v17 & 2) == 0 );
  v18[0] = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedHelmet>>::LockFreeMapIterator::`vftable';
  v18[1] = 0;
  v18[2] = 0;
  v19 = 0;
  do
  {
    v12 = 0;
    v8 = (_DWORD *)*(this + 4);
    LOBYTE(v20) = 5;
    v9 = sub_642D90(v8, (int)v18, &v13, (int *)&v12, 1);
    v10 = v12;
    if ( v9 )
      sub_432130(v12);
    LOBYTE(v20) = 4;
    if ( v10 )
    {
      if ( !InterlockedDecrement(v10 + 2) )
        (**(void (__thiscall ***)(volatile LONG *, int))v10)(v10, 1);
    }
  }
  while ( (v19 & 2) == 0 );
  (*((void (__thiscall **)(IOManager *))ioManager->vtbl + 0x12))(ioManager);
  return sub_432890((volatile LONG *)ioManager);
}
