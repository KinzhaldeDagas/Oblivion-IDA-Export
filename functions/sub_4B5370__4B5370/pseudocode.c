void __userpurge sub_4B5370(TESForm *this@<ecx>, void *Dst, size_t Size)
{
  size_t v4; // [esp-4h] [ebp-10h]
  size_t v5; // [esp-4h] [ebp-10h]

  TESForm_LoadModifiedForm(this, (int)Dst, Size);
  LODWORD(v4) = Size;
  TESValueForm_LoadModified((int)this + 0x70, Dst, v4);
  if ( ((unsigned __int8)Dst & 4) != 0 )
  {
    LODWORD(v5) = 1;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)this + 0x89, v5);
  }
}
