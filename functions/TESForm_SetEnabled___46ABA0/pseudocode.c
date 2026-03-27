int __thiscall TESForm_SetEnabled_(TESForm *this, bool a2)
{
  if ( a2 )
    this->member.flags |= 0x800u;
  else
    this->member.flags &= ~0x800u;
  return ((int (__thiscall *)(TESForm *, int))this->vtbl->MarkAsModified)(this, 0x40000001);
}
