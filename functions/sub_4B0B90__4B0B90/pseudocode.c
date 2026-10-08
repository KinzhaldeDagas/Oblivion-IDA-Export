void __userpurge sub_4B0B90(TESForm *this@<ecx>, void *Dst, size_t Size)
{
  size_t v4; // [esp-4h] [ebp-10h]

  TESForm_LoadModifiedForm(this, (int)Dst, Size); /*0x4b0b9f*/
  LODWORD(v4) = Size; /*0x4b0ba4*/
  TESValueForm_LoadModified((int)this + 0x68, Dst, v4); /*0x4b0ba9*/
}
