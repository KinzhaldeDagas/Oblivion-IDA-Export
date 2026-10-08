char __thiscall sub_43E0F0(_DWORD *this)
{
  _DWORD *v2; // ecx
  unsigned __int8 v3; // al
  IOTask *v4; // esi
  _DWORD *v5; // ecx
  unsigned __int8 v6; // al
  IOTask *v7; // esi
  _DWORD *v8; // ecx
  unsigned __int8 v9; // al
  IOTask *v10; // esi
  IOTask *task; // [esp+14h] [ebp-44h] BYREF
  int v13; // [esp+18h] [ebp-40h] BYREF
  _DWORD v14[3]; // [esp+1Ch] [ebp-3Ch] BYREF
  int v15; // [esp+28h] [ebp-30h]
  _DWORD v16[3]; // [esp+2Ch] [ebp-2Ch] BYREF
  int v17; // [esp+38h] [ebp-20h]
  _DWORD v18[3]; // [esp+3Ch] [ebp-1Ch] BYREF
  char v19; // [esp+48h] [ebp-10h]
  int v20; // [esp+54h] [ebp-4h]

  sub_432860((volatile LONG *)MEMORY[0xB33A10]); /*0x43e11f*/
  v14[0] = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::LockFreeMapIterator::`vftable'; /*0x43e126*/
  v14[1] = 0; /*0x43e12e*/
  v14[2] = 0; /*0x43e132*/
  LOBYTE(v15) = 0; /*0x43e136*/
  v20 = 0; /*0x43e140*/
  do /*0x43e19b*/
  {
    task = 0; /*0x43e144*/
    v2 = (_DWORD *)*(this + 2); /*0x43e154*/
    LOBYTE(v20) = 1; /*0x43e15c*/
    v3 = sub_642D90(v2, (int)v14, &v13, (int *)&task, 1); /*0x43e161*/
    v4 = task; /*0x43e168*/
    if ( v3 ) /*0x43e16c*/
      IOTask_Cancel(task); /*0x43e175*/
    LOBYTE(v20) = 0; /*0x43e17c*/
    if ( v4 ) /*0x43e180*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v4->members.unk08) ) /*0x43e186*/
        (*(void (__thiscall **)(IOTask *, int))v4->vtbl)(v4, 1); /*0x43e194*/
    }
  }
  while ( (v15 & 2) == 0 ); /*0x43e19b*/
  v16[0] = &LockFreeMap<AnimIdle *,NiPointer<QueuedAnimIdle>>::LockFreeMapIterator::`vftable'; /*0x43e19d*/
  v16[1] = 0; /*0x43e1a5*/
  v16[2] = 0; /*0x43e1a9*/
  LOBYTE(v17) = 0; /*0x43e1ad*/
  do /*0x43e209*/
  {
    task = 0; /*0x43e1b1*/
    v5 = (_DWORD *)*(this + 3); /*0x43e1bc*/
    LOBYTE(v20) = 3; /*0x43e1c9*/
    v6 = sub_642D90(v5, (int)v16, &v13, (int *)&task, 1); /*0x43e1ce*/
    v7 = task; /*0x43e1d5*/
    if ( v6 ) /*0x43e1d9*/
      IOTask_Cancel(task); /*0x43e1e2*/
    LOBYTE(v20) = 2; /*0x43e1e9*/
    if ( v7 ) /*0x43e1ee*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v7->members.unk08) ) /*0x43e1f4*/
        (*(void (__thiscall **)(IOTask *, int))v7->vtbl)(v7, 1); /*0x43e202*/
    }
  }
  while ( (v17 & 2) == 0 ); /*0x43e209*/
  v18[0] = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedHelmet>>::LockFreeMapIterator::`vftable'; /*0x43e20b*/
  v18[1] = 0; /*0x43e213*/
  v18[2] = 0; /*0x43e217*/
  v19 = 0; /*0x43e21b*/
  do /*0x43e278*/
  {
    task = 0; /*0x43e220*/
    v8 = (_DWORD *)*(this + 4); /*0x43e22b*/
    LOBYTE(v20) = 5; /*0x43e238*/
    v9 = sub_642D90(v8, (int)v18, &v13, (int *)&task, 1); /*0x43e23d*/
    v10 = task; /*0x43e244*/
    if ( v9 ) /*0x43e248*/
      IOTask_Cancel(task); /*0x43e251*/
    LOBYTE(v20) = 4; /*0x43e258*/
    if ( v10 ) /*0x43e25d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v10->members.unk08) ) /*0x43e263*/
        (*(void (__thiscall **)(IOTask *, int))v10->vtbl)(v10, 1); /*0x43e271*/
    }
  }
  while ( (v19 & 2) == 0 ); /*0x43e278*/
  (*((void (__thiscall **)(IOManager *))MEMORY[0xB33A10]->vtbl + 0x12))(MEMORY[0xB33A10]); /*0x43e285*/
  return sub_432890((volatile LONG *)MEMORY[0xB33A10]); /*0x43e292*/
}
