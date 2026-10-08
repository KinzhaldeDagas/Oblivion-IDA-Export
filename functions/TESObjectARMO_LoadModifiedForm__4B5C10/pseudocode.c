void __userpurge TESObjectARMO_LoadModifiedForm(TESForm *this@<ecx>, void *Dst, size_t Size)
{
  size_t v4; // [esp-4h] [ebp-10h]

  TESForm_LoadModifiedForm(this, (int)Dst, Size); /*0x4b5c1f*/
  LODWORD(v4) = Size; /*0x4b5c24*/
  TESValueForm_LoadModified((int)this + 0x4C, Dst, v4); /*0x4b5c29*/
}
