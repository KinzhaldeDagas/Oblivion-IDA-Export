Data *__thiscall sub_451F80(Data *this, int a2)
{
  _DWORD *unk008; // ecx
  Data *result; // eax
  Data *v5; // eax
  Data *v6; // esi
  bool v7; // zf
  UInt8 fileIndex; // al
  Data *ghostFileParent; // ecx
  Data *i; // eax
  NiTPointerMap<unsigned int,TESFile *> *v11; // eax
  NiTPointerMap<unsigned int,TESFile *> *v12; // eax
  Data *v13; // [esp+Ch] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-4h]

  unk008 = (_DWORD *)this->unk008;
  v13 = 0;
  if ( !unk008 || (NiTMap_GetAt(unk008, a2, &v13), (result = v13) == 0) )
  {
    v5 = (Data *)FormHeapAlloc(0x41Cu);
    v13 = v5;
    v14 = 0;
    if ( v5 )
      v6 = TESFile_constr(v5, this->filepath, this->name, 0);
    else
      v6 = 0;
    v7 = (this->fileFlags & 1) == 0;
    v14 = 0xFFFFFFFF;
    if ( v7 )
      v6->fileFlags &= ~1u;
    else
      v6->fileFlags |= 1u;
    fileIndex = this->fileIndex;
    v6->nextFormID = v6->nextFormID & 0xFFFFFF | (fileIndex << 0x18);
    v6->fileIndex = fileIndex;
    TESFile_BuildLoadedMasterArray(v6, (int *)(TESDataHandler + 0x8C8), 0);
    ghostFileParent = this->ghostFileParent;
    for ( i = this; ghostFileParent; ghostFileParent = ghostFileParent->ghostFileParent )
      i = ghostFileParent;
    v6->ghostFileParent = i;
    TESFile_OpenBSFile_(v6, v6->filepath, v6->name, 0, 0);
    if ( !this->unk008 )
    {
      v11 = (NiTPointerMap<unsigned int,TESFile *> *)FormHeapAlloc(0x10u);
      v13 = (Data *)v11;
      v14 = 1;
      if ( v11 )
        v12 = NiTPointerMap<unsigned int,TESFile *>::NiTPointerMap<unsigned int,TESFile *>(v11, 0x25u);
      else
        v12 = 0;
      v14 = 0xFFFFFFFF;
      this->unk008 = (UInt32)v12;
    }
    NiTMap_SetAt((_DWORD *)this->unk008, a2, (int)v6);
    return v6;
  }
  return result;
}
