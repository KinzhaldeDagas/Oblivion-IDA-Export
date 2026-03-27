int __thiscall TESCreature_GetAViBase(void *this, int a2)
{
  if ( (unsigned int)(a2 - 0xC) <= 6 )
    return (unsigned __int8)sub_51CC00((int)this);
  if ( (unsigned int)(a2 - 0x13) <= 6 )
    return (unsigned __int8)sub_51CB80((int)this);
  if ( (unsigned int)(a2 - 0x1A) > 6 )
    return TESActorBase_GetAViBase((int)this, a2);
  return (unsigned __int8)sub_51CB00((int)this);
}
