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
  UInt32 v11; // [esp-18h] [ebp-3Ch]
  UInt32 v12; // [esp-8h] [ebp-2Ch]

  TESForm_constr((TESForm *)this);
  this->fullName.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable';
  this->fullName.name.m_data = 0;
  this->fullName.name.m_dataLen = 0;
  this->fullName.name.m_bufLen = 0;
  TESTexture_constr(&this->texture);
  this->vtbl = (TESFormVtbl *)&TESWorldSpace::`vftable'{for `TESWorldSpace'};
  this->fullName.vtbl = (BaseFormComponentVtbl *)&TESWorldSpace::`vftable'{for `TESFullName'};
  this->texture.vtbl = (BaseFormComponentVtbl *)&TESWorldSpace::`vftable'{for `TESTexture'};
  NiTPointerMap<int,TESTerrainLODQuadRoot *>::NiTPointerMap<int,TESTerrainLODQuadRoot *>((NiTPointerMap<int,TESTerrainLODQuadRoot *> *)&this->map);
  this->map064.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<TESObjectREFR *> *>::`vftable';
  this->map064.m_numBuckets = 0x25;
  this->map064.m_numItems = 0;
  v2 = (NiTMap_Entry_void **)FormHeapAlloc(0x94u);
  v12 = 4 * this->map064.m_numBuckets;
  this->map064.m_buckets = v2;
  _memset(v2, 0, v12);
  this->map064.vtbl = &NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>::`vftable';
  this->character = 0;
  this->ptr078 = 0;
  this->editorID.m_data = 0;
  this->editorID.m_dataLen = 0;
  this->editorID.m_bufLen = 0;
  this->CellsWithLODObjects.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,bool>::`vftable';
  this->CellsWithLODObjects.m_numBuckets = 0x25;
  this->CellsWithLODObjects.m_numItems = 0;
  v3 = (NiTMap_Entry_void **)FormHeapAlloc(0x94u);
  v11 = 4 * this->CellsWithLODObjects.m_numBuckets;
  this->CellsWithLODObjects.m_buckets = v3;
  _memset(v3, 0, v11);
  this->CellsWithLODObjects.vtbl = &NiTPointerMap<unsigned int,bool>::`vftable';
  this->super.type = kFormType_WorldSpace;
  this->worldSpace048 = this;
  v4 = (NiTPointerMap<int,TESObjectCELL *> *)FormHeapAlloc(0x10u);
  if ( v4 )
    v5 = (NiTMap_TESCELL *)NiTPointerMap<int,TESObjectCELL *>::NiTPointerMap<int,TESObjectCELL *>(v4, 0x25u);
  else
    v5 = 0;
  v6 = flt_A32048;
  this->cellMap = v5;
  this->unk9C[1] = v6;
  this->unk034 = 0;
  this->unk9C[0] = v6;
  this->unk04C[2] = 0;
  v7 = flt_A3B888;
  this->unk9C[3] = flt_A3B888;
  this->unk9C[2] = v7;
  v8 = flt_B3FC80;
  this->unk0AC[2] = flt_B3FC80;
  v9 = flt_B3FC84;
  this->unk0AC[0] = v8;
  this->unk0AC[3] = v9;
  this->unk0AC[1] = v9;
  TESWorldSpace::SetDefault(this);
  this->unk0D8[1] = 7;
  this->unk060 = 0;
  this->cellOffsetsArray = 0;
  this->recordOffsetFromFileBeginning = 0;
  return this;
}
