char __thiscall sub_521B40(int this, int a2)
{
  *(_DWORD *)(this + 0x1E4) = a2;
  return TESForm_MarkAsModified((TESForm *)this, 0x400);
}
