void __userpurge sub_542F20(Sky *this@<ecx>, double WaterHeight@<st0>, float a4)
{
  NiAVObjectVtbl *vtbl; // eax
  TESObjectCELL *ParentCell; // eax
  Atmosphere *atmosphere; // ecx
  Stars *stars; // ecx
  Clouds *clouds; // ecx
  Sun *sun; // ecx
  char v11; // bl
  Moon *masserMoon; // eax
  Moon *secundaMoon; // eax
  Moon *v14; // ecx
  Moon *v15; // ecx
  Precipitation *precipitation; // ecx
  double v17; // st6
  double v18; // [esp+38h] [ebp-8h]

  if ( !sub_45A500(SaveLoad_CurrentSavegame) || (SaveLoad_CurrentSavegame->flags & 0x400) != 0 )
  {
    nullsub_returnTrue_0arg();
    TimeGlobals_GetGameHour(&TimeGlobals);
    this->unk0D0 = WaterHeight;
    if ( TESDataHandler_g_PlayerRef
      && TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef)
      && (g_worldScenegraph->super.children.end ? (vtbl = g_worldScenegraph->super.children.data->vtbl) : (vtbl = 0),
          v18 = *(float *)&vtbl[1].super.Unk_03,
          ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef),
          WaterHeight = TESObjectCELL_GetWaterHeight((ExtraDataList *)ParentCell),
          WaterHeight > v18) )
    {
      this->Flags0FC |= 4u;
    }
    else
    {
      this->Flags0FC &= ~4u;
    }
    if ( this->unk0DC < 2 )
    {
      this->nodeSkyRoot->members.super.m_flags |= 1u;
      *((_WORD *)this->sun->membr.SunGlareBillboard + 0xC) |= 1u;
    }
    else
    {
      this->nodeSkyRoot->members.super.m_flags &= ~1u;
      *((_WORD *)this->sun->membr.SunGlareBillboard + 0xC) &= ~1u;
    }
    sub_5422F0(this, WaterHeight);
    if ( sub_45A500(SaveLoad_CurrentSavegame) )
      this->Flags0FC |= 1u;
    sub_5418F0(this);
    sub_541DD0(this);
    sub_53FF90(this);
    sub_542590(this);
    atmosphere = this->atmosphere;
    if ( atmosphere )
      ((void (__stdcall *)(Sky *, _DWORD))atmosphere->__vftbl[1].GetObjectNode)(this, LODWORD(a4));
    stars = this->stars;
    if ( stars )
      (*(void (__stdcall **)(Sky *, _DWORD))(*(_DWORD *)stars + 0xC))(this, LODWORD(a4));
    clouds = this->clouds;
    if ( clouds )
      ((void (__stdcall *)(Sky *, _DWORD))clouds->__vftbl[1].GetObjectNode)(this, LODWORD(a4));
    sun = this->sun;
    if ( sun )
      ((void (__stdcall *)(Sky *, _DWORD))sun->vtbl[1].GetObjectNode)(this, LODWORD(a4));
    if ( (this->Flags0FC & 0x20) != 0 && this->unk0EC < TimeGlobals_GetGameDaysPassed(&TimeGlobals)
      || sub_45A500(SaveLoad_CurrentSavegame) )
    {
      v11 = sub_53C5E0(this);
      masserMoon = this->masserMoon;
      if ( masserMoon )
      {
        if ( v11 )
        {
          if ( !*((_DWORD *)masserMoon + 0x1C) )
            *((_DWORD *)this->masserMoon + 0x1C) = sub_45A500(SaveLoad_CurrentSavegame) + 1;
        }
      }
      secundaMoon = this->secundaMoon;
      if ( secundaMoon )
      {
        if ( v11 )
        {
          if ( !*((_DWORD *)secundaMoon + 0x1C) )
            *((_DWORD *)this->secundaMoon + 0x1C) = sub_45A500(SaveLoad_CurrentSavegame) + 1;
        }
      }
      this->unk0EC = TimeGlobals_GetGameDaysPassed(&TimeGlobals);
    }
    v14 = this->masserMoon;
    if ( v14 )
      (*(void (__stdcall **)(Sky *, _DWORD))(*(_DWORD *)v14 + 0xC))(this, LODWORD(a4));
    v15 = this->secundaMoon;
    if ( v15 )
      (*(void (__stdcall **)(Sky *, _DWORD))(*(_DWORD *)v15 + 0xC))(this, LODWORD(a4));
    precipitation = this->precipitation;
    if ( precipitation )
      sub_53F4C0((SkyObject *)precipitation, a4);
    if ( this->unk0E4 > 0.0 )
    {
      v17 = (double)(int)(Seed - this->unk0E8);
      if ( (int)(Seed - this->unk0E8) < 0 )
        v17 = v17 + flt_A2FC78;
      this->unk0E4 = 1.0 - v17 / (flt_B36640 * dbl_A2FC70);
    }
    if ( this->unk0E4 < 0.0 )
      this->unk0E4 = 0.0;
    sub_498060((int *)&this->unk03C[3]);
    nullsub_returnTrue_0arg();
    this->Flags0FC &= 0xFFFFFFFC;
  }
}
