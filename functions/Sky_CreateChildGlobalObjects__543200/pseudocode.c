// Verified: accepts an explicit Climate, else resolves built-in Climate FormID 0x15F; stores Sky.firstClimate and refreshes stars, sun textures, and moon child objects.
TESClimate *__thiscall Sky_SetClimateAndRefreshChildren(Sky *this, TESClimate *climate, char forceRefresh)
{
  TESClimate *result; // eax
  TESForm *v5; // eax
  UInt32 unk0DC; // eax
  char *v7; // eax
  NiAVObject *v8; // eax
  Sun *sun; // eax
  UInt32 v10; // ecx
  TESTexture *v11; // edi
  char *m_data; // eax
  Moon *v13; // eax
  Moon *v14; // eax
  NiNode *nodeMoonsRoot; // ecx
  Moon *masserMoon; // ecx
  TESClimate *firstClimate; // ecx
  Moon *v18; // eax
  Moon *v19; // eax
  NiNode *v20; // ecx
  Moon *secundaMoon; // ecx

  result = climate; /*0x543224*/
  if ( climate /*0x543250*/
    || (v5 = TESForm_LookupByFormID(0x15Fu),
        (result = (TESClimate *)OblivionDynamicCast(
                                  v5,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESClimate `RTTI Type Descriptor',
                                  0)) != 0) )   // Verified Oblivion null-climate behavior: Sky_SetClimateAndRefreshChildren resolves built-in Climate FormID 0x15F whenever input is null. Fallout divergence: Sky::SetCurrentClimate uses the built-in only when current climate is null or force is set; otherwise a null input preserves current climate.
  {
    if ( this->firstClimate != result || forceRefresh ) /*0x543260*/
    {
      this->Flags0FC |= 0x3F00u; /*0x543266*/
      this->firstClimate = result; /*0x543272*/
      sub_540380(this); /*0x543275*/
      if ( this->stars ) /*0x54327a*/
      {
        unk0DC = this->unk0DC; /*0x543280*/
        if ( unk0DC == 3 || unk0DC == 2 ) /*0x54328e*/
        {
          v7 = (char *)this->firstClimate->model.vtbl->GetModelPath(&this->firstClimate->model); /*0x54329b*/
          sub_544780((NiNode **)this->stars, v7); /*0x5432a1*/
          v8 = (NiAVObject *)(*(int (__thiscall **)(Stars *))(*(_DWORD *)this->stars + 4))(this->stars); /*0x5432b4*/
          BSShaderManager_AssignShadersRecursive(v8, 0xAu, 0, 1); /*0x5432b7*/
        }
      }
      sun = this->sun; /*0x5432bf*/
      if ( sun ) /*0x5432c4*/
      {
        v10 = this->unk0DC; /*0x5432ca*/
        if ( v10 == 3 || v10 == 2 ) /*0x5432d8*/
        {
          sub_542D30((int)sun->membr.SunBillboard, (int)this->firstClimate->weatherTextures, sub_542E40, 0); /*0x5432ec*/
          v11 = &this->firstClimate->weatherTextures[1]; /*0x5432f7*/
          if ( OB_RendererGlobalState_010201A0[0x1D7] ) /*0x5432fa*/
            goto LABEL_18; /*0x5432fa*/
          if ( this->firstClimate == (TESClimate *)0xFFFFFFBC ) /*0x543305*/
            goto LABEL_18; /*0x543305*/
          m_data = this->firstClimate->weatherTextures[1].path.m_data; /*0x543307*/
          if ( !m_data ) /*0x54330c*/
            m_data = EmptyString; /*0x54330e*/
          if ( CRT_StricmpLocaleDispatch(m_data, "Sky\\SunGlare.dds") ) /*0x543319*/
LABEL_18:
            sub_542D30((int)this->sun->membr.SunGlareBillboard, (int)v11, sub_542E70, 0); /*0x54334e*/
          else
            sub_53FBE0((int)this->sun->membr.SunGlareBillboard, "Textures\\Sky\\SunGlareNonHDR.dds", sub_542E70, 0); /*0x543338*/
        }
      }
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x543358*/
      if ( (signed __int16)this->firstClimate->weatherAndMoonFlags >= 0 || this->masserMoon )// Verified: TESClimate weatherAndMoonFlags bit 0x8000 controls whether Sky creates the Masser moon object. /*0x543374*/
      {
        if ( (signed __int16)this->firstClimate->weatherAndMoonFlags >= 0 ) /*0x543400*/
        {
          masserMoon = this->masserMoon; /*0x543402*/
          if ( masserMoon ) /*0x543407*/
            (**(void (__thiscall ***)(Moon *, int))masserMoon)(masserMoon, 1); /*0x54340f*/
          this->masserMoon = 0; /*0x543411*/
        }
      }
      else
      {
        v13 = (Moon *)FormHeapAlloc(0x7Cu); /*0x543380*/
        if ( v13 ) /*0x543396*/
          v14 = Moon::Moon( /*0x5433da*/
                  v13,
                  "Masser",
                  MEMORY[0xB365C8],
                  MEMORY[0xB365D0],
                  MEMORY[0xB365D8],
                  unk_B365E0,
                  MEMORY[0xB365E8],
                  (int)stru_B365F0.value);
        else
          v14 = 0; /*0x5433e1*/
        nodeMoonsRoot = this->nodeMoonsRoot; /*0x5433e3*/
        this->masserMoon = v14; /*0x5433e6*/
        (*(void (__thiscall **)(Moon *, NiNode *, const char *))(*(_DWORD *)v14 + 0x10))(v14, nodeMoonsRoot, "Masser"); /*0x5433fa*/
      }
      firstClimate = this->firstClimate; /*0x543418*/
      if ( (firstClimate->weatherAndMoonFlags & 0x4000) == 0 || this->secundaMoon )// Verified: TESClimate weatherAndMoonFlags bit 0x4000 controls whether Sky creates the Secunda moon object. /*0x543429*/
      {
        if ( (firstClimate->weatherAndMoonFlags & 0x4000) == 0 ) /*0x5434b5*/
        {
          secundaMoon = this->secundaMoon; /*0x5434b7*/
          if ( secundaMoon ) /*0x5434bc*/
            (**(void (__thiscall ***)(Moon *, int))secundaMoon)(secundaMoon, 1); /*0x5434c4*/
          this->secundaMoon = 0; /*0x5434c6*/
        }
      }
      else
      {
        v18 = (Moon *)FormHeapAlloc(0x7Cu); /*0x543435*/
        if ( v18 ) /*0x54344b*/
          v19 = Moon::Moon( /*0x54348f*/
                  v18,
                  "Secunda",
                  MEMORY[0xB365F8],
                  MEMORY[0xB36600],
                  MEMORY[0xB36608],
                  unk_B36610,
                  MEMORY[0xB36618],
                  (int)stru_B36620.value);
        else
          v19 = 0; /*0x543496*/
        v20 = this->nodeMoonsRoot; /*0x543498*/
        this->secundaMoon = v19; /*0x54349b*/
        (*(void (__thiscall **)(Moon *, NiNode *, const char *))(*(_DWORD *)v19 + 0x10))(v19, v20, "Secunda"); /*0x5434af*/
      }
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x5434cf*/
      NiAVObject_InitializePropertyState((NiAVObject *)this->nodeSkyRoot); /*0x5434da*/
      NiNode_UpdateDynamicEffectState(this->nodeSkyRoot); /*0x5434e2*/
      return (TESClimate *)NiAVObject_UpdateNiAVObject((NiAVObject *)this->nodeSkyRoot, 0.0, 1); /*0x5434f2*/
    }
  }
  return result; /*0x5434f7*/
}
