bool __thiscall TESActorBase_CanWalk(_BYTE *this)
{
  bool result; // al

  result = 1;
  if ( *(this + 4) == 0x24 && (*((_DWORD *)this + 0xA) & 0x40) == 0 )
    return (*(this + 0x28) & 1) != 0;
  return result;
}
