char __thiscall sub_51C6C0(TESForm *this, void *a2)
{
  *((_DWORD *)this + 0x46) = a2;
  return TESForm_MarkAsModified(this, 0x400);
}
