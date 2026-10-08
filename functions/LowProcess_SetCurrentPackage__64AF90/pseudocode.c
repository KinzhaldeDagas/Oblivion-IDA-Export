// 3DTheft: BaseProcess::SetCurrentPackage implementation. Writes currentPackage and resets currentPackProcedure to first row slot; clearing a dynamic package can destroy it.
void __thiscall LowProcess_SetCurrentPackage(HighProcess *this, TESPackage *a2)
{
  TESPackage *v3; // ecx
  TESPackage *currentPackage; // ecx
  void (__thiscall *SetUnk278To0)(BaseProcess *__hidden); // eax

  if ( !a2 || (v3 = this->currentPackage) != 0 && TESPackage_IsRuntimePackage(v3) ) /*0x64afa6*/
  {
    if ( this->currentPackage ) /*0x64afaf*/
    {
      if ( !a2 ) /*0x64afba*/
      {
        if ( sub_45A500(g_TESSaveLoadGame) ) /*0x64afc2*/
        {
          TESSaveLoadGame_DeleteForm((char *)g_TESSaveLoadGame, (TESForm *)this->currentPackage); /*0x64afd8*/
        }
        else
        {
          currentPackage = this->currentPackage; /*0x64afdf*/
          if ( currentPackage ) /*0x64afe7*/
            currentPackage->__vftable->super.Destroy((TESForm *)currentPackage, 1); /*0x64aff0*/
        }
      }
    }
    this->follow = 0; /*0x64aff2*/
  }
  SetUnk278To0 = this->SetUnk278To0; /*0x64affb*/
  this->currentPackage = a2; /*0x64b003*/
  this->currentPackProcedure = kProcedure_TRAVEL; /*0x64b009*/
  SetUnk278To0(this); /*0x64b013*/
}
