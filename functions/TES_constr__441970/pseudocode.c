TES *__thiscall TES_constr(TES *this, LPCSTR lpString2, NiNode *a3, NiNode *a4, Sky *a5)
{
  int v6; // eax
  char v7; // cl
  int v8; // edx
  double v9; // st7
  int v10; // eax
  double v11; // st7
  GridCellArray *v12; // eax
  GridCellArray *v13; // eax
  GridDistantArray *v14; // eax
  GridDistantArray *v15; // eax
  IOManager *v16; // eax
  IOManager *v17; // eax
  BSTask **v18; // eax
  BSTask **v19; // eax
  _DWORD *v20; // eax
  char *v21; // eax
  TESSaveLoad *v22; // eax
  int v23; // edx
  int v24; // edi
  unsigned int i; // eax
  unsigned int j; // eax
  NiNode *v27; // eax
  BSTempNodeManager *v28; // edi
  NiNode *ObjectLODRoot; // ecx
  NiDirectionalLight *SunDirectionalLight; // eax
  Sky *sky; // ecx
  unsigned int v32; // eax

  this->__vftable = (TES_vtbl *)&TES::`vftable';
  this->unk78 = 0;
  this->unk7C = 0;
  this->unk80 = 0;
  this->unk84 = 0;
  this->list8C.node.data = 0;
  this->list8C.node.next = 0;
  this->bloodDecals[0] = 0;
  this->bloodDecals[1] = 0;
  this->bloodDecals[2] = 0;
  this->listA0.node.data = 0;
  this->listA0.node.next = 0;
  _memset(this, 0, sizeof(TES));
  dword_B3F580 = 1;
  sub_5350F0(0);
  sub_537760();
  v6 = iUpdateType;
  flt_BA7920 = flt_B33A40;
  v7 = bBipedWhenKeyframed;
  v8 = iMaxPickHavok;
  flt_BA791C = flt_B33A38;
  v9 = flt_B05234;
  fromiUpdateType = v6;
  v10 = iIdentityBatchRemove;
  flt_B2E2F0 = v9;
  fFromMoveMassLimit = fMoveMassLimit;
  off_B2E300 = (int (__cdecl *)(int, int))sub_4DE010;
  v11 = flt_B33A50;
  FrombAddBipedWhenKEyframed = v7;
  fromiMaxPickHavok = v8;
  fromIdentityBatchRemove = v10;
  dword_BA7A88 = (int (__cdecl *)(_DWORD, _DWORD))sub_4E2160;
  flt_B2E784 = v11 * v11;
  dword_BA7A84 = (int (__cdecl *)(_DWORD))TESTexture::ClearComponentReferences;
  v12 = (GridCellArray *)FormHeapAlloc(0x28u);
  if ( v12 )
    v13 = GridCellArray::GridCellArray(v12);
  else
    v13 = 0;
  this->gridCellArray = v13;
  v13->Fn_01(v13);
  v14 = (GridDistantArray *)FormHeapAlloc(0x14u);
  if ( v14 )
    v15 = GridDistantArray::GridDistantArray(v14);
  else
    v15 = 0;
  this->gridDistantArray = v15;
  (*(void (__thiscall **)(GridDistantArray *))(*(_DWORD *)v15 + 4))(v15);
  sub_4BE8A0();
  sub_4BDCD0();
  v16 = (IOManager *)FormHeapAlloc(0x3Cu);
  if ( v16 )
    v17 = IOManager::IOManager(v16);
  else
    v17 = 0;
  ioManager = v17;
  v18 = (BSTask **)FormHeapAlloc(0x1Cu);
  if ( v18 )
    v19 = ModelLoader_constr(v18);
  else
    v19 = 0;
  ModelLoaderPtr = (QueuedTreeBillboard *)v19;
  v20 = (_DWORD *)FormHeapAlloc(0xCE0u);
  if ( v20 )
    v21 = (char *)TESDataHandler_constr(v20);
  else
    v21 = 0;
  TESDataHandler = (int)v21;
  sub_44A2B0(v21, lpString2);
  if ( FormHeapAlloc(0x1C4u) )
    v22 = (TESSaveLoad *)sub_45B300();
  else
    v22 = 0;
  SaveLoad_CurrentSavegame = v22;
  v23 = uGridsToLoad * (uGridsToLoad + 2);
  if ( uExteriorCellBuffer < (unsigned int)(v23 + 1) )
    uExteriorCellBuffer = v23 + 1;
  v24 = uInteriorCellBuffer;
  if ( !uInteriorCellBuffer )
  {
    v24 = 1;
    uInteriorCellBuffer = 1;
  }
  this->interiorCellBufferArray = (TESObjectCELL **)FormHeapAlloc(
                                                      (unsigned __int64)(unsigned int)v24 >> 0x1E != 0
                                                    ? 0xFFFFFFFF
                                                    : 4 * v24);
  this->exteriorCellBufferArray = (TESObjectCELL **)FormHeapAlloc(
                                                      (unsigned __int64)(unsigned int)uExteriorCellBuffer >> 0x1E != 0
                                                    ? 0xFFFFFFFF
                                                    : 4 * uExteriorCellBuffer);
  for ( i = 0; i < uInteriorCellBuffer; ++i )
    this->interiorCellBufferArray[i] = 0;
  for ( j = 0; j < uExteriorCellBuffer; ++j )
    this->exteriorCellBufferArray[j] = 0;
  this->extXCoord = 0x7FFFFFFF;
  this->extYCoord = 0x7FFFFFFF;
  this->unk28 = 0x7FFFFFFF;
  this->unk2C = 0x7FFFFFFF;
  this->unk48 = 0x7FFFFFFF;
  this->unk4C = 0x7FFFFFFF;
  this->unk44 = 0;
  this->unk40 = 0;
  this->ObjectLODRoot = a3;
  v27 = (NiNode *)FormHeapAlloc(0xE0u);
  v28 = (BSTempNodeManager *)v27;
  if ( v27 )
  {
    NiNode::NiNode(v27, 0);
    *(_DWORD *)v28 = &BSTempNodeManager::`vftable';
  }
  else
  {
    v28 = 0;
  }
  ObjectLODRoot = this->ObjectLODRoot;
  this->tempNodeManager = v28;
  if ( ObjectLODRoot )
    ((void (__thiscall *)(NiNode *, BSTempNodeManager *, _DWORD))ObjectLODRoot->vtbl->AddObject)(ObjectLODRoot, v28, 0);
  this->LandLOD = a4;
  this->sky = a5;
  SunDirectionalLight = Sky::GetSunDirectionalLight(a5);
  sky = this->sky;
  this->niDirectionalLight = SunDirectionalLight;
  this->fogProperty = (BSFogProperty *)sub_53FB50(sky);
  BYTE1(this->unk68) = 0;
  this->currentWorldSpace = 0;
  this->currentExteriorCell = 0;
  this->unkA8 = 1;
  v32 = uGridsToLoad * uGridsToLoad;
  if ( dword_B33A2C < v32 )
    dword_B33A2C = v32;
  this->CellBorders = 0;
  this->waterNodeData = 0;
  if ( !byte_B05244 )
    byte_B3F958 = 1;
  this->unk88 = 0;
  this->unk51 = 0;
  this->unk52 = 0;
  this->unkA9 = 1;
  return this;
}
