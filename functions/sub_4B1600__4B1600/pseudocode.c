// Create/find and configure the NiPointLight attached to a TESObjectLIGH reference. lightFlags_7C bit 0x20 ('Off by default') suppresses the normal non-actor path; bit 0x04 ('Negative') negates RGB. The routine registers the source with ShadowSceneNode and seeds attenuation/dimmer, but does not read editor bits 0x200/0x400 and does not admit shadow casters.
void __thiscall TESObjectLIGH_ConfigureReferencePointLight(
        TESObjectLIGH_DecodedLayout *self,
        TESObjectREFR *reference,
        NiNode *referenceRoot)
{
  TESForm *v3; // edi
  TESObjectCELL *ParentCell; // eax
  bool v5; // zf
  unsigned __int8 *v6; // eax
  double v7; // rt0
  NiAVObject *v8; // eax
  NiNode *v9; // edi
  int v10; // ebx
  NiAVObject *data; // ecx
  int v12; // esi
  int v13; // eax
  char v14; // al
  int v15; // esi
  TESObjectLIGH_DecodedLayout *v16; // ebx
  const char *v17; // eax
  NiLight *v18; // eax
  float v19; // edx
  int v20; // eax
  int v21; // eax
  double radius_74; // st7
  char v23; // bl
  DWORD CurrentThreadId; // eax
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax
  double fade_88; // st7
  size_t _8; // [esp+8h] [ebp-160h]
  float v29; // [esp+2Ch] [ebp-13Ch]
  double v30; // [esp+30h] [ebp-138h]
  float v31; // [esp+30h] [ebp-138h]
  float v32; // [esp+30h] [ebp-138h]
  float v33; // [esp+38h] [ebp-130h]
  float v34; // [esp+3Ch] [ebp-12Ch]
  float v35; // [esp+40h] [ebp-128h]
  float v36; // [esp+50h] [ebp-118h]
  char Dest[260]; // [esp+54h] [ebp-114h] BYREF
  unsigned int v38; // [esp+164h] [ebp-4h]

  if ( reference && referenceRoot )
  {
    v3 = reference->vtbl->GetBaseForm(reference); /*0x4b166a*/
    if ( (self->lightFlags_7C & 0x20) != 0 /*0x4b16ad*/
      || Shared_GetDwordAtOffset40(reference)
      && (v30 = reference->vtbl->GetPos(reference)[2],
          ParentCell = Shared_GetDwordAtOffset40(reference),
          TESObjectCELL_GetWaterHeight((ExtraDataList *)ParentCell) > v30) )// Test lightFlags_7C bit 0x20 ('Off by default' in the Oblivion Construction Set). Set bypasses the ordinary parent-cell/water-height precheck and later suppresses the non-actor reference-light path.
    {
      if ( v3->member.type == kFormType_Light && sub_4DE320((int)v3, (int)referenceRoot) ) /*0x4b16b6*/
      {
        sub_46AB60(reference, 1); /*0x4b16c6*/
        sub_4B1580((int)referenceRoot); /*0x4b16cc*/
      }
      v5 = !reference->vtbl->IsActor(reference); /*0x4b16e1*/
      v6 = (unsigned __int8 *)self; /*0x4b16e3*/
      if ( v5 && (self->lightFlags_7C & 0x20) != 0 ) /*0x4b16ec*/
        return;                                 // For a non-actor reference, lightFlags_7C bit 0x20 ('Off by default') exits without creating/configuring the attached point light. /*0x4b16ec*/
    }
    else
    {
      v6 = (unsigned __int8 *)self; /*0x4b16f4*/
    }
    v7 = dbl_A3DDD8; /*0x4b171c*/
    v33 = (double)v6[0x78] / v7; /*0x4b171e*/
    v34 = (double)v6[0x79] / v7; /*0x4b172c*/
    v35 = (double)v6[0x7A] / v7; /*0x4b1736*/
    if ( (v6[0x7C] & 4) != 0 )                  // Test lightFlags_7C bit 0x04 ('Negative' in the Oblivion Construction Set). Set negates the normalized RGB components before configuring the NiPointLight. /*0x4b173a*/
    {
      v29 = -v33; /*0x4b1742*/
      v36 = -v34; /*0x4b174c*/
      v31 = -v35; /*0x4b1756*/
      v33 = v29; /*0x4b176a*/
      v34 = v36; /*0x4b177a*/
      v35 = v31; /*0x4b1786*/
    }
    v8 = referenceRoot->vtbl->super.GetObjectByName(referenceRoot, "AttachLight"); /*0x4b1796*/
    if ( !v8 || (v9 = (NiNode *)v8->vtbl->super.Unk_02((NiObject *)v8)) == 0 ) /*0x4b17a9*/
      v9 = referenceRoot; /*0x4b17ab*/
    v10 = 0; /*0x4b17b4*/
    if ( v9->members.children.end )
    {
      while ( 1 )
      {
        data = v9->members.children.data; /*0x4b17be*/
        v12 = *((_DWORD *)&data->vtbl + v10); /*0x4b17c4*/
        if ( v12 )
        {
          v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v12 + 4))(*((_DWORD *)&data->vtbl + v10)); /*0x4b17d2*/
          if ( v13 ) /*0x4b17d6*/
          {
            while ( (float *)v13 != &MEMORY[0xB3F9B0][0xF4] ) /*0x4b17e5*/
            {
              v13 = *(_DWORD *)(v13 + 4); /*0x4b17eb*/
              if ( !v13 ) /*0x4b17f0*/
                goto LABEL_23; /*0x4b17f0*/
            }
            v14 = 1; /*0x4b187c*/
          }
          else
          {
LABEL_23:
            v14 = 0; /*0x4b17f2*/
          }
          v15 = v14 != 0 ? v12 : 0;
          if ( v15 ) /*0x4b17fc*/
            break; /*0x4b17fc*/
        }
        if ( v9->members.children.end <= (unsigned int)++v10 ) /*0x4b180e*/
          goto LABEL_26; /*0x4b180e*/
      }
      v16 = self; /*0x4b18bc*/
    }
    else
    {
LABEL_26:
      v16 = self; /*0x4b1810*/
      v17 = (const char *)(*(int (__thiscall **)(TESObjectLIGH_DecodedLayout *))(*(_DWORD *)self->base_00 + 0xD4))(self); /*0x4b181e*/
      HIDWORD(_8) = "%s PtLight"; /*0x4b1821*/
      LODWORD(_8) = 0x104; /*0x4b182a*/
      _snprintf(Dest, _8, v17); /*0x4b1830*/
      v18 = (NiLight *)FormHeapAlloc(0x114u); /*0x4b183a*/
      v15 = (int)v18; /*0x4b183f*/
      v38 = 0; /*0x4b184a*/
      if ( v18 ) /*0x4b1855*/
      {
        NiLight::NiLight(v18); /*0x4b1859*/
        *(float *)(v15 + 0x108) = 0.0; /*0x4b1860*/
        *(_DWORD *)v15 = &NiPointLight::`vftable'; /*0x4b1866*/
        *(float *)(v15 + 0x10C) = 1.0; /*0x4b186e*/
        *(float *)(v15 + 0x110) = 0.0; /*0x4b1874*/
      }
      else
      {
        v15 = 0; /*0x4b1883*/
      }
      v38 = 0xFFFFFFFF; /*0x4b188c*/
      NiObjectNET_SetName((NiObjectNET *)v15, Dest); /*0x4b1897*/
      ((void (__thiscall *)(NiNode *, int, int))v9->vtbl->AddObject)(v9, v15, 1); /*0x4b18a9*/
      NiAVObject_UpdateNiAVObject((NiAVObject *)v9, 0.0, 0); /*0x4b18b5*/
    }
    TESObjectREFR_SetExtraLightPayload(reference, (NiLight *)v15);// Install the ordinary ExtraLight type 0x30 attached-light payload on the reference. /*0x4b18c3*/
    *(float *)(v15 + 0xE0) = MEMORY[0xB3F9B0][0x38]; /*0x4b18cd*/
    *(float *)(v15 + 0xE4) = MEMORY[0xB3F9B0][0x39]; /*0x4b18d9*/
    v19 = MEMORY[0xB3F9B0][0x3A]; /*0x4b18df*/
    v20 = ++*(_DWORD *)(v15 + 0xB8); /*0x4b18ec*/
    *(float *)(v15 + 0xE8) = v19; /*0x4b18f2*/
    *(float *)(v15 + 0xF8) = MEMORY[0xB3F9B0][0x38]; /*0x4b18fe*/
    *(float *)(v15 + 0xFC) = MEMORY[0xB3F9B0][0x39]; /*0x4b190a*/
    v21 = v20 + 1; /*0x4b1916*/
    *(float *)(v15 + 0x100) = MEMORY[0xB3F9B0][0x3A]; /*0x4b1919*/
    *(_DWORD *)(v15 + 0xB8) = v21; /*0x4b191f*/
    radius_74 = (double)(int)v16->radius_74; /*0x4b1925*/
    if ( (int)v16->radius_74 < 0 ) /*0x4b192d*/
      radius_74 = radius_74 + flt_A2FC78; /*0x4b192f*/
    v32 = radius_74; /*0x4b1935*/
    v23 = 0; /*0x4b1940*/
    *(float *)(v15 + 0xF8) = v32; /*0x4b194a*/
    *(float *)(v15 + 0xFC) = v32; /*0x4b1960*/
    *(float *)(v15 + 0xEC) = v33; /*0x4b196a*/
    *(float *)(v15 + 0x100) = v32; /*0x4b1974*/
    *(float *)(v15 + 0xF0) = v34; /*0x4b197e*/
    *(float *)(v15 + 0xF4) = v35; /*0x4b1984*/
    *(_DWORD *)(v15 + 0xB8) = v21 + 2; /*0x4b198a*/
    if ( unk_B43384 ) /*0x4b1990*/
    {
      EnterCriticalSection(&unk_B43400); /*0x4b199d*/
      CurrentThreadId = GetCurrentThreadId(); /*0x4b19a3*/
      ++unk_B4347C; /*0x4b19ae*/
      unk_B43478 = CurrentThreadId; /*0x4b19b4*/
      v23 = 1; /*0x4b19b9*/
    }
    ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x4b19c7*/
    ShadowSceneNode_FindOrCreateFullLightForSource(ShadowSceneNode, (void *)v15, 0); /*0x4b19d1*/
    if ( v23 ) /*0x4b19d8*/
    {
      v5 = unk_B4347C-- == 1; /*0x4b19da*/
      if ( v5 ) /*0x4b19e0*/
        unk_B43478 = 0; /*0x4b19e2*/
      LeaveCriticalSection(&unk_B43400); /*0x4b19f1*/
    }
    NiPointLight_ConfigureAttenuationFromLightRadius(self->radius_74, v15);// Configure point-light attenuation from TESObjectLIGH::radius_74 using the engine interior/exterior attenuation policy. /*0x4b1a00*/
    fade_88 = self->fade_88;                    // Seed NiLight::m_fDimmer (+0xDC) from TESObjectLIGH::fade_88 (FNAM). /*0x4b1a05*/
    ++*(_DWORD *)(v15 + 0xB8); /*0x4b1a0b*/
    *(float *)(v15 + 0xDC) = fade_88; /*0x4b1a11*/
  }
}
