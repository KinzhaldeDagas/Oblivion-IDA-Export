int __thiscall sub_51CA10(unsigned __int16 *this)
{
  __int16 Level; // ax

  if ( (*((_DWORD *)this + 0xFFFFFFEA) & 0x80) == 0 ) /*0x51ca1b*/
    return *(this + 2); /*0x51ca47*/
  Level = TESActorBaseData_GetLevel((TESActorBaseData *)(this + 0xFFFFFFD2)); /*0x51ca20*/
  if ( Level < 1 ) /*0x51ca2c*/
    Level = 1; /*0x51ca2e*/
  return (unsigned __int16)(Level * *(this + 2)); /*0x51ca41*/
}
