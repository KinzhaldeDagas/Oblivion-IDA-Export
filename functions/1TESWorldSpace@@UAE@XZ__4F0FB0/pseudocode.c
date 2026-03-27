void __thiscall TESWorldSpace::~TESWorldSpace(TESWorldSpace *this)
{
  TESTexture *p_texture; // ebx
  NiTMap_TESCELL *cellMap; // ecx
  TESObjectCELL *unk034; // ecx
  UInt32 v5; // ecx

  p_texture = &this->texture;
  this->vtbl = (TESFormVtbl *)&TESWorldSpace::`vftable'{for `TESWorldSpace'};
  this->fullName.vtbl = (BaseFormComponentVtbl *)&TESWorldSpace::`vftable'{for `TESFullName'};
  this->texture.vtbl = (BaseFormComponentVtbl *)&TESWorldSpace::`vftable'{for `TESTexture'};
  if ( (TESWorldSpace *)dword_B33ABC == this )
    dword_B33ABC = 0;
  sub_4F02B0((unsigned int *)this);
  j_TESForm_ClearComponentReferences((TESForm *)this);
  sub_4F04D0((NiTMap_TESCELL **)this);
  sub_4F0030((NiTMap_TESCELL **)this);
  cellMap = this->cellMap;
  if ( cellMap )
    (*(void (__thiscall **)(NiTMap_TESCELL *, int))cellMap->vtbl)(cellMap, 1);
  unk034 = this->unk034;
  this->cellMap = 0;
  if ( unk034 )
    unk034->vtbl->Destroy((TESForm *)unk034, 1);
  v5 = this->unk04C[2];
  this->unk034 = 0;
  if ( v5 )
    (*(void (__thiscall **)(UInt32, int))(*(_DWORD *)v5 + 0x10))(v5, 1);
  FormHeapFree((unsigned int)this->cellOffsetsArray);
  NiTPointerMap<unsigned int,bool>::~NiTPointerMap<unsigned int,bool>((unsigned int *)&this->CellsWithLODObjects);
  FormHeapFree((unsigned int)this->editorID.m_data);
  this->editorID.m_data = 0;
  this->editorID.m_bufLen = 0;
  this->editorID.m_dataLen = 0;
  NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>((unsigned int *)&this->map064);
  sub_4EC590((NiTMap_TESCELL *)&this->map);
  TESTexture_destr(p_texture);
  FormHeapFree((unsigned int)this->fullName.name.m_data);
  this->fullName.name.m_data = 0;
  this->fullName.name.m_bufLen = 0;
  this->fullName.name.m_dataLen = 0;
  TESForm_destr((TESForm *)this);
}
