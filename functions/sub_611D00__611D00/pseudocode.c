double __thiscall sub_611D00(TESObjectREFR *this)
{
  TESForm *v2; // eax
  Data *data; // esi
  unsigned int IsFemale; // eax
  float Scale; // [esp+4h] [ebp-8h]

  Scale = TESObjectREFR_GetScale(this); /*0x611d0b*/
  v2 = this->vtbl->GetBaseForm(this); /*0x611d19*/
  if ( v2 ) /*0x611d1d*/
  {
    data = v2[9].member.modlist.data; /*0x611d1f*/
    if ( data ) /*0x611d27*/
    {
      IsFemale = TESActorBase_IsFemale(v2); /*0x611d2b*/
      if ( IsFemale <= 1 ) /*0x611d33*/
        return (float)(*(float *)&data->name[4 * IsFemale + 0x44] * Scale); /*0x611d4e*/
      return (float)((float)0.0 * Scale); /*0x611d5d*/
    }
  }
  return Scale; /*0x611d4b*/
}
