int __thiscall sub_51CA10(unsigned __int16 *this)
{
  __int16 Level; // ax

  if ( (*((_DWORD *)this + 0xFFFFFFEA) & 0x80) == 0 )
    return *(this + 2);
  Level = TESActorBaseData_GetLevel((TESActorBaseData *)(this + 0xFFFFFFD2));
  if ( Level < 1 )
    Level = 1;
  return (unsigned __int16)(Level * *(this + 2));
}
