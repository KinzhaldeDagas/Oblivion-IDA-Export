void __userpurge sub_4B5370(TESForm *this@<ecx>, void *Dst, size_t Size)
{
  size_t v4; // [esp-4h] [ebp-10h]

  TESForm_LoadModifiedForm(this, (int)Dst, Size); /*0x4b537f*/
  LODWORD(v4) = Size; /*0x4b5384*/
  TESValueForm_LoadModified((int)this + 0x70, Dst, v4); /*0x4b5389*/
  if ( ((unsigned __int8)Dst & 4) != 0 ) /*0x4b5391*/
    SaveLoad_LoadData(g_TESSaveLoadGame, (char *)this + 0x89, 1u); /*0x4b53a2*/
}
