void __thiscall sub_642B40(void *this, int a2)
{
  unsigned __int8 (__thiscall *v3)(void *, int, IOTask **); // edx
  IOTask *v4; // esi
  IOTask *task; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v6; // [esp+18h] [ebp-4h]

  task = 0; /*0x642b65*/
  v3 = *(unsigned __int8 (__thiscall **)(void *, int, IOTask **))(*(_DWORD *)this + 4); /*0x642b73*/
  v6 = 0; /*0x642b7e*/
  if ( v3(this, a2, &task) ) /*0x642b86*/
  {
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x10))(this, a2); /*0x642b94*/
    IOTask_Cancel(task); /*0x642ba1*/
  }
  v4 = task; /*0x642ba6*/
  v6 = 0xFFFFFFFF; /*0x642bac*/
  if ( task ) /*0x642bb4*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&task->members.unk08) ) /*0x642bba*/
    {
      if ( v4 ) /*0x642bc6*/
        (*(void (__thiscall **)(IOTask *, int))v4->vtbl)(v4, 1); /*0x642bd0*/
    }
  }
}
