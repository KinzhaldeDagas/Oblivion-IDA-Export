double __thiscall sub_611D00(TESObjectREFR *this)
{
  TESForm *v2; // eax
  Data *data; // esi
  unsigned int IsFemale; // eax
  float Scale; // [esp+4h] [ebp-8h]

  Scale = TESObjectREFR_GetScale(this);
  v2 = this->vtbl->GetBaseForm(this);
  if ( v2 )
  {
    data = v2[9].member.modlist.data;
    if ( data )
    {
      IsFemale = TESActorBase_IsFemale(v2);
      if ( IsFemale <= 1 )
        return (float)(*(float *)&data->name[4 * IsFemale + 0x44] * Scale);
      return (float)((float)0.0 * Scale);
    }
  }
  return Scale;
}
