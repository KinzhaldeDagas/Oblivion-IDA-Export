void __thiscall LowProcess_SetCurrentPackage(HighProcess *this, TESPackage *a2)
{
  TESPackage *v3; // ecx
  TESPackage *currentPackage; // ecx
  void (__thiscall *SetUnk278To0)(BaseProcess *__hidden); // eax

  if ( !a2 || (v3 = this->currentPackage) != 0 && sub_5660A0(v3) )
  {
    if ( this->currentPackage )
    {
      if ( !a2 )
      {
        if ( sub_45A500(SaveLoad_CurrentSavegame) )
        {
          sub_45C7A0((char *)SaveLoad_CurrentSavegame, (TESForm *)this->currentPackage);
        }
        else
        {
          currentPackage = this->currentPackage;
          if ( currentPackage )
            currentPackage->__vftable->super.Destroy((TESForm *)currentPackage, 1);
        }
      }
    }
    this->follow = 0;
  }
  SetUnk278To0 = this->SetUnk278To0;
  this->currentPackage = a2;
  this->currentPackProcedure = kProcedure_TRAVEL;
  SetUnk278To0(this);
}
