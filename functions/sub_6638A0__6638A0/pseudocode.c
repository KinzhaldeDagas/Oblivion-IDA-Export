char __thiscall sub_6638A0(int *this)
{
  BSExtraDataVtbl *Light; // eax
  int *v3; // edi
  void (__thiscall *Destructor)(BSExtraData *); // eax

  Light = ExtraDataList_GetLight((ExtraDataList *)(this + 0x11)); /*0x6638a7*/
  v3 = (int *)Light; /*0x6638ac*/
  if ( Light ) /*0x6638b0*/
  {
    Destructor = Light->Destructor; /*0x6638b2*/
    if ( *v3 == *(this + 0x1E6) && (*(_BYTE *)(*(this + 0x174) + 0x18) & 1) != 0 ) /*0x6638cd*/
    {
      OB_NiSmartPointer_Assign_010201A0(v3, this + 0x1E7); /*0x6638d8*/
      LOBYTE(Light) = sub_5E3FC0(this); /*0x6638e2*/
    }
    else
    {
      if ( Destructor == (void (__thiscall *)(BSExtraData *))*(this + 0x1E7) /*0x6638fa*/
        && (TESObjectREFR::GetNiNode((TESObjectREFR *)this)->members.super.m_flags & 1) != 0 )
      {
        OB_NiSmartPointer_Assign_010201A0(v3, this + 0x1E6); /*0x6638ff*/
      }
      LOBYTE(Light) = sub_5E3FC0(this); /*0x663909*/
    }
  }
  return (char)Light; /*0x6638de*/
}
