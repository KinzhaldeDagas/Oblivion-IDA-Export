TESClimate *__thiscall Sky_CreateChildGlobalObjects(Sky *this, TESClimate *a2, char a3)
{
  TESClimate *result; // eax
  TESForm *v5; // eax
  UInt32 unk0DC; // eax
  _BYTE *v7; // eax
  NiAVObject *v8; // eax
  Sun *sun; // eax
  UInt32 v10; // ecx
  char *v11; // edi
  char *v12; // eax
  Moon *v13; // eax
  Moon *v14; // eax
  NiNode *nodeMoonsRoot; // ecx
  Moon *masserMoon; // ecx
  TESClimate *firstClimate; // ecx
  Moon *v18; // eax
  Moon *v19; // eax
  NiNode *v20; // ecx
  Moon *secundaMoon; // ecx

  result = a2;
  if ( a2
    || (v5 = TESForm_LookupByFormID(0x15Fu),
        (result = (TESClimate *)OblivionDynamicCast(
                                  v5,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESClimate `RTTI Type Descriptor',
                                  0)) != 0) )
  {
    if ( this->firstClimate != result || a3 )
    {
      this->Flags0FC |= 0x3F00u;
      this->firstClimate = result;
      sub_540380(this);
      if ( this->stars )
      {
        unk0DC = this->unk0DC;
        if ( unk0DC == 3 || unk0DC == 2 )
        {
          v7 = (_BYTE *)(*(int (__thiscall **)(char *))(*((_DWORD *)this->firstClimate + 6) + 0x14))((char *)this->firstClimate + 0x18);
          sub_544780((Ni2DBuffer **)this->stars, v7);
          v8 = (NiAVObject *)(*(int (__thiscall **)(Stars *))(*(_DWORD *)this->stars + 4))(this->stars);
          sub_7B8940(v8, 0xA, 0, 1);
        }
      }
      sun = this->sun;
      if ( sun )
      {
        v10 = this->unk0DC;
        if ( v10 == 3 || v10 == 2 )
        {
          sub_542D30((int)sun->membr.SunBillboard, (int)this->firstClimate + 0x38, sub_542E40, 0);
          v11 = (char *)this->firstClimate + 0x44;
          if ( UseHDR )
            goto LABEL_18;
          if ( this->firstClimate == (TESClimate *)0xFFFFFFBC )
            goto LABEL_18;
          v12 = *((char **)this->firstClimate + 0x12);
          if ( !v12 )
            v12 = EmptyString;
          if ( _strcmp(v12, "Sky\\SunGlare.dds") )
LABEL_18:
            sub_542D30((int)this->sun->membr.SunGlareBillboard, (int)v11, sub_542E70, 0);
          else
            sub_53FBE0((int)this->sun->membr.SunGlareBillboard, "Textures\\Sky\\SunGlareNonHDR.dds", sub_542E70, 0);
        }
      }
      nullsub_returnTrue_0arg();
      if ( *((char *)this->firstClimate + 0x55) >= 0 || this->masserMoon )
      {
        if ( *((char *)this->firstClimate + 0x55) >= 0 )
        {
          masserMoon = this->masserMoon;
          if ( masserMoon )
            (**(void (__thiscall ***)(Moon *, int))masserMoon)(masserMoon, 1);
          this->masserMoon = 0;
        }
      }
      else
      {
        v13 = (Moon *)FormHeapAlloc(0x7Cu);
        if ( v13 )
          v14 = Moon::Moon(
                  v13,
                  "Masser",
                  fMasserAngleFadeStart,
                  fMasserAngleFadeEnd,
                  fMasserAngleShadowEarlyFade,
                  flt_B365E0,
                  fMasserZOffset,
                  dword_B365F0);
        else
          v14 = 0;
        nodeMoonsRoot = this->nodeMoonsRoot;
        this->masserMoon = v14;
        (*(void (__thiscall **)(Moon *, NiNode *, const char *))(*(_DWORD *)v14 + 0x10))(v14, nodeMoonsRoot, "Masser");
      }
      firstClimate = this->firstClimate;
      if ( (*((_BYTE *)firstClimate + 0x55) & 0x40) == 0 || this->secundaMoon )
      {
        if ( (*((_BYTE *)firstClimate + 0x55) & 0x40) == 0 )
        {
          secundaMoon = this->secundaMoon;
          if ( secundaMoon )
            (**(void (__thiscall ***)(Moon *, int))secundaMoon)(secundaMoon, 1);
          this->secundaMoon = 0;
        }
      }
      else
      {
        v18 = (Moon *)FormHeapAlloc(0x7Cu);
        if ( v18 )
          v19 = Moon::Moon(
                  v18,
                  "Secunda",
                  fSecundaAngleFadeStart,
                  fSecundaAngleFadeEnd,
                  fSecundaAngleShadowEarlyFade,
                  flt_B36610,
                  fSecunda_ZOffset,
                  dword_B36620);
        else
          v19 = 0;
        v20 = this->nodeMoonsRoot;
        this->secundaMoon = v19;
        (*(void (__thiscall **)(Moon *, NiNode *, const char *))(*(_DWORD *)v19 + 0x10))(v19, v20, "Secunda");
      }
      nullsub_returnTrue_0arg();
      NiAVObject_InitializePropertyState((NiAVObject *)this->nodeSkyRoot);
      NiNode_UpdateDynamicEffectState(this->nodeSkyRoot);
      return (TESClimate *)NiAVObject_UpdateNiAVObject((NiAVObject *)this->nodeSkyRoot, 0.0, 1);
    }
  }
  return result;
}
