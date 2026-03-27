unsigned __int8 __thiscall TESCreature_SetAViBase(int this, int a2, UInt32 a3)
{
  if ( (unsigned int)(a2 - 0xC) > 6 )
  {
    if ( (unsigned int)(a2 - 0x13) > 6 )
    {
      if ( (unsigned int)(a2 - 0x1A) > 6 )
      {
        return TESActorBase_SetAViBase(this, a2, a3);
      }
      else
      {
        *(_BYTE *)(this + 0x107) = a3;
        return TESForm_MarkAsModified((TESForm *)this, 0x200);
      }
    }
    else
    {
      *(_BYTE *)(this + 0x106) = a3;
      return TESForm_MarkAsModified((TESForm *)this, 0x200);
    }
  }
  else
  {
    *(_BYTE *)(this + 0x105) = a3;
    return TESForm_MarkAsModified((TESForm *)this, 0x200);
  }
}
