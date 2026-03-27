int __thiscall TESForm_SetDeleted(TESForm *this, bool a2)
{
  if ( a2 )
    this->member.flags |= 0x20u;
  else
    this->member.flags &= ~0x20u;
  return ((int (__thiscall *)(TESForm *, int))this->vtbl->MarkAsModified)(this, 0x40000001);
}
