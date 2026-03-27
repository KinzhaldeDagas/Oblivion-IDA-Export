char __usercall sub_405440@<al>(void *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  BSShaderAccumulator *inited; // eax
  signed int size; // ebp
  int i; // edi
  int j; // esi
  TESObjectCELL *cell; // ecx
  void (__thiscall ***v11)(_DWORD, int); // esi
  WaterManager *waterManager; // ecx
  int v14; // [esp+4h] [ebp-4h] BYREF

  if ( (_BYTE)a5 )
  {
    if ( sub_40FDA0(a1) )
    {
      sub_40FD90();
      sub_40FDD0();
    }
    if ( ObjectPtr )
    {
      if ( *(_DWORD *)(ObjectPtr + 0x20) )
        sub_410B00();
    }
    inited = InitBSShaderAccumulator();
    if ( inited )
      sub_7A9CF0(inited);
    size = TES->gridCellArray->size;
    for ( i = 0; i < size; ++i )
    {
      for ( j = 0; j < size; ++j )
      {
        cell = GetGridEntry(TES->gridCellArray, i, j)->cell;
        if ( cell )
        {
          sub_4CAFF0((ExtraDataList *)cell, &a5, &v14);
          if ( a5 )
          {
            if ( v14 )
            {
              if ( *(_DWORD *)(v14 + 4) )
                *(_DWORD *)(v14 + 4) = 0;
            }
          }
        }
      }
    }
    if ( menuRenderedTexture )
    {
      sub_7C1EE0(g_textureManager, (BSRenderedTexture *)menuRenderedTexture);
      v11 = (void (__thiscall ***)(_DWORD, int))menuRenderedTexture;
      if ( menuRenderedTexture )
      {
        if ( !InterlockedDecrement((volatile LONG *)(menuRenderedTexture + 4)) )
        {
          if ( v11 )
            (**v11)(v11, 1);
        }
        menuRenderedTexture = 0;
      }
      if ( byte_B42D54 )
        flt_B42D50 = 0.0;
      byte_B42D54 = 0;
    }
    byte_B33397 = 0;
    return 1;
  }
  else
  {
    if ( (!ObjectPtr || !*(_DWORD *)(ObjectPtr + 0x20)) && sub_5790E0(0x414, 0) )
      sub_410C40(off_B03094[0], 1);
    if ( UseHDR )
      sub_7C02E0();
    waterManager = TES->waterManager;
    if ( waterManager )
    {
      if ( byte_B0703C )
      {
        WaterManager::Destroy_(waterManager, a2, a3, a4, (int *)1);
        sub_498F30();
      }
    }
    if ( GetShadowSceneNode(0) )
      Sky_CreateOrGetGlobalObject()->unk100 = 1;
    return 1;
  }
}
