void __thiscall TESForm_LoadModifiedForm(TESForm *this, int Dst, int a3)
{
  size_t v4; // [esp-4h] [ebp-8h]

  if ( (Dst & 1) != 0 ) /*0x46b608*/
  {
    LODWORD(v4) = 4; /*0x46b610*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v4); /*0x46b617*/
    if ( OblivionDynamicCast( /*0x46b62b*/
           this,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
           0) )
    {
      this->member.flags ^= (Dst ^ this->member.flags) & 0x112860; /*0x46b644*/
    }
    else
    {
      this->member.flags ^= ((unsigned __int16)Dst ^ (unsigned __int16)this->member.flags) & 0xC20; /*0x46b658*/
    }
  }
}
