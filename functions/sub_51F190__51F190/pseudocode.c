void __thiscall sub_51F190(TESForm *this, int Dst, int a3)
{
  size_t v5; // [esp-4h] [ebp-10h]

  TESForm_LoadModifiedForm(this, Dst, a3);
  sub_46EC70((unsigned int *)this + 9, Dst, (int)this, Dst, a3);
  if ( (Dst & 4) != 0 )
  {
    LODWORD(v5) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)this + 0x34), v5);
  }
}
