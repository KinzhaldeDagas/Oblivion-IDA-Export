// Verified: TESWorldSpace constructor initializes road (+0x54) to null. In this Oblivion build, the field is a TESRoad* owned by WorldSpace: the destructor releases it, CreateDuplicateForm clones it and verifies the clone's TESRoad RTTI, and TESRoad grouping code uses the reciprocal owner pointer. The adjacent +0x4C and +0x50 fields remain Unknown. Fallout's TESWorldSpace has a different layout and no TESRoad-named type or function was found in the available name/type searches; no Fallout homolog is claimed.
TESWorldSpace *__thiscall TESWorldSpace::TESWorldSpace(TESWorldSpace *this)
{
  NiTMap_Entry_void **v2; // eax
  NiTMap_Entry_void **v3; // eax
  NiTPointerMap<int,TESObjectCELL *> *v4; // eax
  NiTMap_TESCELL *v5; // eax
  double v6; // st7
  double v7; // st7
  float v8; // edx
  float v9; // eax
  unsigned int v11; // [esp-18h] [ebp-3Ch]
  unsigned int v12; // [esp-8h] [ebp-2Ch]

  TESForm_constr((TESForm *)this); /*0x4f2a3c*/
  this->fullName.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable'; /*0x4f2a43*/
  this->fullName.name.m_data = 0; /*0x4f2a4e*/
  this->fullName.name.m_dataLen = 0; /*0x4f2a51*/
  this->fullName.name.m_bufLen = 0; /*0x4f2a55*/
  TESTexture_constr(&this->texture); /*0x4f2a63*/
  this->vtbl = (TESFormVtbl *)&TESWorldSpace::`vftable'{for `TESWorldSpace'}; /*0x4f2a70*/
  this->fullName.vtbl = (BaseFormComponentVtbl *)&TESWorldSpace::`vftable'{for `TESFullName'}; /*0x4f2a76*/
  this->texture.vtbl = (BaseFormComponentVtbl *)&TESWorldSpace::`vftable'{for `TESTexture'}; /*0x4f2a7d*/
  NiTPointerMap<int,TESTerrainLODQuadRoot *>::NiTPointerMap<int,TESTerrainLODQuadRoot *>((NiTPointerMap<int,TESTerrainLODQuadRoot *> *)&this->terrainLODQuadRoots); /*0x4f2a83*/
  this->referencesByCell.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<TESObjectREFR *> *>::`vftable'; /*0x4f2a9e*/
  this->referencesByCell.m_numBuckets = 0x25; /*0x4f2aa5*/
  this->referencesByCell.m_numItems = 0; /*0x4f2aac*/
  v2 = (NiTMap_Entry_void **)FormHeapAlloc(0x94u); /*0x4f2ab4*/
  v12 = 4 * this->referencesByCell.m_numBuckets; /*0x4f2ac0*/
  this->referencesByCell.m_buckets = v2; /*0x4f2ac3*/
  _memset((int)v2, 0, v12); /*0x4f2ac6*/
  this->referencesByCell.vtbl = &NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>::`vftable'; /*0x4f2acb*/
  this->fallbackReferences = 0; /*0x4f2ad2*/
  this->? = 0; /*0x4f2ad5*/
  this->editorID.m_data = 0; /*0x4f2ad8*/
  this->editorID.m_dataLen = 0; /*0x4f2ade*/
  this->editorID.m_bufLen = 0; /*0x4f2ae5*/
  this->CellsWithLODObjects.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,bool>::`vftable'; /*0x4f2b02*/
  this->CellsWithLODObjects.m_numBuckets = 0x25; /*0x4f2b0c*/
  this->CellsWithLODObjects.m_numItems = 0; /*0x4f2b16*/
  v3 = (NiTMap_Entry_void **)FormHeapAlloc(0x94u); /*0x4f2b21*/
  v11 = 4 * this->CellsWithLODObjects.m_numBuckets; /*0x4f2b30*/
  this->CellsWithLODObjects.m_buckets = v3; /*0x4f2b33*/
  _memset((int)v3, 0, v11); /*0x4f2b39*/
  this->CellsWithLODObjects.vtbl = &NiTPointerMap<unsigned int,bool>::`vftable'; /*0x4f2b3e*/
  this->super.type = kFormType_WorldSpace; /*0x4f2b4f*/
  this->terrainLODQuadOwner = this;             // Verified TESWorldSpace.terrainLODQuadOwner (+0x48) is initialized to `this`; this backpointer is read by the embedded TerrainLODQuadMap code to recover the owning world's FormID. /*0x4f2b53*/
  v4 = (NiTPointerMap<int,TESObjectCELL *> *)FormHeapAlloc(0x10u); /*0x4f2b56*/
  if ( v4 ) /*0x4f2b6d*/
    v5 = (NiTMap_TESCELL *)NiTPointerMap<int,TESObjectCELL *>::NiTPointerMap<int,TESObjectCELL *>(v4, 0x25u); /*0x4f2b73*/
  else
    v5 = 0; /*0x4f2b7a*/
  v6 = flt_A32048; /*0x4f2b7c*/
  this->cellMap = v5; /*0x4f2b82*/
  this->cellBounds[1] = v6;                     // Oblivion TESWorldSpace constructor initializes the two NAM0 minimum axes (this+0x98/+0x9C) to +FLT_MAX from flt_A32048 (bits 0x7F7FFFFF). At 0x4F2BA2/0x4F2BA8 it initializes the NAM9 maxima (this+0xA0/+0xA4) to -FLT_MAX from flt_A3B888 (bits 0xFF7FFFFF). Full-record axis replay starts from these sentinels; partial overrides inherit prior state. /*0x4f2b85*/
  this->persistentCell = 0; /*0x4f2b8b*/
  this->cellBounds[0] = v6; /*0x4f2b8e*/
  this->road[2] = 0;                            // Verified: TESWorldSpace.road (+0x54) is initialized null here. Its lifecycle and copy path establish it as TESRoad*: TESWorldSpace::~TESWorldSpace releases it, and CreateDuplicateForm clones it through TESRoad's virtual clone before RTTI-checking the result as TESRoad. /*0x4f2b94*/
  v7 = flt_A3B888; /*0x4f2b97*/
  this->cellBounds[3] = flt_A3B888; /*0x4f2ba2*/
  this->cellBounds[2] = v7; /*0x4f2ba8*/
  v8 = g_TESObjectTREE_InitialBillboardSizeX; /*0x4f2bae*/
  this->unknown0AC[2] = g_TESObjectTREE_InitialBillboardSizeX; /*0x4f2bb4*/
  v9 = g_TESObjectTREE_InitialBillboardSizeY; /*0x4f2bba*/
  this->unknown0AC[0] = v8; /*0x4f2bc1*/
  this->unknown0AC[3] = v9; /*0x4f2bcb*/
  this->unknown0AC[1] = v9; /*0x4f2bd1*/
  TESWorldSpace::SetDefault(this); /*0x4f2bd7*/
  this->distantLODMetadata[1] = 7;              // Verified constructor initializes the trailing WorldSpace distant-LOD metadata modeMask at +0xDC to 0x7; the byte at +0xD8 is separately cleared by LoadLODObjects before it checks for a .cmp file. /*0x4f2bdc*/
  this->unknown060 = 0; /*0x4f2be2*/
  this->cellOffsetsArray = 0; /*0x4f2be5*/
  this->recordOffsetFromFileBeginning = 0; /*0x4f2beb*/
  return this; /*0x4f2bf3*/
}
