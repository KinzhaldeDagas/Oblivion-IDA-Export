char __thiscall TESActorBase_SetHealth(TESForm *this, UInt32 a2)
{
  *((_DWORD *)this + 0x21) = a2;
  return TESForm_MarkAsModified(this, 4);
}
