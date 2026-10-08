void __userpurge sub_4A8FB0(TESForm *this@<ecx>, void *Dst, size_t Size)
{
  size_t v4; // [esp-4h] [ebp-10h]

  TESForm_LoadModifiedForm(this, (int)Dst, Size); /*0x4a8fbf*/
  LODWORD(v4) = Size; /*0x4a8fc4*/
  TESValueForm_LoadModified((int)this + 0x64, Dst, v4); /*0x4a8fc9*/
}
