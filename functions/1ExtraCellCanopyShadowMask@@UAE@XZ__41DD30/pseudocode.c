void __thiscall ExtraCellCanopyShadowMask::~ExtraCellCanopyShadowMask(ExtraCellCanopyShadowMask *this)
{
  int v2; // edi
  int v3; // edi

  *(_DWORD *)this = &ExtraCellCanopyShadowMask::`vftable'; /*0x41dd5b*/
  *((_DWORD *)this + 3) = 0; /*0x41dd6d*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x41dd70*/
  v2 = *((_DWORD *)this + 4); /*0x41dd75*/
  if ( v2 ) /*0x41dd83*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x41dd89*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x41dd9b*/
    *((_DWORD *)this + 4) = 0; /*0x41dd9d*/
  }
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x41dda2*/
  *((_DWORD *)this + 6) = 0; /*0x41dda7*/
  v3 = *((_DWORD *)this + 4); /*0x41ddaa*/
  if ( v3 ) /*0x41ddb6*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x41ddbc*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x41ddce*/
  }
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x41ddd0*/
}
