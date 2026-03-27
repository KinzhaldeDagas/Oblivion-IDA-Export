void __userpurge sub_4A8FB0(TESForm *this@<ecx>, void *Dst, size_t Size)
{
  size_t v4; // [esp-4h] [ebp-10h]

  TESForm_LoadModifiedForm(this, (int)Dst, Size);
  LODWORD(v4) = Size;
  TESValueForm_LoadModified((int)this + 0x64, Dst, v4);
}
