void __thiscall sub_51F190(TESForm *this, int Dst, int a3)
{
  TESForm_LoadModifiedForm(this, Dst, a3); /*0x51f19f*/
  sub_46EC70((unsigned int *)this + 9, Dst, (int)this, Dst, a3); /*0x51f1a9*/
  if ( (Dst & 4) != 0 ) /*0x51f1b1*/
    TESForm_LoadDataFromCurrentSaveGame(this, (char *)this + 0x34, 1u); /*0x51f1bb*/
}
