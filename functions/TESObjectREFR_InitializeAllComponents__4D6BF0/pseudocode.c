void __thiscall TESObjectREFR_InitializeAllComponents(TESObjectREFR *this)
{
  volatile LONG *niNode; // esi

  this->member.scale = 1.0; /*0x4d6bf5*/
  if ( !g_TESSaveLoadGame || (g_TESSaveLoadGame->flags & 4) == 0 ) /*0x4d6c09*/
  {
    niNode = (volatile LONG *)this->member.niNode; /*0x4d6c0c*/
    if ( niNode ) /*0x4d6c11*/
    {
      if ( !InterlockedDecrement(niNode + 1) ) /*0x4d6c17*/
        (**(void (__thiscall ***)(void *, int))niNode)((void *)niNode, 1); /*0x4d6c2d*/
      this->member.niNode = 0; /*0x4d6c2f*/
    }
  }
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4d6c3a*/
}
