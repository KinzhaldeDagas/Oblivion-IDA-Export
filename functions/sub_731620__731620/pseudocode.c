// Fog property propagation decode: NiPropertyState copy constructor preserves all ten slots, including inherited fog slot +0x0C.
char *__thiscall sub_731620(char *this, int a2)
{
  int *v3; // edi
  int v4; // ebp
  int v5; // ebx
  int v6; // eax
  int v8; // [esp+28h] [ebp+4h]

  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x731652*/
  *((_DWORD *)this + 1) = 0; /*0x731658*/
  InterlockedIncrement((volatile LONG *)&MEMORY[0xB3F9B0][0xED]); /*0x73165b*/
  v3 = (int *)(this + 8); /*0x731673*/
  *(_DWORD *)this = &NiPropertyState::`vftable'; /*0x731677*/
  ArrayConstructor( /*0x73167d*/
    this + 8,
    4u,
    0xA,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  v4 = a2 - (_DWORD)this; /*0x73168b*/
  v8 = 0xA; /*0x73168d*/
  do /*0x7316d7*/
  {
    v5 = *v3;                                   // Fog property propagation decode: copy loop includes fog slot +0x0C, so child/geometry state copies retain inherited B333E4 until overridden. /*0x731695*/
    if ( *v3 != *(int *)((char *)v3 + v4) ) /*0x73169a*/
    {
      if ( v5 ) /*0x73169e*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x7316a4*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7316ba*/
      }
      v6 = *(int *)((char *)v3 + v4); /*0x7316bc*/
      *v3 = v6; /*0x7316c1*/
      if ( v6 ) /*0x7316c3*/
        InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x7316c9*/
    }
    ++v3; /*0x7316cf*/
    --v8; /*0x7316d2*/
  }
  while ( v8 ); /*0x7316d7*/
  return this; /*0x7316db*/
}
