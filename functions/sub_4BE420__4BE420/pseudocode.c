void __thiscall sub_4BE420(_DWORD *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  unsigned __int8 v3; // al
  IOTask *v4; // esi
  IOTask *task; // [esp+14h] [ebp-24h] BYREF
  int v6; // [esp+18h] [ebp-20h] BYREF
  _DWORD v7[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v8; // [esp+28h] [ebp-10h]
  int v9; // [esp+34h] [ebp-4h]

  v7[0] = &LockFreeMap<unsigned int,NiPointer<ExteriorCellLoaderTask>>::LockFreeMapIterator::`vftable'; /*0x4be44b*/
  v7[1] = 0; /*0x4be453*/
  v7[2] = 0; /*0x4be457*/
  LOBYTE(v8) = 0; /*0x4be45b*/
  v2 = InterlockedDecrement; /*0x4be45f*/
  v9 = 0; /*0x4be465*/
  do /*0x4be4c6*/
  {
    task = 0; /*0x4be470*/
    LOBYTE(v9) = 1; /*0x4be487*/
    v3 = sub_642D90(this, (int)v7, &v6, (int *)&task, 1); /*0x4be48c*/
    v4 = task; /*0x4be493*/
    if ( v3 ) /*0x4be497*/
      IOTask_Cancel(task); /*0x4be4a0*/
    LOBYTE(v9) = 0; /*0x4be4a7*/
    if ( v4 ) /*0x4be4ab*/
    {
      if ( !v2((volatile LONG *)&v4->members.unk08) ) /*0x4be4b1*/
        (*(void (__thiscall **)(IOTask *, int))v4->vtbl)(v4, 1); /*0x4be4bf*/
    }
  }
  while ( (v8 & 2) == 0 ); /*0x4be4c6*/
}
