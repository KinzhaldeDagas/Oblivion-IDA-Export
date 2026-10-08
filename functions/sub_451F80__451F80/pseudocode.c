// Looks up a TESFile clone by thread ID; if absent, constructs and opens a read-only clone, copies master/index state, assigns the root thread-safe parent, and inserts it into the per-thread map.
Data *__thiscall TESFile_GetThreadSafeFileForThread(Data *this, int a2)
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

  unk008 = (_DWORD *)this->unk008; /*0x451fa5*/
  v13 = 0; /*0x451faa*/
  if ( !unk008 || (NiTMap_GetAt(unk008, a2, &v13), (result = v13) == 0) ) /*0x451fc9*/
  {
    v5 = (Data *)FormHeapAlloc(0x41Cu); /*0x451fd4*/
    v13 = v5; /*0x451fdc*/
    v14 = 0; /*0x451fe2*/
    if ( v5 ) /*0x451fea*/
      v6 = TESFile_constr(v5, this->filepath, this->name, 0); /*0x452000*/
    else
      v6 = 0; /*0x452004*/
    v7 = (this->fileFlags & 1) == 0; /*0x452006*/
    v14 = 0xFFFFFFFF; /*0x45200d*/
    if ( v7 ) /*0x452015*/
      v6->fileFlags &= ~1u; /*0x452020*/
    else
      v6->fileFlags |= 1u; /*0x452017*/
    fileIndex = this->fileIndex; /*0x452027*/
    v6->nextFormID = v6->nextFormID & 0xFFFFFF | (fileIndex << 0x18); /*0x452041*/
    v6->fileIndex = fileIndex; /*0x452047*/
    TESFile_BuildLoadedMasterArray(v6, (int *)(g_TESDataHandler + 0x8C8), 0); /*0x45205c*/
    ghostFileParent = this->ghostFileParent; /*0x452061*/
    for ( i = this; ghostFileParent; ghostFileParent = ghostFileParent->ghostFileParent ) /*0x452068*/
      i = ghostFileParent; /*0x452070*/
    v6->ghostFileParent = i; /*0x45208a*/
    TESFile_OpenBSFile_(v6, v6->filepath, v6->name, 0, 0); /*0x45208d*/
    if ( !this->unk008 ) /*0x452092*/
    {
      v11 = (NiTPointerMap<unsigned int,TESFile *> *)FormHeapAlloc(0x10u); /*0x45209a*/
      v13 = (Data *)v11; /*0x4520a2*/
      v14 = 1; /*0x4520a8*/
      if ( v11 ) /*0x4520b0*/
        v12 = NiTPointerMap<unsigned int,TESFile *>::NiTPointerMap<unsigned int,TESFile *>(v11, 0x25u); /*0x4520b6*/
      else
        v12 = 0; /*0x4520bd*/
      v14 = 0xFFFFFFFF; /*0x4520bf*/
      this->unk008 = (UInt32)v12; /*0x4520c7*/
    }
    NiTMap_SetAt((_DWORD *)this->unk008, a2, (int)v6); /*0x4520d3*/
    return v6; /*0x4520d8*/
  }
  return result; /*0x4520da*/
}
