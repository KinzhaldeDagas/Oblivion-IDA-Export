void __userpurge sub_4B0B90(TESForm *this@<ecx>, void *Dst, size_t Size)
{
  size_t v4; // [esp-4h] [ebp-10h]

  TESForm_LoadModifiedForm(this, (int)Dst, Size);
  LODWORD(v4) = Size;
  TESValueForm_LoadModified((int)this + 0x68, Dst, v4);
}
