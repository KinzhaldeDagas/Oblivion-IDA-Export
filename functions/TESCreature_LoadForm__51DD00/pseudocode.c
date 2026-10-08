//
// Verified blood serialization: NAM0 (0x304D414E) loads a nonzero-length chunk into bloodSpray at +0x11C through TESModel.SetModelPath(+0x18). NAM1 (0x314D414E) loads into bloodDecal.path at +0x138 through BSStringT_Set. These are per-record strings, distinct from the runtime default settings used by empty-path getters.
// Verified divergence: Fallout TESCreature::Load 0x8240BA18 reads legacy NAM0/NAM1 into a temporary without corresponding component assignment in that branch. Oblivion assignments above are authoritative.
bool __thiscall TESCreature_LoadForm(TESCreature *self, Data *file)
{
  signed int ChunkType; // eax
  _DWORD *CreatureSoundArray; // eax
  int v6; // eax
  int *p_modelList; // eax
  int v8; // [esp+0h] [ebp-3Ch] BYREF
  int v9; // [esp+4h] [ebp-38h]
  int v10; // [esp+8h] [ebp-34h]
  char v11[4]; // [esp+Ch] [ebp-30h] BYREF
  int v12; // [esp+10h] [ebp-2Ch]
  int v13; // [esp+14h] [ebp-28h]
  int v14; // [esp+18h] [ebp-24h] BYREF
  char v15[4]; // [esp+1Ch] [ebp-20h] BYREF
  int v16; // [esp+20h] [ebp-1Ch]
  unsigned int v17; // [esp+24h] [ebp-18h] BYREF
  char Dst[4]; // [esp+28h] [ebp-14h] BYREF
  int v19; // [esp+2Ch] [ebp-10h]
  unsigned int v20; // [esp+30h] [ebp-Ch]
  Script *v21; // [esp+34h] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(file) != 0x24 ) /*0x51dd21*/
    return 0; /*0x51dd25*/
  TESFile_InitializeFormFromRecord(file, (TESForm *)self, v8, v9); /*0x51dd2d*/
  TESForm_SetIsLinked((TESForm *)self, 0); /*0x51dd37*/
  v20 = 0xFFFFFFFF; /*0x51dd3e*/
  ChunkType = TESFile_GetChunkType(file); /*0x51dd45*/
  if ( ChunkType ) /*0x51dd4c*/
  {
    while ( ChunkType <= 0x4D414E52 ) /*0x51dd57*/
    {
      if ( ChunkType == 0x4D414E52 ) /*0x51dd5d*/
      {
        TESFile_GetChunkData(file, (char *)&self->attackReach, 1u); /*0x51df7c*/
        goto TESCreature_LoadForm___def_51DFA5; /*0x51df81*/
      }
      if ( ChunkType > 0x46445343 ) /*0x51dd68*/
      {
        if ( ChunkType > 0x4C4C5546 ) /*0x51de84*/
        {
          v6 = ChunkType - 0x4D414E42; /*0x51df35*/
          if ( v6 ) /*0x51df3a*/
          {
            if ( v6 == 7 ) /*0x51df3f*/
            {
              v21 = 0; /*0x51df4b*/
              TESFile_GetChunkData4(file, (char *)&v21); /*0x51df4e*/
              self->super.actorBaseData.unk7 = (UInt32)v21; /*0x51df56*/
            }
          }
          else
          {
            TESFile_GetChunkData4(file, (char *)&self->baseScale); /*0x51df67*/
          }
          goto TESCreature_LoadForm___def_51DFA5; /*0x51df59*/
        }
        if ( ChunkType == 0x4C4C5546 ) /*0x51de8a*/
        {
          if ( self ) /*0x51df0d*/
            TESFullname_Load(&self->super.fullName, file); /*0x51df17*/
          else
            TESFullname_Load(0, file); /*0x51df28*/
          goto TESCreature_LoadForm___def_51DFA5; /*0x51df1f*/
        }
        if ( ChunkType != 0x49445343 ) /*0x51de91*/
        {
          if ( ChunkType == 0x49524353 ) /*0x51de98*/
          {
            v21 = 0; /*0x51dec8*/
            TESFile_GetChunkData4(file, (char *)&v21); /*0x51decb*/
            self->super.scriptable.script = v21; /*0x51ded3*/
            TESScriptableForm_Link((int)&self->super.scriptable, (TESForm *)self); /*0x51dee0*/
          }
          else if ( ChunkType == 0x4C444F4D ) /*0x51de9f*/
          {
            goto LABEL_27; /*0x51de9f*/
          }
          goto TESCreature_LoadForm___def_51DFA5; /*0x51de9f*/
        }
      }
      else if ( ChunkType != 0x46445343 ) /*0x51dd6e*/
      {
        if ( ChunkType > 0x42444F4D ) /*0x51dd79*/
        {
          if ( ChunkType == 0x44494445 ) /*0x51de25*/
          {
            _alloca_(v8); /*0x51de57*/
            TESFile_GetChunkData(file, (char *)&v8, 0x200u); /*0x51de66*/
            self->__vtable->super.super.super.SetEditorID((TESForm *)self, (const char *)&v8); /*0x51de76*/
          }
          else if ( ChunkType == 0x44494B50 ) /*0x51de2c*/
          {
            v21 = 0; /*0x51de38*/
            TESFile_GetChunkData4(file, (char *)&v21); /*0x51de3b*/
            TESAIForm_AddPackage(&self->super.aiForm.vtbl, (int)v21); /*0x51de47*/
          }
        }
        else
        {
          switch ( ChunkType ) /*0x51dd7f*/
          {
            case 0x42444F4D: /*0x51dd7f*/
LABEL_27:
              if ( self ) /*0x51dea7*/
                TESModel_Load((float *)&self->super.model, file); /*0x51deb5*/
              else
                TESModel_Load(0, file); /*0x51e102*/
              break;
            case 0x304D414E: /*0x51dd7f*/
              if ( file->currentChunk.length ) /*0x51dde8*/
              {
                _alloca_(v8); /*0x51ddf6*/
                TESFile_GetChunkData(file, (char *)&v8, 0); /*0x51de02*/
                self->bloodSpray.vtbl->SetModelPath(&self->bloodSpray, (const char *)&v8); /*0x51de17*/
              }
              break;
            case 0x314D414E: /*0x51dd7f*/
              if ( file->currentChunk.length ) /*0x51ddb4*/
              {
                _alloca_(v8); /*0x51ddc2*/
                TESFile_GetChunkData(file, (char *)&v8, 0); /*0x51ddce*/
                BSStringT_Set(&self->bloodDecal.path, (const char *)&v8, 0); /*0x51dddc*/
              }
              break;
            case 0x41544144: /*0x51dd7f*/
              TESForm_LoadGenericComponents((TESForm *)self, file, &self->type, 6u); /*0x51ddaa*/
              break;
          }
        }
        goto TESCreature_LoadForm___def_51DFA5; /*0x51ddaf*/
      }
      CreatureSoundArray = (_DWORD *)TESCreature_GetCreatureSoundArray(v8, v9, v10, *(int *)v11); /*0x51deec*/
      if ( CreatureSoundArray_LoadAndLinkSoundEntry(CreatureSoundArray, file, v20, self) ) /*0x51def9*/
        goto TESCreature_LoadForm___def_51DFA5; /*0x51df00*/
LABEL_75:
      ChunkType = TESFile_GetChunkType(file); /*0x51e18f*/
      if ( !ChunkType ) /*0x51e198*/
        return 1; /*0x51e198*/
    }
    if ( ChunkType <= 0x4F4C5053 ) /*0x51df8b*/
    {
      if ( ChunkType == 0x4F4C5053 ) /*0x51df91*/
      {
        v21 = 0; /*0x51e022*/
        TESFile_GetChunkData4(file, (char *)&v21); /*0x51e025*/
        TESSpellList_AddFormToSpellList((char *)&self->super.spellList, v21); /*0x51e031*/
      }
      else
      {
        switch ( ChunkType ) /*0x51dfa5*/
        {
          case 0x4D414E53: /*0x51dfa5*/
            *(_DWORD *)Dst = 0; /*0x51dfb6*/
            v19 = 0; /*0x51dfb9*/
            TESFile_GetChunkData(file, Dst, 8u); /*0x51dfbc*/
            TESActorBaseData_SetFactionRank((char *)&self->super.actorBaseData, *(int *)Dst, v19, v8, v9); /*0x51dfcc*/
            break; /*0x51dfd1*/
          case 0x4D414E54: /*0x51dfa5*/
            TESFile_GetChunkData4(file, (char *)&self->turningSpeed); /*0x51dff2*/
            break; /*0x51dff7*/
          case 0x4D414E57: /*0x51dfa5*/
            TESFile_GetChunkData4(file, (char *)&self->footWeight); /*0x51dfdf*/
            break; /*0x51dfe4*/
          case 0x4D414E5A: /*0x51dfa5*/
            TESFile_GetChunkData4(file, (char *)&v14); /*0x51e002*/
            ((void (__thiscall *)(TESCreature *, int))self->__vtable[1].super.super.super.Unk_0A)(self, v14); /*0x51e015*/
            break; /*0x51e017*/
          default:
            goto TESCreature_LoadForm___def_51DFA5;
        }
      }
      goto TESCreature_LoadForm___def_51DFA5;
    }
    if ( ChunkType <= 0x54444F4D ) /*0x51e040*/
    {
      if ( ChunkType == 0x54444F4D ) /*0x51e046*/
        goto LABEL_27; /*0x51e046*/
      if ( ChunkType > 0x53424341 ) /*0x51e051*/
      {
        if ( ChunkType == 0x54444941 ) /*0x51e0cf*/
        {
          *(_DWORD *)v11 = 0; /*0x51e0df*/
          v12 = 0; /*0x51e0e2*/
          v13 = 0; /*0x51e0e5*/
          TESFile_GetChunkData(file, v11, 0xCu); /*0x51e0e8*/
          TESAIForm_SetNonPackageData(&self->super.aiForm, (int)v11); /*0x51e0f4*/
        }
      }
      else
      {
        switch ( ChunkType ) /*0x51e053*/
        {
          case 0x53424341: /*0x51e053*/
            TESFile_GetChunkData(file, (char *)&self->super.actorBaseData.flags, 0x10u); /*0x51e0c0*/
            break;
          case 0x4F544E43: /*0x51e053*/
            *(_DWORD *)v15 = 0; /*0x51e08f*/
            v16 = 0; /*0x51e092*/
            TESFile_GetChunkData(file, v15, 8u); /*0x51e095*/
            TESContainer_SetLinkFlag(&self->super.container, 0); /*0x51e0a1*/
            TESContainer_AddUnlinkedForm(&self->super.container, (int)v15); /*0x51e0ac*/
            break;
          case 0x52435343: /*0x51e053*/
            v21 = 0; /*0x51e06d*/
            TESFile_GetChunkData4(file, (char *)&v21); /*0x51e070*/
            TESCreature_SetInheritedSoundSource((unsigned int *)self, (unsigned int)v21); /*0x51e07b*/
            break;
        }
      }
      goto TESCreature_LoadForm___def_51DFA5; /*0x51e080*/
    }
    if ( ChunkType > 0x5A46464B )               // CustomAnimSupport evidence: CREA load dispatcher branch tests KFFZ chunk before TESAnimation_LoadAnimationChunk call. /*0x51e111*/
    {
      if ( ChunkType != 0x5A46494E ) /*0x51e167*/
        goto TESCreature_LoadForm___def_51DFA5; /*0x51e167*/
    }
    else
    {
      if ( ChunkType == 0x5A46464B ) /*0x51e113*/
      {
        if ( self ) /*0x51e13a*/
          TESAnimation_LoadAnimationChunk((char **)&self->super.animation, (int)&self->super.animation, file);// CREA KFFZ load dispatch: populates TESCreature/TESActorBase TESAnimation component via TESAnimation_LoadAnimationChunk. /*0x51e14a*/
        else
          TESAnimation_LoadAnimationChunk((char **)0x94, 0, file); /*0x51e15b*/
        goto TESCreature_LoadForm___def_51DFA5; /*0x51e14f*/
      }
      if ( ChunkType == 0x54445343 ) /*0x51e11a*/
      {
        TESFile_GetChunkData4(file, (char *)&v17); /*0x51e12b*/
        v20 = v17; /*0x51e133*/
        goto TESCreature_LoadForm___def_51DFA5; /*0x51e136*/
      }
      if ( ChunkType != 0x5446494E ) /*0x51e121*/
      {
TESCreature_LoadForm___def_51DFA5:
        if ( !TESFile_GetNextChunk(file) ) /*0x51e18d*/
          return 1; /*0x51e18d*/
        goto LABEL_75; /*0x51e18d*/
      }
    }
    if ( self ) /*0x51e16b*/
      p_modelList = (int *)&self->modelList; /*0x51e16d*/
    else
      p_modelList = 0; /*0x51e175*/
    sub_46DFE0(&self->modelList.__vtable, p_modelList, file); /*0x51e17f*/
    goto TESCreature_LoadForm___def_51DFA5; /*0x51e17f*/
  }
  return 1; /*0x51e1a3*/
}
