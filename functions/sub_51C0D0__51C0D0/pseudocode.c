// Stores the first favored/primary attribute in the fixed CLAS DATA payload.
void __thiscall TESClass_SetPrimaryAttribute1(TESClass *this, AttributeActorValue attribute)
{
  if ( attribute <= kAttribute_Luck ) /*0x51c0d7*/
    this->members.attributes[0] = attribute; /*0x51c0d9*/
}
