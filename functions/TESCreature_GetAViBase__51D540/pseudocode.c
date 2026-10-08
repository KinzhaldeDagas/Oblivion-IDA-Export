int __thiscall TESCreature_GetAViBase(void *this, int a2)
{
  if ( (unsigned int)(a2 - 0xC) <= 6 ) /*0x51d54a*/
    return (unsigned __int8)sub_51CC00((int)this); /*0x51d551*/
  if ( (unsigned int)(a2 - 0x13) <= 6 ) /*0x51d55d*/
    return (unsigned __int8)sub_51CB80((int)this); /*0x51d564*/
  if ( (unsigned int)(a2 - 0x1A) > 6 ) /*0x51d570*/
    return TESActorBase_GetAViBase((int)this, a2); /*0x51d581*/
  return (unsigned __int8)sub_51CB00((int)this); /*0x51d554*/
}
