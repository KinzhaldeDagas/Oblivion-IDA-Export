// Verified generic IOTask cancellation state machine: previous states 0/1/2 atomically transition to 6 and invoke vtable +0x0C with status 0; state 5 transitions to 6 and invokes it with status 1; states 3/4 wait for the worker's state change. Verified local role: state 6 is the cancellation/terminal marker written by IOTask_Cancel. Its canonical enum label remains Unknown.
void __stdcall IOTask_Cancel(IOTask *task)
{
  UInt32 unk0C; // esi
  UInt32 *p_unk0C; // edi
  _DWORD *v3; // [esp+4h] [ebp-8h]

  unk0C = task->members.unk0C; /*0x432137*/
  p_unk0C = &task->members.unk0C; /*0x43213a*/
  while ( 2 ) /*0x432154*/
  {
    switch ( unk0C ) /*0x432154*/
    {
      case 0u: /*0x432154*/
        if ( InterlockedCompareExchange((volatile LONG *)p_unk0C, 6, unk0C) != unk0C ) /*0x432163*/
          goto LABEL_14; /*0x432163*/
        (*((void (__thiscall **)(IOTask *, _DWORD))task->vtbl + 3))(task, 0); /*0x43217d*/
        return; /*0x43217d*/
      case 1u: /*0x432154*/
      case 2u: /*0x432154*/
        if ( InterlockedCompareExchange((volatile LONG *)p_unk0C, 6, unk0C) != unk0C ) /*0x432187*/
          goto LABEL_14; /*0x432187*/
        (*((void (__thiscall **)(IOTask *, _DWORD))task->vtbl + 3))(task, 0); /*0x432196*/
        sub_431D10(v3, (int)task); /*0x43219d*/
        def_432154((int)task); /*0x4321a3*/
        return; /*0x4321a3*/
      case 3u: /*0x432154*/
        if ( unk0C == 3 ) /*0x4321ad*/
        {
          do /*0x4321b7*/
            Sleep(1u); /*0x4321b2*/
          while ( *p_unk0C == 3 ); /*0x4321b7*/
        }
        goto LABEL_14; /*0x4321b7*/
      case 4u: /*0x432154*/
        if ( unk0C == 4 ) /*0x4321be*/
        {
          do /*0x4321c7*/
            Sleep(1u); /*0x4321c2*/
          while ( *p_unk0C == 4 ); /*0x4321c7*/
        }
        goto LABEL_14; /*0x4321c7*/
      case 5u: /*0x432154*/
        if ( InterlockedCompareExchange((volatile LONG *)p_unk0C, 6, unk0C) != unk0C ) /*0x4321d3*/
        {
LABEL_14:
          unk0C = *p_unk0C; /*0x4321d5*/
          if ( *p_unk0C > 5 ) /*0x4321da*/
            return; /*0x4321da*/
          continue; /*0x4321da*/
        }
        (*((void (__thiscall **)(IOTask *, int))task->vtbl + 3))(task, 1); /*0x432200*/
        return;
      default:
        JUMPOUT(0x4321A4); /*0x4321a4*/
    }
  }
}
