// Verified: copies the two-byte climate settings at +0x54 as part of the 6-byte data block at +0x50; individual semantics remain Unknown except Sky's use of +0x54 low byte.
__int16 __thiscall TESClimate_CopyComponentsFrom(TESClimate *this, TESClimate *source)
{
  TESForm *v3; // eax
  TESForm *v4; // ebx
  TESTexture *weatherTextures; // esi
  int sourcea; // [esp+Ch] [ebp+4h]

  v3 = (TESForm *)OblivionDynamicCast( /*0x4bea57*/
                    source,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESClimate `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4bea5c*/
  if ( v3 ) /*0x4bea63*/
  {
    TESForm_CopyAllComponentsFrom(&this->form, v3); /*0x4bea6a*/
    OblivionTESWeatherList_CopyEntries(&this->weatherList, (OblivionTESWeatherList *)&v4[2], 0); /*0x4bea78*/
    weatherTextures = this->weatherTextures; /*0x4bea7f*/
    sourcea = 2; /*0x4bea84*/
    do /*0x4beaa5*/
    {
      weatherTextures->vtbl->CopyFromBase( /*0x4bea9b*/
        (BaseFormComponent *)weatherTextures,
        (BaseFormComponent *)((char *)weatherTextures + (char *)v4 - (char *)this));
      ++weatherTextures; /*0x4bea9d*/
      --sourcea; /*0x4beaa0*/
    }
    while ( sourcea ); /*0x4beaa5*/
    this->model.vtbl->super.CopyFromBase((BaseFormComponent *)&this->model, (BaseFormComponent *)&v4[1]); /*0x4beab4*/
    this->unknown50 = v4[3].member.flags; /*0x4beabf*/
    LOWORD(v3) = v4[3].member.refID; /*0x4beac1*/
    this->unknown54 = (unsigned __int16)v3; /*0x4beac6*/
  }
  return (__int16)v3; /*0x4beacb*/
}
