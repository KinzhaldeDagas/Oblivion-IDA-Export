void __thiscall sub_4BD8C0(_DWORD *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  unsigned __int8 v3; // al
  IOTask *v4; // esi
  IOTask *task; // [esp+14h] [ebp-24h] BYREF
  int v6; // [esp+18h] [ebp-20h] BYREF
  _DWORD v7[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v8; // [esp+28h] [ebp-10h]
  int v9; // [esp+34h] [ebp-4h]

  v7[0] = &LockFreeMap<unsigned int,NiPointer<DistantLODLoaderTask>>::LockFreeMapIterator::`vftable'; /*0x4bd8eb*/
  v7[1] = 0; /*0x4bd8f3*/
  v7[2] = 0; /*0x4bd8f7*/
  LOBYTE(v8) = 0; /*0x4bd8fb*/
  v2 = InterlockedDecrement; /*0x4bd8ff*/
  v9 = 0; /*0x4bd905*/
  do /*0x4bd966*/
  {
    task = 0; /*0x4bd910*/
    LOBYTE(v9) = 1; /*0x4bd927*/
    v3 = sub_642D90(this, (int)v7, &v6, (int *)&task, 1); /*0x4bd92c*/
    v4 = task; /*0x4bd933*/
    if ( v3 ) /*0x4bd937*/
      IOTask_Cancel(task); /*0x4bd940*/
    LOBYTE(v9) = 0; /*0x4bd947*/
    if ( v4 ) /*0x4bd94b*/
    {
      if ( !v2((volatile LONG *)&v4->members.unk08) ) /*0x4bd951*/
        (*(void (__thiscall **)(IOTask *, int))v4->vtbl)(v4, 1); /*0x4bd95f*/
    }
  }
  while ( (v8 & 2) == 0 ); /*0x4bd966*/
}
