// Verified destruction order: clears persistent-reference index (+0x64), TESForm component references, SubSpace spatial index (+0x60), exterior cell map, cellMap, persistent cell, auxiliary resources, LOD-cell map, terrain LOD map, then base components.
void __thiscall TESWorldSpace::~TESWorldSpace(TESWorldSpace *this)
{
  TESTexture *p_texture; // ebx
  NiTMap_TESCELL *cellMap; // ecx
  TESObjectCELL *persistentCell; // ecx
  UInt32 v5; // ecx

  p_texture = &this->texture; /*0x4f0fdc*/
  this->vtbl = (TESFormVtbl *)&TESWorldSpace::`vftable'{for `TESWorldSpace'}; /*0x4f0fdf*/
  this->fullName.vtbl = (BaseFormComponentVtbl *)&TESWorldSpace::`vftable'{for `TESFullName'}; /*0x4f0fe5*/
  this->texture.vtbl = (BaseFormComponentVtbl *)&TESWorldSpace::`vftable'{for `TESTexture'}; /*0x4f0fec*/
  if ( (TESWorldSpace *)unk_B33ABC == this ) /*0x4f1002*/
    unk_B33ABC = 0; /*0x4f1004*/
  TESWorldSpace_ClearReferenceIndex(this); /*0x4f100c*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4f1013*/
  TESWorldSpace_ClearSubSpaceIndex(this); /*0x4f101a*/
  TESWorldSpace_ClearExteriorCellMap(this); /*0x4f1021*/
  cellMap = this->cellMap; /*0x4f1026*/
  if ( cellMap ) /*0x4f102b*/
    (*(void (__thiscall **)(NiTMap_TESCELL *, int))cellMap->vtbl)(cellMap, 1); /*0x4f1033*/
  persistentCell = this->persistentCell; /*0x4f1035*/
  this->cellMap = 0; /*0x4f103a*/
  if ( persistentCell ) /*0x4f103d*/
    persistentCell->vtbl->Destroy((TESForm *)persistentCell, 1); /*0x4f1046*/
  v5 = this->road[2];                           // Verified: this is TESWorldSpace.road (+0x54), a TESRoad*; destructor releases the owned form through its virtual Destroy call, then clears the field. /*0x4f1048*/
  this->persistentCell = 0; /*0x4f104d*/
  if ( v5 ) /*0x4f1050*/
    (*(void (__thiscall **)(UInt32, int))(*(_DWORD *)v5 + 0x10))(v5, 1); /*0x4f1059*/
  FormHeapFree((unsigned int)this->cellOffsetsArray); /*0x4f1062*/
  NiTPointerMap<unsigned int,bool>::~NiTPointerMap<unsigned int,bool>((unsigned int *)&this->CellsWithLODObjects); /*0x4f1075*/
  FormHeapFree((unsigned int)this->editorID.m_data); /*0x4f1081*/
  this->editorID.m_data = 0; /*0x4f108c*/
  this->editorID.m_bufLen = 0; /*0x4f1092*/
  this->editorID.m_dataLen = 0; /*0x4f1099*/
  NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>((unsigned int *)&this->referencesByCell); /*0x4f10a5*/
  sub_4EC590((NiTMap_TESCELL *)&this->terrainLODQuadRoots); /*0x4f10b2*/
  TESTexture_destr(p_texture); /*0x4f10be*/
  FormHeapFree((unsigned int)this->fullName.name.m_data); /*0x4f10c7*/
  this->fullName.name.m_data = 0; /*0x4f10d1*/
  this->fullName.name.m_bufLen = 0; /*0x4f10d4*/
  this->fullName.name.m_dataLen = 0; /*0x4f10d8*/
  TESForm_destr((TESForm *)this); /*0x4f10e4*/
}
