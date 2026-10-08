// Stores the second favored/primary attribute in the fixed CLAS DATA payload.
void __thiscall TESClass_SetPrimaryAttribute2(TESClass *this, AttributeActorValue attribute)
{
  if ( attribute <= kAttribute_Luck ) /*0x51c0e7*/
    this->members.attributes[1] = attribute; /*0x51c0e9*/
}
