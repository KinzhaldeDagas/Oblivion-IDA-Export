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
  int v22; // eax
  TESSaveLoad *v23; // eax
  int v24; // edx
  int v25; // edi
  unsigned int i; // eax
  unsigned int j; // eax
  NiNode *v28; // eax
  BSTempNodeManager *v29; // edi
  NiNode *ObjectLODRoot; // ecx
  NiDirectionalLight *SunDirectionalLight; // eax
  Sky *sky; // ecx
  unsigned int v33; // eax

  this->__vftable = (TES_vtbl *)&TES::`vftable'; /*0x44199e*/
  this->unk78 = 0; /*0x4419a4*/
  this->unk7C = 0; /*0x4419a7*/
  this->unk80 = 0; /*0x4419aa*/
  this->unk84 = 0; /*0x4419b0*/
  this->list8C.node.data = 0; /*0x4419b6*/
  this->list8C.node.next = 0; /*0x4419bc*/
  this->bloodDecals[0] = 0; /*0x4419c2*/
  this->bloodDecals[1] = 0; /*0x4419cc*/
  this->bloodDecals[2] = 0; /*0x4419d2*/
  this->listA0.node.data = 0; /*0x4419e4*/
  this->listA0.node.next = 0; /*0x4419ea*/
  _memset((int)this, 0, sizeof(TES)); /*0x4419f0*/
  unk_B3F580 = 1; /*0x4419f5*/
  sub_5350F0(0); /*0x4419ff*/
  sub_537760(); /*0x441a04*/
  v6 = iUpdateType; /*0x441a0f*/
  unk_BA7920 = unk_B33A40; /*0x441a14*/
  v7 = bBipedWhenKeyframed; /*0x441a20*/
  v8 = iMaxPickHavok; /*0x441a26*/
  unk_BA791C = unk_B33A38; /*0x441a2c*/
  v9 = flt_B05234; /*0x441a32*/
  MEMORY[0xBA7918] = v6; /*0x441a38*/
  v10 = iIdentityBatchRemove; /*0x441a3d*/
  flt_B2E2F0 = v9; /*0x441a42*/
  fFromMoveMassLimit = fMoveMassLimit; /*0x441a50*/
  off_B2E300 = (int (__cdecl *)(int, int))sub_4DE010; /*0x441a56*/
  v11 = unk_B33A50; /*0x441a60*/
  MEMORY[0xBA7909] = v7; /*0x441a66*/
  fromiMaxPickHavok = v8; /*0x441a6e*/
  fromIdentityBatchRemove = v10; /*0x441a74*/
  unk_BA7A88 = (int (__cdecl *)(_DWORD, _DWORD))sub_4E2160; /*0x441a79*/
  flt_B2E784 = v11 * v11; /*0x441a83*/
  unk_BA7A84 = (int (__cdecl *)(_DWORD))Shared_NoOpVirtual_60D0A0; /*0x441a89*/
  v12 = (GridCellArray *)FormHeapAlloc(0x28u); /*0x441a93*/
  if ( v12 ) /*0x441aa6*/
    v13 = GridCellArray::GridCellArray(v12); /*0x441aaa*/
  else
    v13 = 0; /*0x441ab1*/
  this->gridCellArray = v13; /*0x441ab3*/
  v13->Fn_01(v13); /*0x441ac2*/
  v14 = (GridDistantArray *)FormHeapAlloc(0x14u); /*0x441ac6*/
  if ( v14 ) /*0x441ad9*/
    v15 = GridDistantArray::GridDistantArray(v14); /*0x441add*/
  else
    v15 = 0; /*0x441ae4*/
  this->gridDistantArray = v15; /*0x441ae6*/
  (*(void (__thiscall **)(GridDistantArray *))(*(_DWORD *)v15 + 4))(v15); /*0x441af5*/
  sub_4BE8A0(); /*0x441af7*/
  sub_4BDCD0(); /*0x441afc*/
  v16 = (IOManager *)FormHeapAlloc(0x3Cu); /*0x441b03*/
  if ( v16 ) /*0x441b16*/
    v17 = IOManager::IOManager(v16); /*0x441b1a*/
  else
    v17 = 0; /*0x441b21*/
  MEMORY[0xB33A10] = v17; /*0x441b2a*/
  v18 = (BSTask **)FormHeapAlloc(0x1Cu); /*0x441b2f*/
  if ( v18 ) /*0x441b42*/
    v19 = ModelLoader_constr(v18); /*0x441b46*/
  else
    v19 = 0; /*0x441b4d*/
  MEMORY[0xB33A1C] = (QueuedTreeBillboard *)v19; /*0x441b59*/
  v20 = (_DWORD *)FormHeapAlloc(0xCE0u); /*0x441b5e*/
  if ( v20 ) /*0x441b71*/
    v21 = (char *)TESDataHandler_constr(v20); /*0x441b75*/
  else
    v21 = 0; /*0x441b7c*/
  MEMORY[0xB33A98] = (int)v21; /*0x441b8a*/
  sub_44A2B0(v21, lpString2); /*0x441b8f*/
  v22 = FormHeapAlloc(0x1C4u); /*0x441b99*/
  if ( v22 ) /*0x441bac*/
    v23 = (TESSaveLoad *)TESSaveLoadGame_Initialize(v22); /*0x441bb0*/
  else
    v23 = 0; /*0x441bb7*/
  g_TESSaveLoadGame = v23; /*0x441bb9*/
  v24 = uGridsToLoad * (uGridsToLoad + 2); /*0x441bc6*/
  if ( uExteriorCellBuffer < (unsigned int)(v24 + 1) ) /*0x441bd7*/
    uExteriorCellBuffer = v24 + 1; /*0x441bd9*/
  v25 = uInteriorCellBuffer; /*0x441bde*/
  if ( !uInteriorCellBuffer ) /*0x441bde*/
  {
    v25 = 1; /*0x441be9*/
    uInteriorCellBuffer = 1; /*0x441bee*/
  }
  this->interiorCellBufferArray = (TESObjectCELL **)FormHeapAlloc(
                                                      (unsigned __int64)(unsigned int)v25 >> 0x1E != 0
                                                    ? 0xFFFFFFFF
                                                    : 4 * v25);
  this->exteriorCellBufferArray = (TESObjectCELL **)FormHeapAlloc(
                                                      (unsigned __int64)(unsigned int)uExteriorCellBuffer >> 0x1E != 0
                                                    ? 0xFFFFFFFF
                                                    : 4 * uExteriorCellBuffer);
  for ( i = 0; i < uInteriorCellBuffer; ++i ) /*0x441c30*/
    this->interiorCellBufferArray[i] = 0; /*0x441c3d*/
  for ( j = 0; j < uExteriorCellBuffer; ++j ) /*0x441c45*/
    this->exteriorCellBufferArray[j] = 0; /*0x441c52*/
  this->extXCoord = 0x7FFFFFFF; /*0x441c5f*/
  this->extYCoord = 0x7FFFFFFF; /*0x441c62*/
  this->unk28 = 0x7FFFFFFF; /*0x441c65*/
  this->unk2C = 0x7FFFFFFF; /*0x441c68*/
  this->unk48 = 0x7FFFFFFF; /*0x441c6b*/
  this->unk4C = 0x7FFFFFFF; /*0x441c6e*/
  this->unk44 = 0; /*0x441c7a*/
  this->unk40 = 0; /*0x441c7d*/
  this->ObjectLODRoot = a3; /*0x441c80*/
  v28 = (NiNode *)FormHeapAlloc(0xE0u); /*0x441c83*/
  v29 = (BSTempNodeManager *)v28; /*0x441c88*/
  if ( v28 ) /*0x441c98*/
  {
    NiNode::NiNode(v28, 0); /*0x441c9d*/
    *(_DWORD *)v29 = &BSTempNodeManager::`vftable'; /*0x441ca2*/
  }
  else
  {
    v29 = 0; /*0x441caa*/
  }
  ObjectLODRoot = this->ObjectLODRoot; /*0x441cac*/
  this->tempNodeManager = v29; /*0x441cb6*/
  if ( ObjectLODRoot ) /*0x441cb9*/
    ((void (__thiscall *)(NiNode *, BSTempNodeManager *, _DWORD))ObjectLODRoot->vtbl->AddObject)(ObjectLODRoot, v29, 0); /*0x441cc5*/
  this->LandLOD = a4; /*0x441ccb*/
  this->sky = a5; /*0x441cd2*/
  SunDirectionalLight = Sky::GetSunDirectionalLight(a5); /*0x441cd5*/
  sky = this->sky; /*0x441cda*/
  this->niDirectionalLight = SunDirectionalLight; /*0x441cdd*/
  this->fogProperty = (BSFogProperty *)sub_53FB50(sky); /*0x441ce5*/
  BYTE1(this->unk68) = 0; /*0x441ce8*/
  this->currentWorldSpace = 0; /*0x441ceb*/
  this->currentExteriorCell = 0; /*0x441cee*/
  this->unkA8 = 1; /*0x441cf1*/
  v33 = uGridsToLoad * uGridsToLoad; /*0x441cfd*/
  if ( unk_B33A2C < v33 ) /*0x441d06*/
    unk_B33A2C = v33; /*0x441d08*/
  this->CellBorders = 0; /*0x441d0d*/
  this->waterNodeData = 0; /*0x441d10*/
  if ( !byte_B05244 ) /*0x441d13*/
    unk_B3F958 = 1; /*0x441d1b*/
  this->unk88 = 0; /*0x441d22*/
  this->unk51 = 0; /*0x441d28*/
  this->unk52 = 0; /*0x441d2b*/
  this->unkA9 = 1; /*0x441d2e*/
  return this; /*0x441d37*/
}
