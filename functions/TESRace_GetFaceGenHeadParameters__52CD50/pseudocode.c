// Builds the complete FaceGenRenderState from this race and an optional TESNPC. Resolves absolute coefficients, appearance selections, the nine head-part resources, texture overrides, race tint data, and fallback eyes.
FaceGenRenderState *__thiscall TESRace_BuildFaceGenRenderState(
        TESRace *this,
        TESNPC *npc,
        FaceGenRenderState *outState)
{
  FaceGenRenderState *v4; // ebp
  FaceGenPointerArray *p_headTextures; // ebx
  unsigned int v6; // eax
  Unk *unk12; // eax
  unsigned int firstFree; // esi
  FaceGenPointerArray *p_headModels; // ebp
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // esi
  void *v13; // edi
  unsigned int v14; // esi
  void *v15; // ebp
  int *v16; // ebp
  unsigned int v17; // edi
  unsigned int capacity; // eax
  void (__thiscall ***v19)(_DWORD, int); // esi
  bool v20; // zf
  FaceGenRenderState *result; // eax
  int v22; // esi
  _DWORD *v23; // edi
  unsigned __int8 *v24; // eax
  unsigned int v25; // [esp+14h] [ebp-18h]
  int v27; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v28; // [esp+28h] [ebp-4h]

  if ( npc ) /*0x52cd83*/
  {
    v4 = outState; /*0x52cd85*/
    TESNPC_BuildAbsoluteFaceGenParameters(npc, &outState->parameters);// NPC path: build absolute FaceGen coefficients from race bases plus NPC offsets into outState->parameters. /*0x52cd8c*/
    outState->hair = npc->member.hair;          // Copy the NPC hair selection into the render state. /*0x52cd97*/
    outState->hairLength = npc->member.hairLength;// Copy TESNPC hairLength (+0x1CC) into FaceGenRenderState::hairLength (+0x68). /*0x52cdaa*/
    outState->hairColorRGB = *(_DWORD *)npc->member.hairColorRGB;// Pack the NPC hair RGB bytes into render-state hairColorRGB. /*0x52cdb3*/
    outState->eyes = npc->member.eyes;          // Copy the NPC eye selection into the render state. /*0x52cdbc*/
    outState->isFemale = TESActorBase_IsFemale(npc);// Record NPC sex for sex-specific head parts, age textures, and later shading. /*0x52cdc4*/
    v25 = 0; /*0x52cdc7*/
    p_headTextures = &outState->headTextures; /*0x52cdcf*/
    v6 = sub_52BC50((int)this, 0); /*0x52cdd5*/
  }
  else
  {
    unk12 = this->unk12; /*0x52cdd7*/
    if ( this == (TESRace *)0xFFFFFD64 ) /*0x52cddf*/
      unk12 = (Unk *)FaceGenManager_GetDefaultHeadParameters(); /*0x52cde1*/
    FaceGenHeadParameters_Copy((const FaceGenHeadParameters *)unk12, &outState->parameters); /*0x52cdec*/
    v4 = outState; /*0x52cdf1*/
    v25 = 0; /*0x52cdf8*/
    p_headTextures = &outState->headTextures; /*0x52ce00*/
    v6 = sub_52BC50((int)this, 0); /*0x52ce06*/
  }
  while ( 1 ) /*0x52ce24*/
  {
    firstFree = v4->headModels.firstFree; /*0x52ce24*/
    p_headModels = &v4->headModels; /*0x52ce28*/
    v10 = v6; /*0x52ce2b*/
    if ( firstFree >= p_headModels->capacity ) /*0x52ce33*/
      NiTArray_SetSize((unsigned __int16 *)p_headModels, firstFree + p_headModels->growSize); /*0x52ce3e*/
    if ( firstFree < p_headModels->firstFree ) /*0x52ce49*/
    {
      if ( v10 ) /*0x52ce5f*/
      {
        if ( !p_headModels->data[firstFree] ) /*0x52ce64*/
          ++p_headModels->objectCount; /*0x52ce6a*/
      }
      else if ( p_headModels->data[firstFree] ) /*0x52ce74*/
      {
        --p_headModels->objectCount; /*0x52ce7a*/
      }
    }
    else
    {
      p_headModels->firstFree = firstFree + 1; /*0x52ce50*/
      if ( v10 ) /*0x52ce54*/
        ++p_headModels->objectCount; /*0x52ce56*/
    }
    p_headModels->data[firstFree] = (void *)v10;// Append the resolved model for this head-part slot to headModels. /*0x52ce8c*/
    v11 = sub_52BD00((int)this, v25); /*0x52ce8f*/
    v12 = p_headTextures->firstFree; /*0x52ce94*/
    v13 = (void *)v11; /*0x52ce9e*/
    if ( v12 >= p_headTextures->capacity ) /*0x52cea0*/
      NiTArray_SetSize((unsigned __int16 *)p_headTextures, v12 + p_headTextures->growSize); /*0x52ceab*/
    if ( v12 < p_headTextures->firstFree ) /*0x52ceb6*/
    {
      if ( v13 ) /*0x52cecc*/
      {
        if ( !p_headTextures->data[v12] ) /*0x52ced1*/
          ++p_headTextures->objectCount; /*0x52ced7*/
      }
      else if ( p_headTextures->data[v12] ) /*0x52cee1*/
      {
        --p_headTextures->objectCount; /*0x52cee7*/
      }
    }
    else
    {
      p_headTextures->firstFree = v12 + 1; /*0x52cebd*/
      if ( v13 ) /*0x52cec1*/
        ++p_headTextures->objectCount; /*0x52cec3*/
    }
    p_headTextures->data[v12] = v13;            // Append the resolved texture for this head-part slot to headTextures. /*0x52cef0*/
    v14 = outState->nodeNames.firstFree; /*0x52cef7*/
    v15 = *(void **)(4 * v25 + 0xB10CA8); /*0x52cf05*/
    if ( v14 >= outState->nodeNames.capacity ) /*0x52cf14*/
      NiTArray_SetSize((unsigned __int16 *)&outState->nodeNames, v14 + outState->nodeNames.growSize); /*0x52cf1f*/
    if ( v14 < outState->nodeNames.firstFree ) /*0x52cf2a*/
    {
      if ( v15 ) /*0x52cf40*/
      {
        if ( !outState->nodeNames.data[v14] ) /*0x52cf45*/
          ++outState->nodeNames.objectCount; /*0x52cf4b*/
      }
      else if ( outState->nodeNames.data[v14] ) /*0x52cf55*/
      {
        --outState->nodeNames.objectCount; /*0x52cf5b*/
      }
    }
    else
    {
      outState->nodeNames.firstFree = v14 + 1; /*0x52cf31*/
      if ( v15 ) /*0x52cf35*/
        ++outState->nodeNames.objectCount; /*0x52cf37*/
    }
    outState->nodeNames.data[v14] = v15;        // Append the engine's canonical node name for this head-part slot to nodeNames. /*0x52cf6a*/
    if ( npc ) /*0x52cf6d*/
    {
      if ( byte_B10D3C ) /*0x52cf73*/
      {
        v16 = sub_524100((TESForm *)npc, &v27, v25); /*0x52cf8b*/
        v17 = outState->textureOverrides.firstFree; /*0x52cf91*/
        capacity = outState->textureOverrides.capacity; /*0x52cf98*/
        v28 = 0; /*0x52cfa7*/
        if ( v17 >= capacity ) /*0x52cfaf*/
          NiTObjectArray_Resize16( /*0x52cfba*/
            (unsigned __int16 *)&outState->textureOverrides,
            v17 + outState->textureOverrides.growSize);
        sub_5254D0(&outState->textureOverrides.vtable, v17, v16);// When enabled, append this head part's NiTexture override; ApplyHeadParameters consumes the parallel override array. /*0x52cfc3*/
        v28 = 0xFFFFFFFF; /*0x52cfce*/
        if ( v27 ) /*0x52cfd6*/
        {
          v19 = (void (__thiscall ***)(_DWORD, int))v27; /*0x52cfd8*/
          if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) ) /*0x52cfde*/
            (**v19)(v19, 1); /*0x52cff4*/
        }
      }
    }
    if ( (int)++v25 >= 9 ) /*0x52d004*/
      break; /*0x52d004*/
    v4 = outState; /*0x52ce10*/
    v6 = sub_52BC50((int)this, v25);            // Begin resolving the nine FaceGen head-part model slots. /*0x52ce1f*/
  }
  v20 = outState->hair == 0; /*0x52d00e*/
  outState->useTextureOverrides = byte_B10D3C;  // Persist whether textureOverrides is populated and should supersede model texture paths. /*0x52d018*/
  outState->renderFlags = dword_B120B0; /*0x52d028*/
  result = (FaceGenRenderState *)&this->unk9[7]; /*0x52d02e*/
  outState->raceFaceTextureData = &this->unk9[7]; /*0x52d03a*/
  outState->raceFaceTintData = &this->unk9[8]; /*0x52d040*/
  if ( v20 ) /*0x52d046*/
  {
    result = (FaceGenRenderState *)&this->hairs; /*0x52d048*/
    if ( this != (TESRace *)0xFFFFFF74 && (this->hairs.node.next || result->parameters.matrices[0].rows) ) /*0x52d058*/
    {
      result = (FaceGenRenderState *)result->parameters.matrices[0].rows; /*0x52d05d*/
      outState->hair = result; /*0x52d05f*/
    }
  }
  if ( !outState->eyes ) /*0x52d062*/
  {
    result = (FaceGenRenderState *)&this->eyes; /*0x52d068*/
    if ( this != (TESRace *)0xFFFFFF58 && (this->eyes.node.next || result->parameters.matrices[0].rows) ) /*0x52d078*/
    {
      outState->eyes = (void *)result->parameters.matrices[0].rows; /*0x52d07f*/
    }
    else
    {
      v22 = g_TESDataHandler + 0x3C; /*0x52d08a*/
      if ( g_TESDataHandler != 0xFFFFFFC4 ) /*0x52d08d*/
      {
        while ( 1 ) /*0x52d090*/
        {
          v23 = *(_DWORD **)v22; /*0x52d090*/
          if ( *(_DWORD *)v22 ) /*0x52d090*/
          {
            v24 = (unsigned __int8 *)v23[0xA]; /*0x52d096*/
            if ( !v24 ) /*0x52d09b*/
              v24 = (unsigned __int8 *)EmptyString; /*0x52d09d*/
            result = (FaceGenRenderState *)CRT_StricmpLocaleDispatch(v24, "Characters\\Eyes\\EyeDefault.dds");// Missing-eye fallback uses Characters\\Eyes\\EyeDefault.dds. /*0x52d0a8*/
            if ( !result ) /*0x52d0b2*/
              break; /*0x52d0b2*/
          }
          v22 = *(_DWORD *)(v22 + 4); /*0x52d0b4*/
          if ( !v22 ) /*0x52d0b9*/
            return result; /*0x52d0b9*/
        }
        outState->eyes = v23; /*0x52d0bd*/
      }
    }
  }
  return result; /*0x52d0c0*/
}
