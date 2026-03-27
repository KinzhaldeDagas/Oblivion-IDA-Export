void __usercall sub_5422F0(Sky *this@<ecx>, double unk0D0@<st0>)
{
  TESClimate *firstClimate; // ecx
  TESWeather *v4; // eax
  TESForm *v5; // eax
  int v6; // eax
  int v7; // edi
  bool v8; // bl
  TESRegion *region; // eax
  TESWeather *weatherOverride; // edi
  TESWeather *v11; // eax
  TESWeather *firstWeather; // eax
  Precipitation *precipitation; // ecx
  TESWeather *v14; // ecx
  double v15; // st7
  double v16; // st6
  double v17; // st6
  int v18; // [esp+8h] [ebp-4h]
  int v19; // [esp+8h] [ebp-4h]
  float v20; // [esp+8h] [ebp-4h]

  firstClimate = this->firstClimate;
  if ( firstClimate )
  {
    if ( (this->Flags0FC & 1) != 0 )
      goto LABEL_8;
    if ( !this->weather018 )
      goto LABEL_8;
    v18 = 0x18;
    if ( this->unk0D4 <= (double)this->unk0D0 )
      v18 = 0;
    unk0D0 = (double)v18 + this->unk0D0 - this->unk0D4;
    if ( (double)(0x16 * (0xFF - *((unsigned __int8 *)firstClimate + 0x54))) * dbl_A3F398 + dbl_A2F928 < unk0D0
      && !this->secondWeather )
    {
LABEL_8:
      v4 = (TESWeather *)sub_4EECE0((_DWORD *)firstClimate + 0xC);
      this->weather018 = v4;
      if ( !v4 )
      {
        v5 = TESForm_LookupByFormID(0x15Eu);
        this->weather018 = (TESWeather *)OblivionDynamicCast(
                                           v5,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           &TESWeather `RTTI Type Descriptor',
                                           0);
      }
      v6 = *(_DWORD *)(TESDataHandler + 0xBC);
      if ( v6 )
      {
        v7 = v6 + 4;
        if ( v6 != 0xFFFFFFFC )
        {
          do
          {
            if ( !*(_DWORD *)v7 )
              break;
            sub_4A2E90(*(int ***)v7);
            v7 = *(_DWORD *)(v7 + 4);
          }
          while ( v7 );
        }
      }
    }
    v8 = this->weatherOverride == 0;
    if ( this->firstWeather && sub_45A500(SaveLoad_CurrentSavegame) && (SaveLoad_CurrentSavegame->flags & 0x10) == 0
      || !v8 )
    {
      weatherOverride = this->weatherOverride;
    }
    else
    {
      region = TESDataHandler_g_PlayerRef->region;
      weatherOverride = this->weather018;
      if ( region )
      {
        v11 = *((TESWeather **)region + 9);
        if ( v11 )
        {
          if ( this->unk0DC != 2 )
            weatherOverride = v11;
        }
      }
    }
    if ( !weatherOverride
      || this->secondWeather && (this->Flags0FC & 0x10) == 0
      || (firstWeather = this->firstWeather, weatherOverride == firstWeather) )
    {
      this->Flags0FC &= ~1u;
    }
    else
    {
      if ( (this->Flags0FC & 0x10) != 0 )
      {
        precipitation = this->precipitation;
        this->secondWeather = 0;
        if ( precipitation )
          sub_53D6C0((int)precipitation);
      }
      else
      {
        this->secondWeather = firstWeather;
      }
      this->firstWeather = weatherOverride;
      if ( !sub_45A500(SaveLoad_CurrentSavegame) )
      {
        unk0D0 = this->unk0D0;
        this->unk0D4 = this->unk0D0;
      }
      sub_540850(this, unk0D0);
      this->Flags0FC |= 1u;
    }
    v14 = this->firstWeather;
    v15 = 1.0;
    if ( v14 )
    {
      if ( !this->secondWeather )
      {
        this->weatherPercent = 1.0;
LABEL_43:
        if ( (this->Flags0FC & 8) != 0 )
          this->weatherPercent = (this->weatherPercent - this->unk0F4) * (flt_B36638 + dbl_A2F928) + this->unk0F4;
        if ( this->secondWeather )
        {
          sub_540850(this, 1.0);
          v15 = 1.0;
        }
        if ( v15 < this->weatherPercent )
        {
          this->Flags0FC &= ~8u;
          this->weatherPercent = v15;
          this->secondWeather = 0;
          this->unk0F4 = 0.0;
        }
        return;
      }
      v19 = 0x18;
      if ( this->unk0D4 <= (double)this->unk0D0 )
        v19 = 0;
      v17 = (double)v19;
      v20 = (flt_B36628 - flt_B36630) * ((double)*((unsigned __int8 *)v14 + 0x4B) * dbl_A3F398) + flt_B36630;
      v16 = (v17 + this->unk0D0 - this->unk0D4) / v20;
    }
    else
    {
      v16 = 0.0;
    }
    this->weatherPercent = v16;
    goto LABEL_43;
  }
}
