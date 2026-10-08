void __thiscall sub_589AA0(_DWORD *this)
{
  int v2; // esi
  void (__thiscall ***v3)(_DWORD, int); // esi
  int v4; // [esp+8h] [ebp-4h] BYREF

  v2 = *(this + 9); /*0x589aa5*/
  if ( v2 ) /*0x589aaa*/
  {
    sub_589890(this); /*0x589aac*/
    if ( *(_DWORD *)(v2 + 0x1C) ) /*0x589ab1*/
    {
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x589ab9*/
      (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)(v2 + 0x1C) + 0x88))(*(_DWORD *)(v2 + 0x1C), &v4, v2); /*0x589ad2*/
      if ( v4 ) /*0x589ada*/
      {
        v3 = (void (__thiscall ***)(_DWORD, int))v4; /*0x589adc*/
        if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x589ae2*/
          (**v3)(v3, 1); /*0x589af8*/
      }
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x589afc*/
    }
    *(this + 9) = 0; /*0x589b04*/
  }
}
