char __thiscall WaterManager::Destroy_(WaterManager *this, int *unk34)
{
  bool v2; // zf
  BSRenderedTexture *ReflectionMap; // esi
  LONG (__stdcall *v5)(volatile LONG *); // edi
  BSRenderedTexture *BaseHeightMap; // esi
  BSRenderedTexture *HeightMap; // esi
  BSRenderedTexture *BaseDisplacementMap; // esi
  WaterShader *v9; // eax
  UInt32 v10; // esi
  UInt32 *Unk104; // edi
  UInt32 v12; // esi
  UInt32 *v13; // edi
  UInt32 v14; // esi
  UInt32 *v15; // edi
  int *v16; // eax
  unsigned int v17; // esi
  int *v18; // ebx
  int v19; // edi
  int v20; // edi
  void (__thiscall ***v21)(_DWORD, int); // edi
  int *unk40; // ecx
  UInt32 v23; // esi
  NiCamera *Camera; // esi
  int v25; // esi
  WaterShader *v26; // eax
  UInt32 v27; // esi
  UInt32 *v28; // edi
  int v30; // [esp+2Ch] [ebp-4h] BYREF

  v2 = (_BYTE)unk34 == 0; /*0x49a8b4*/
  byte_B0703C = 0; /*0x49a8bb*/
  if ( !v2 ) /*0x49a8c1*/
  {
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x49a8c9*/
    if ( this->ReflectionMap ) /*0x49a8ce*/
      BSTextureManager__ReturnRenderedTexture( /*0x49a8df*/
        *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
        this->ReflectionMap);
    if ( this->BaseHeightMap ) /*0x49a8e4*/
      BSTextureManager__ReturnRenderedTexture( /*0x49a8f2*/
        *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
        this->BaseHeightMap);
    if ( this->HeightMap ) /*0x49a8f7*/
      BSTextureManager__ReturnRenderedTexture( /*0x49a905*/
        *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
        this->HeightMap);
    if ( this->BaseDisplacementMap ) /*0x49a90a*/
      BSTextureManager__ReturnRenderedTexture( /*0x49a918*/
        *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
        this->BaseDisplacementMap);
    ReflectionMap = this->ReflectionMap; /*0x49a91e*/
    v5 = InterlockedDecrement; /*0x49a924*/
    if ( ReflectionMap ) /*0x49a92a*/
    {
      if ( !v5((volatile LONG *)&ReflectionMap->members) ) /*0x49a930*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))ReflectionMap->vtbl)(ReflectionMap, 1); /*0x49a942*/
      this->ReflectionMap = 0; /*0x49a944*/
    }
    BaseHeightMap = this->BaseHeightMap; /*0x49a947*/
    if ( BaseHeightMap ) /*0x49a94c*/
    {
      if ( !v5((volatile LONG *)&BaseHeightMap->members) ) /*0x49a952*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))BaseHeightMap->vtbl)(BaseHeightMap, 1); /*0x49a964*/
      this->BaseHeightMap = 0; /*0x49a966*/
    }
    HeightMap = this->HeightMap; /*0x49a969*/
    if ( HeightMap ) /*0x49a96e*/
    {
      if ( !v5((volatile LONG *)&HeightMap->members) ) /*0x49a974*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))HeightMap->vtbl)(HeightMap, 1); /*0x49a986*/
      this->HeightMap = 0; /*0x49a988*/
    }
    BaseDisplacementMap = this->BaseDisplacementMap; /*0x49a98b*/
    if ( BaseDisplacementMap ) /*0x49a990*/
    {
      if ( !v5((volatile LONG *)&BaseDisplacementMap->members) ) /*0x49a996*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))BaseDisplacementMap->vtbl)(BaseDisplacementMap, 1); /*0x49a9a8*/
      this->BaseDisplacementMap = 0; /*0x49a9aa*/
    }
    v9 = MEMORY[0xB45DCC]; /*0x49a9ad*/
    if ( MEMORY[0xB45DCC] ) /*0x49a9ad*/
    {
      v10 = v9->Unk104[0]; /*0x49a9ba*/
      Unk104 = v9->Unk104; /*0x49a9c2*/
      if ( v10 ) /*0x49a9c8*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x49a9ce*/
          (**(void (__thiscall ***)(UInt32, int))v10)(v10, 1); /*0x49a9e4*/
        *Unk104 = 0; /*0x49a9e6*/
        v9 = MEMORY[0xB45DCC]; /*0x49a9e8*/
      }
      v12 = v9->Unk104[1]; /*0x49a9ed*/
      v13 = &v9->Unk104[1]; /*0x49a9f5*/
      if ( v12 ) /*0x49a9fb*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x49aa01*/
          (**(void (__thiscall ***)(UInt32, int))v12)(v12, 1); /*0x49aa17*/
        *v13 = 0; /*0x49aa19*/
        v9 = MEMORY[0xB45DCC]; /*0x49aa1b*/
      }
      v14 = v9->Unk104[4]; /*0x49aa20*/
      v15 = &v9->Unk104[4]; /*0x49aa28*/
      if ( v14 ) /*0x49aa2e*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x49aa34*/
          (**(void (__thiscall ***)(UInt32, int))v14)(v14, 1); /*0x49aa4a*/
        *v15 = 0; /*0x49aa4c*/
      }
    }
    if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x73]) ) /*0x49aa4e*/
      sub_7E0CB0((_DWORD *)LODWORD(OB_ShaderConstantStorage_010201A0[0x73])); /*0x49aa58*/
    if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x50]) ) /*0x49aa5d*/
      sub_7DE0B0((BSRenderedTexture **)LODWORD(OB_ShaderConstantStorage_010201A0[0x50])); /*0x49aa67*/
    unk34 = (int *)this->unk34; /*0x49aa71*/
    v16 = unk34; /*0x49aa6c*/
    if ( unk34 ) /*0x49aa75*/
    {
      do /*0x49ab6b*/
      {
        if ( v16 ) /*0x49aa82*/
        {
          v17 = v16[2]; /*0x49aa88*/
          v18 = (int *)*v16; /*0x49aa8b*/
          if ( *(_DWORD *)(v17 + 8) ) /*0x49aa8d*/
            BSTextureManager__ReturnRenderedTexture( /*0x49aa9b*/
              *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
              *(BSRenderedTexture **)(v17 + 8));
          if ( *(_DWORD *)(v17 + 0xC) ) /*0x49aaa0*/
            BSTextureManager__ReturnRenderedTexture( /*0x49aaae*/
              *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
              *(BSRenderedTexture **)(v17 + 0xC));
          v19 = *(_DWORD *)(v17 + 8); /*0x49aab3*/
          if ( v19 ) /*0x49aab8*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x49aabe*/
              (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x49aad4*/
            *(_DWORD *)(v17 + 8) = 0; /*0x49aad6*/
          }
          v20 = *(_DWORD *)(v17 + 0xC); /*0x49aadd*/
          if ( v20 ) /*0x49aae2*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x49aae8*/
              (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x49aafe*/
            *(_DWORD *)(v17 + 0xC) = 0; /*0x49ab00*/
          }
          NiTPointerList_RemoveNode((BSTextureManager *)&this->unk30, (NiTPointerList_Node_void **)&unk34); /*0x49ab0f*/
          (*(void (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)&MEMORY[0xB33E90][0x13A0] + 0x88))( /*0x49ab2b*/
            *(_DWORD *)&MEMORY[0xB33E90][0x13A0],
            &v30,
            *(_DWORD *)(v17 + 4));
          if ( v30 ) /*0x49ab33*/
          {
            v21 = (void (__thiscall ***)(_DWORD, int))v30; /*0x49ab35*/
            if ( !InterlockedDecrement((volatile LONG *)(v30 + 4)) ) /*0x49ab3b*/
              (**v21)(v21, 1); /*0x49ab51*/
          }
          sub_4993B0((_BYTE *)v17); /*0x49ab55*/
          FormHeapFree(v17); /*0x49ab5b*/
        }
        else
        {
          v18 = 0; /*0x49ac51*/
        }
        v16 = v18; /*0x49ab65*/
        unk34 = v18; /*0x49ab67*/
      }
      while ( v18 ); /*0x49ab6b*/
    }
    unk40 = (int *)this->unk40; /*0x49ab71*/
    if ( unk40 ) /*0x49ab76*/
    {
      sub_6B73C0(unk40); /*0x49ab78*/
      v23 = this->unk40; /*0x49ab7d*/
      if ( v23 ) /*0x49ab82*/
      {
        sub_6B73E0((_DWORD *)this->unk40); /*0x49ab86*/
        FormHeapFree(v23); /*0x49ab8c*/
      }
      this->unk40 = 0; /*0x49ab94*/
    }
    Camera = this->Camera; /*0x49ab9b*/
    if ( this->Camera ) /*0x49ab9b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Camera->members) ) /*0x49aba6*/
      {
        if ( Camera ) /*0x49abb2*/
          Camera->vtbl->super.super.Destructor((NiRefObject *)Camera, 1); /*0x49abbc*/
      }
      this->Camera = 0; /*0x49abbe*/
    }
    if ( *((_DWORD *)this + 0x12) ) /*0x49abc5*/
    {
      BSTextureManager__ReturnRenderedTexture( /*0x49abd3*/
        *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
        *((BSRenderedTexture **)this + 0x12));
      v25 = *((_DWORD *)this + 0x12); /*0x49abd8*/
      if ( v25 ) /*0x49abdd*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) ) /*0x49abe3*/
          (**(void (__thiscall ***)(int, int))v25)(v25, 1); /*0x49abf9*/
        *((_DWORD *)this + 0x12) = 0; /*0x49abfb*/
      }
      v26 = MEMORY[0xB45DCC]; /*0x49ac02*/
      if ( MEMORY[0xB45DCC] ) /*0x49ac02*/
      {
        v27 = v26->Unk104[2]; /*0x49ac0b*/
        v28 = &v26->Unk104[2]; /*0x49ac13*/
        if ( v27 ) /*0x49ac19*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) ) /*0x49ac1f*/
            (**(void (__thiscall ***)(UInt32, int))v27)(v27, 1); /*0x49ac35*/
          *v28 = 0; /*0x49ac37*/
        }
      }
    }
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x49ac3f*/
  }
  return 1; /*0x49ac49*/
}
