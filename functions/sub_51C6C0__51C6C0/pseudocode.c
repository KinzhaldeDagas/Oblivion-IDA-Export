char __thiscall sub_51C6C0(TESForm *this, void *a2)
{
  *((_DWORD *)this + 0x46) = a2; /*0x51c6c4*/
  return TESForm_MarkAsModified(this, 0x400);
}
