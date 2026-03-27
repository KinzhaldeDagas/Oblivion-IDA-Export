void __thiscall TESObjectREFR_InitializeAllComponents(TESObjectREFR *this)
{
  volatile LONG *niNode; // esi

  this->member.scale = 1.0;
  if ( !SaveLoad_CurrentSavegame || (SaveLoad_CurrentSavegame->flags & 4) == 0 )
  {
    niNode = (volatile LONG *)this->member.niNode;
    if ( niNode )
    {
      if ( !InterlockedDecrement(niNode + 1) )
        (**(void (__thiscall ***)(void *, int))niNode)((void *)niNode, 1);
      this->member.niNode = 0;
    }
  }
  j_TESForm_InitializeComponents((TESForm *)this);
}
