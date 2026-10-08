_DWORD *__thiscall sub_6D7F60(int this, _DWORD *a2, unsigned int incoming)
{
  unsigned int v4; // ebx
  unsigned int v6; // ebp
  int v7; // esi
  unsigned __int16 v8; // ax

  v4 = incoming; /*0x6d7f95*/
  if ( incoming < *(unsigned __int16 *)(this + 0xA) ) /*0x6d7f9b*/
  {
    v6 = 4 * incoming; /*0x6d7faf*/
    v7 = *(_DWORD *)(*(_DWORD *)(this + 4) + 4 * incoming); /*0x6d7fb6*/
    if ( v7 ) /*0x6d7fc1*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x6d7fc7*/
    incoming = 0; /*0x6d7fd5*/
    OB_NiSmartPointer_Assign_010201A0((int *)(v6 + *(_DWORD *)(this + 4)), (int *)&incoming); /*0x6d7fec*/
    if ( v7 ) /*0x6d7ff8*/
      --*(_WORD *)(this + 0xC); /*0x6d7ffa*/
    v8 = *(_WORD *)(this + 0xA); /*0x6d8000*/
    if ( v4 == v8 - 1 ) /*0x6d800c*/
      *(_WORD *)(this + 0xA) = v8 - 1; /*0x6d8011*/
    *a2 = v7; /*0x6d801b*/
    if ( v7 ) /*0x6d801d*/
    {
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x6d8023*/
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x6d803e*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x6d8050*/
    }
    return a2; /*0x6d8052*/
  }
  else
  {
    *a2 = 0; /*0x6d7fa1*/
    return a2; /*0x6d7f9d*/
  }
}
