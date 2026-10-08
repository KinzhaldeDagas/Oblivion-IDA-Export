// Oblivion's normal Sky frame update: determines underwater state and sky visibility, advances weather/time, calls UpdateColors and UpdateFog, updates wind/effects and every active sky child, publishes the sky vector, and clears transient flags.
void __thiscall Sky__Update(Sky *this, float deltaTime)
{
  double GameHour; // st7
  int v4; // eax
  ExtraDataList *DwordAtOffset40; // eax
  Atmosphere *atmosphere; // ecx
  Stars *stars; // ecx
  Clouds *clouds; // ecx
  Sun *sun; // ecx
  char v10; // bl
  Moon *masserMoon; // eax
  Moon *secundaMoon; // eax
  Moon *v13; // ecx
  Moon *v14; // ecx
  Precipitation *precipitation; // ecx
  double v16; // st6
  double v17; // [esp+38h] [ebp-8h]

  if ( !sub_45A500(g_TESSaveLoadGame) || (g_TESSaveLoadGame->flags & 0x400) != 0 )
  {
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x542f4b*/
    GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x542f58*/
    this->unk0D0 = GameHour; /*0x542f5d*/
    if ( reference
      && Shared_GetDwordAtOffset40(reference)
      && (*((_WORD *)g_WorldSceneReceiverRoot + 0x5B) ? (v4 = **((_DWORD **)g_WorldSceneReceiverRoot + 0x2C)) : (v4 = 0),
          v17 = *(float *)(v4 + 0x90),
          DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(reference),
          GameHour = TESObjectCELL_GetWaterHeight(DwordAtOffset40),
          GameHour > v17) )
    {
      this->Flags0FC |= 4u;                     // Fog water decode: normal sky update sets Flags0FC bit 2 when cell water height exceeds active scene height. /*0x542fb8*/
    }
    else
    {
      this->Flags0FC &= ~4u;                    // Fog water decode: normal sky update clears Flags0FC bit 2 when active scene height is not below water. /*0x542fc1*/
    }
    if ( this->unk0DC < 2 ) /*0x542fd1*/
    {
      this->nodeSkyRoot->members.super.m_flags |= 1u; /*0x542ff2*/
      *((_WORD *)this->sun->membr.SunGlareBillboard + 0xC) |= 1u; /*0x542ffd*/
    }
    else
    {
      this->nodeSkyRoot->members.super.m_flags &= ~1u; /*0x542fdf*/
      *((_WORD *)this->sun->membr.SunGlareBillboard + 0xC) &= ~1u; /*0x542fe9*/
    }
    sub_5422F0(this, GameHour); /*0x543004*/
    if ( sub_45A500(g_TESSaveLoadGame) ) /*0x54300f*/
      this->Flags0FC |= 1u; /*0x543018*/
    Sky__UpdateColors(this);                    // Exterior fog decode: normal sky update refreshes active sky/weather colors before fog distance update. /*0x543021*/
    Sky__UpdateFog(this);                       // Fog decode: normal sky update calls 0x541DD0; this may take water branch if Flags0FC bit 2 was set earlier in 0x542F20. /*0x543028*/
    sub_53FF90(this); /*0x54302f*/
    sub_542590(this); /*0x543036*/
    atmosphere = this->atmosphere; /*0x54303b*/
    if ( atmosphere ) /*0x543040*/
      ((void (__stdcall *)(Sky *, _DWORD))atmosphere->__vftbl[1].GetObjectNode)(this, LODWORD(deltaTime));// Exterior fog decode: normal sky update calls Atmosphere virtual update after fog distances; this reaches 0x53B0E0 to copy Sky fog into B333E4. /*0x543050*/
    stars = this->stars; /*0x543052*/
    if ( stars ) /*0x543057*/
      (*(void (__stdcall **)(Sky *, _DWORD))(*(_DWORD *)stars + 0xC))(this, LODWORD(deltaTime)); /*0x543067*/
    clouds = this->clouds; /*0x543069*/
    if ( clouds ) /*0x54306e*/
      ((void (__stdcall *)(Sky *, _DWORD))clouds->__vftbl[1].GetObjectNode)(this, LODWORD(deltaTime)); /*0x54307e*/
    sun = this->sun; /*0x543080*/
    if ( sun ) /*0x543085*/
      ((void (__stdcall *)(Sky *, _DWORD))sun->vtbl[1].GetObjectNode)(this, LODWORD(deltaTime)); /*0x543095*/
    if ( (this->Flags0FC & 0x20) != 0 && this->unk0EC < TimeGlobals_GetGameDaysPassed(&MEMORY[0xB332E0]) /*0x5430b8*/
      || sub_45A500(g_TESSaveLoadGame) )
    {
      v10 = sub_53C5E0(this); /*0x5430c8*/
      masserMoon = this->masserMoon; /*0x5430ca*/
      if ( masserMoon ) /*0x5430d2*/
      {
        if ( v10 ) /*0x5430d6*/
        {
          if ( !*((_DWORD *)masserMoon + 0x1C) ) /*0x5430d8*/
            *((_DWORD *)this->masserMoon + 0x1C) = sub_45A500(g_TESSaveLoadGame) + 1; /*0x5430f5*/
        }
      }
      secundaMoon = this->secundaMoon; /*0x5430f8*/
      if ( secundaMoon ) /*0x5430fd*/
      {
        if ( v10 ) /*0x543101*/
        {
          if ( !*((_DWORD *)secundaMoon + 0x1C) ) /*0x543103*/
            *((_DWORD *)this->secundaMoon + 0x1C) = sub_45A500(g_TESSaveLoadGame) + 1; /*0x543120*/
        }
      }
      this->unk0EC = TimeGlobals_GetGameDaysPassed(&MEMORY[0xB332E0]); /*0x54312d*/
    }
    v13 = this->masserMoon; /*0x543134*/
    if ( v13 ) /*0x543139*/
      (*(void (__stdcall **)(Sky *, _DWORD))(*(_DWORD *)v13 + 0xC))(this, LODWORD(deltaTime)); /*0x543149*/
    v14 = this->secundaMoon; /*0x54314b*/
    if ( v14 ) /*0x543150*/
      (*(void (__stdcall **)(Sky *, _DWORD))(*(_DWORD *)v14 + 0xC))(this, LODWORD(deltaTime)); /*0x543160*/
    precipitation = this->precipitation; /*0x543162*/
    if ( precipitation ) /*0x543167*/
      sub_53F4C0((SkyObject *)precipitation, deltaTime); /*0x543171*/
    if ( this->unk0E4 > 0.0 ) /*0x543183*/
    {
      v16 = (double)(*(_DWORD *)&MEMORY[0xB33E90][0x10] - this->unk0E8); /*0x543196*/
      if ( (signed int)(*(_DWORD *)&MEMORY[0xB33E90][0x10] - this->unk0E8) < 0 ) /*0x54319a*/
        v16 = v16 + flt_A2FC78; /*0x54319c*/
      this->unk0E4 = 1.0 - v16 / (unk_B36640 * dbl_A2FC70); /*0x5431b4*/
    }
    if ( this->unk0E4 < 0.0 ) /*0x5431c5*/
      this->unk0E4 = 0.0; /*0x5431c7*/
    sub_498060((int *)&this->unk03C[3]); /*0x5431d5*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x5431dc*/
    this->Flags0FC &= 0xFFFFFFFC; /*0x5431e4*/
  }
}
