void __userpurge sub_51F160(TESForm *this@<ecx>, int edi0@<edi>, int a2)
{
  size_t v5; // [esp-4h] [ebp-Ch]

  TESForm_SaveModifiedForm(this, a2);
  sub_46EAC0((char *)this + 0x24, edi0, a2);
  if ( (a2 & 4) != 0 )
  {
    LODWORD(v5) = 1;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0x34), v5);
  }
}
