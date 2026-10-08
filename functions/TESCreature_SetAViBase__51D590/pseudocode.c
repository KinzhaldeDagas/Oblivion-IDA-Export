unsigned __int8 __thiscall TESCreature_SetAViBase(int this, int a2, UInt32 a3)
{
  if ( (unsigned int)(a2 - 0xC) > 6 ) /*0x51d59a*/
  {
    if ( (unsigned int)(a2 - 0x13) > 6 ) /*0x51d5b9*/
    {
      if ( (unsigned int)(a2 - 0x1A) > 6 ) /*0x51d5d8*/
      {
        return TESActorBase_SetAViBase(this, a2, a3); /*0x51d5f5*/
      }
      else
      {
        *(_BYTE *)(this + 0x107) = a3; /*0x51d5e3*/
        return TESForm_MarkAsModified((TESForm *)this, 0x200); /*0x51d5e9*/
      }
    }
    else
    {
      *(_BYTE *)(this + 0x106) = a3; /*0x51d5c4*/
      return TESForm_MarkAsModified((TESForm *)this, 0x200); /*0x51d5ca*/
    }
  }
  else
  {
    *(_BYTE *)(this + 0x105) = a3; /*0x51d5a5*/
    return TESForm_MarkAsModified((TESForm *)this, 0x200); /*0x51d5ab*/
  }
}
