char __cdecl sub_405440(int a1)
{
  void *v0; // ecx
  BSShaderAccumulator *inited; // eax
  signed int size; // ebp
  int i; // edi
  int j; // esi
  TESObjectCELL *cell; // ecx
  void (__thiscall ***v10)(_DWORD, int); // esi
  WaterManager *waterManager; // ecx
  int v13; // [esp+4h] [ebp-4h] BYREF

  if ( (_BYTE)a1 ) /*0x405448*/
  {
    if ( sub_40FDA0(v0) ) /*0x40544e*/
    {
      sub_40FD90(); /*0x405457*/
      sub_40FDD0(); /*0x40545c*/
    }
    if ( MEMORY[0xB33428] ) /*0x405468*/
    {
      if ( *(_DWORD *)(MEMORY[0xB33428] + 0x20) ) /*0x40546a*/
        sub_410B00(); /*0x405474*/
    }
    inited = BSShaderAccumulator_GetOrCreateGlobal(); /*0x405479*/
    if ( inited ) /*0x405480*/
      sub_7A9CF0(inited); /*0x405484*/
    size = MEMORY[0xB333A0]->gridCellArray->size; /*0x405492*/
    for ( i = 0; i < size; ++i ) /*0x40549b*/
    {
      for ( j = 0; j < size; ++j ) /*0x4054a0*/
      {
        cell = GetGridEntry(MEMORY[0xB333A0]->gridCellArray, i, j)->cell; /*0x4054b2*/
        if ( cell ) /*0x4054b6*/
        {
          sub_4CAFF0((ExtraDataList *)cell, &a1, &v13); /*0x4054c2*/
          if ( a1 ) /*0x4054cb*/
          {
            if ( v13 ) /*0x4054d3*/
            {
              if ( *(_DWORD *)(v13 + 4) ) /*0x4054d5*/
                *(_DWORD *)(v13 + 4) = 0; /*0x4054da*/
            }
          }
        }
      }
    }
    if ( texture ) /*0x4054f2*/
    {
      BSTextureManager__ReturnRenderedTexture(MEMORY[0xB42F50], (BSRenderedTexture *)texture); /*0x4054fb*/
      v10 = (void (__thiscall ***)(_DWORD, int))texture; /*0x405500*/
      if ( texture ) /*0x405508*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(texture + 4)) ) /*0x40550e*/
        {
          if ( v10 ) /*0x40551a*/
            (**v10)(v10, 1); /*0x405524*/
        }
        texture = 0; /*0x405526*/
      }
      if ( unk_B42D54 ) /*0x405532*/
        unk_B42D50 = 0.0; /*0x405536*/
      unk_B42D54 = 0; /*0x40553c*/
    }
    unk_B33397 = 0; /*0x405545*/
    return 1; /*0x40554b*/
  }
  else
  {
    if ( (!MEMORY[0xB33428] || !*(_DWORD *)(MEMORY[0xB33428] + 0x20)) && InterfaceManager_IsMenuVisibleByID(0x414, 0) ) /*0x405569*/
      sub_410C40(off_B03094[0], 1);             // MenuPlease: patched call to sub_410C40 so device reset does not restart Map loop.bik. /*0x40557e*/
    if ( MEMORY[0xB43070] ) /*0x40558c*/
      sub_7C02E0(); /*0x40558e*/
    waterManager = MEMORY[0xB333A0]->waterManager; /*0x405599*/
    if ( waterManager ) /*0x40559e*/
    {
      if ( byte_B0703C ) /*0x4055a6*/
      {
        WaterManager::Destroy_(waterManager, (int *)1); /*0x4055aa*/
        sub_498F30(); /*0x4055b7*/
      }
    }
    if ( GetShadowSceneNode(0) ) /*0x4055bd*/
      Sky_CreateOrGetGlobalObject()->unk100 = 1; /*0x4055ce*/
    return 1; /*0x4055d5*/
  }
}
