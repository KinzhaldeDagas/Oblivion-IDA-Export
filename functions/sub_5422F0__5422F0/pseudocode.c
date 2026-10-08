// Exterior fog decode: updates selected weather and transition state. Maintains Sky::firstWeather, secondWeather, and weatherPercent consumed by fog distance 0x541DD0 and fog color 0x5418F0.
void __thiscall Sky_UpdateWeatherSelectionAndTransition(Sky *this)
{
  TESClimate *firstClimate; // ecx
  TESWeather *v4; // eax
  TESForm *v5; // eax
  TESRegionList *regionListOwner; // eax
  OblivionRegionListNode *p_regions; // edi
  bool v8; // bl
  TESRegion *region; // eax
  TESWeather *weatherOverride; // edi
  TESWeather *v11; // eax
  TESWeather *firstWeather; // eax
  Precipitation *precipitation; // ecx
  TESWeather *v14; // ecx
  double v15; // st6
  double v16; // st5
  double v17; // st5
  int v18; // [esp+8h] [ebp-4h]
  int v19; // [esp+8h] [ebp-4h]
  float v20; // [esp+8h] [ebp-4h]

  firstClimate = this->firstClimate; /*0x5422f5*/
  if ( firstClimate ) /*0x5422fc*/
  {
    if ( (this->Flags0FC & 1) != 0 ) /*0x54230a*/
      goto LABEL_8; /*0x54230a*/
    if ( !this->weather018 ) /*0x54230c*/
      goto LABEL_8; /*0x54230c*/
    v18 = 0x18; /*0x542317*/
    if ( this->unk0D4 <= (double)this->unk0D0 ) /*0x54232c*/
      v18 = 0; /*0x54232e*/
    if ( (double)(0x16 * (0xFF - LOBYTE(firstClimate->weatherAndMoonFlags))) * dbl_A3F398 + dbl_A2F928 < (double)v18 + this->unk0D0 - this->unk0D4 /*0x54236d*/
      && !this->secondWeather )                 // Verified: weatherAndMoonFlags low byte participates in Sky's climate weather-reselection timing formula; field name also reflects moon-presence bits 0x8000 and 0x4000.
    {
LABEL_8:
      v4 = (TESWeather *)OblivionTESWeatherList_SelectWeightedWeather(&firstClimate->weatherList.firstEntry);// Verified: Sky climate reselection passes firstClimate.weatherList to OblivionTESWeatherList_SelectWeightedWeather; null result falls back to default TESWeather FormID 0x15E. /*0x542375*/
      this->weather018 = v4; /*0x54237c*/
      if ( !v4 ) /*0x54237f*/
      {
        v5 = TESForm_LookupByFormID(0x15Eu);    // Exterior fog source: fallback to default weather FormID 0x15E when climate selection returns null. /*0x542392*/
        this->weather018 = (TESWeather *)OblivionDynamicCast( /*0x5423a3*/
                                           v5,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           &TESWeather `RTTI Type Descriptor',
                                           0);
      }
      regionListOwner = g_TESDataHandler->regionListOwner; /*0x5423ab*/
      if ( regionListOwner ) /*0x5423b3*/
      {
        p_regions = &regionListOwner->regions; /*0x5423b5*/
        if ( regionListOwner != (TESRegionList *)0xFFFFFFFC ) /*0x5423ba*/
        {
          do /*0x5423d0*/
          {
            if ( !p_regions->regionForm ) /*0x5423c0*/
              break; /*0x5423c4*/
            TESRegion_RefreshCachedWeather((int **)p_regions->regionForm);// Verified: after climate-selected weather changes, Sky walks all registered regions and refreshes cached region weather using region weather data ID 3. /*0x5423c6*/
            p_regions = p_regions->next; /*0x5423cb*/
          }
          while ( p_regions ); /*0x5423d0*/
        }
      }
    }
    v8 = this->weatherOverride == 0; /*0x5423d6*/
    if ( this->firstWeather && sub_45A500(g_TESSaveLoadGame) && (g_TESSaveLoadGame->flags & 0x10) == 0 || !v8 ) /*0x542400*/
    {
      weatherOverride = this->weatherOverride; /*0x542428*/
    }
    else
    {
      region = reference->region;               // Exterior fog source: active region weather override candidate path. /*0x542407*/
      weatherOverride = this->weather018; /*0x54240f*/
      if ( region ) /*0x542412*/
      {
        v11 = *((TESWeather **)region + 9);     // Exterior fog source: read current region cached weather candidate. /*0x542414*/
        if ( v11 ) /*0x542419*/
        {
          if ( this->unk0DC != 2 ) /*0x542422*/
            weatherOverride = v11;              // Exterior fog source: use region weather override when mode allows (unk0DC != 2). /*0x542424*/
        }
      }
    }
    if ( !weatherOverride /*0x542444*/
      || this->secondWeather && (this->Flags0FC & 0x10) == 0
      || (firstWeather = this->firstWeather, weatherOverride == firstWeather) )
    {
      this->Flags0FC &= ~1u; /*0x542490*/
    }
    else
    {
      if ( (this->Flags0FC & 0x10) != 0 ) /*0x54244c*/
      {
        precipitation = this->precipitation; /*0x54244e*/
        this->secondWeather = 0; /*0x542453*/
        if ( precipitation ) /*0x542456*/
          sub_53D6C0((int)precipitation); /*0x542458*/
      }
      else
      {
        this->secondWeather = firstWeather;     // Exterior fog decode: starts a transition by moving prior firstWeather into secondWeather. /*0x54245f*/
      }
      this->firstWeather = weatherOverride;     // Exterior fog source: install selected weather as Sky::firstWeather. /*0x542462*/
      if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x54246b*/
        this->unk0D4 = this->unk0D0; /*0x54247a*/
      OB_Sky_UpdateHDRWeatherAndTreeDimmerConstants_010201A0(this);// Fog time-boundary decode: after firstWeather changes, 0x540850 initializes transition/weather globals used around sky update; fog still flows through Sky/B333E4. /*0x542482*/
      this->Flags0FC |= 1u; /*0x542487*/
    }
    v14 = this->firstWeather; /*0x542497*/
    v15 = 1.0; /*0x54249a*/
    if ( v14 ) /*0x54249f*/
    {
      if ( !this->secondWeather ) /*0x5424a5*/
      {
        this->weatherPercent = 1.0;             // Exterior fog transition: no secondWeather means weatherPercent is pinned to 1.0. /*0x5424aa*/
LABEL_43:
        if ( (this->Flags0FC & 8) != 0 ) /*0x54251e*/
          this->weatherPercent = (this->weatherPercent - this->unk0F4) * (unk_B36638 + dbl_A2F928) + this->unk0F4;// Fog weather-field decode: Flags0FC bit 3 smooths weatherPercent from unk0F4 toward computed percent; affects fog color and distance transition blends. /*0x542540*/
        if ( this->secondWeather ) /*0x542546*/
        {
          OB_Sky_UpdateHDRWeatherAndTreeDimmerConstants_010201A0(this);// Fog time-boundary decode: while secondWeather remains active, 0x540850 refreshes transition/weather globals using current weatherPercent. /*0x54254f*/
          v15 = 1.0; /*0x542554*/
        }
        if ( v15 < this->weatherPercent ) /*0x542561*/
        {
          this->Flags0FC &= ~8u;                // Fog weather-field decode: transition complete; clears smoothing flag when weatherPercent exceeds 1.0. /*0x542563*/
          this->weatherPercent = v15; /*0x54256a*/
          this->secondWeather = 0;              // Fog weather-field decode: transition complete; clears secondWeather so exterior fog uses firstWeather at weatherPercent 1.0. /*0x542572*/
          this->unk0F4 = 0.0;                   // Fog weather-field decode: transition complete; resets unk0F4 smoothing baseline after clamping weatherPercent. /*0x542575*/
        }
        return; /*0x542575*/
      }
      v19 = 0x18; /*0x5424b8*/
      if ( this->unk0D4 <= (double)this->unk0D0 ) /*0x5424cd*/
        v19 = 0; /*0x5424cf*/
      v17 = (double)v19; /*0x5424d3*/
      v20 = (unk_B36628 - unk_B36630) * ((double)*((unsigned __int8 *)v14 + 0x4B) * dbl_A3F398) + unk_B36630;// Fog weather-field decode: transition duration derives from firstWeather byte +0x4B scaled between transition bounds; drives weatherPercent for fog color and distance. /*0x542509*/
      v16 = (v17 + this->unk0D0 - this->unk0D4) / v20; /*0x54250d*/
    }
    else
    {
      v16 = 0.0; /*0x5424a1*/
    }
    this->weatherPercent = v16;                 // Exterior fog transition: weatherPercent = elapsed/transitionDuration; firstWeather contributes percent and secondWeather contributes 1-percent in fog color/distance blends. /*0x542511*/
    goto LABEL_43; /*0x542511*/
  }
}
