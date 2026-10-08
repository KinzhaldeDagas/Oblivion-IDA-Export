void __thiscall sub_4349B0(unsigned int *this)
{
  int v2; // esi
  int v3; // edi

  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4349e4*/
  v2 = *(this + 2); /*0x4349e9*/
  if ( v2 ) /*0x4349f7*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x4349fd*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x434a0f*/
    *(this + 2) = 0; /*0x434a11*/
  }
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x434a1a*/
  FormHeapFree(*this); /*0x434a22*/
  v3 = *(this + 2); /*0x434a27*/
  if ( v3 ) /*0x434a37*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x434a3d*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x434a4f*/
  }
}
