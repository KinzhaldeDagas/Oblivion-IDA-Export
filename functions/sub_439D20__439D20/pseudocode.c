void __thiscall sub_439D20(_DWORD **this, int a2)
{
  int v2; // ecx
  unsigned __int8 (__thiscall *v3)(int, int, IOTask **); // eax
  IOTask *v4; // esi
  IOTask *task; // [esp+8h] [ebp-10h] BYREF
  unsigned int v6; // [esp+14h] [ebp-4h]

  task = 0; /*0x439d42*/
  v2 = (int)*(this + 3); /*0x439d4a*/
  v3 = *(unsigned __int8 (__thiscall **)(int, int, IOTask **))(*(_DWORD *)v2 + 4); /*0x439d4f*/
  v6 = 0; /*0x439d5c*/
  if ( v3(v2, a2, &task) ) /*0x439d64*/
    IOTask_Cancel(task); /*0x439d75*/
  v4 = task; /*0x439d7a*/
  v6 = 0xFFFFFFFF; /*0x439d80*/
  if ( task ) /*0x439d88*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&task->members.unk08) ) /*0x439d8e*/
    {
      if ( v4 ) /*0x439d9a*/
        (*(void (__thiscall **)(IOTask *, int))v4->vtbl)(v4, 1); /*0x439da4*/
    }
  }
}
