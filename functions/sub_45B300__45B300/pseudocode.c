int __thiscall sub_45B300(int this)
{
  int v2; // edx
  ChangesMap *v3; // eax
  ChangesMap *v4; // eax
  InteriorCellNewReferencesMap *v5; // eax
  InteriorCellNewReferencesMap *v6; // eax
  ExteriorCellNewReferencesMap *v7; // eax
  ExteriorCellNewReferencesMap *v8; // eax
  ExteriorCellNewReferencesMap *v9; // eax
  ExteriorCellNewReferencesMap *v10; // eax
  NumericIDBufferMap *v11; // eax
  NumericIDBufferMap *v12; // eax
  NumericIDBufferMap *v13; // eax
  NumericIDBufferMap *v14; // eax
  NumericIDBufferMap *v15; // eax
  NumericIDBufferMap *v16; // eax
  NumericIDBufferMap *v17; // eax
  NumericIDBufferMap *v18; // eax
  unsigned int *v19; // eax
  unsigned int *v20; // edi
  bool v21; // zf
  unsigned int *v22; // eax
  unsigned int *v23; // edi
  unsigned int *v25; // [esp+14h] [ebp-10h] BYREF
  int v26; // [esp+20h] [ebp-4h]

  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 0xC) = 0;
  *(_DWORD *)(this + 0x14) = 0;
  *(_DWORD *)(this + 0x18) = 0;
  *(_DWORD *)(this + 0x1C) = 0;
  *(_DWORD *)(this + 0x20) = 0;
  *(_DWORD *)(this + 0x24) = 0;
  *(_DWORD *)(this + 0x28) = 0;
  *(_DWORD *)(this + 0x2C) = 0;
  *(_DWORD *)(this + 0x30) = 0;
  *(_DWORD *)(this + 0x34) = 0;
  *(_DWORD *)(this + 0x38) = 0;
  *(_DWORD *)(this + 0x3C) = 0;
  *(_DWORD *)(this + 0x40) = 0;
  *(_DWORD *)(this + 0x4C) = 0;
  *(_DWORD *)(this + 0x50) = 0;
  *(_DWORD *)(this + 0x64) = 0;
  *(_DWORD *)(this + 0x68) = 0;
  *(_DWORD *)(this + 0x6C) = 0;
  *(_BYTE *)(this + 0x70) = 0;
  *(_BYTE *)(this + 0x71) = 0;
  *(_BYTE *)(this + 0x7D) = 1;
  *(_DWORD *)(this + 0x80) = 0;
  *(_DWORD *)(this + 0x84) = 0;
  *(_DWORD *)(this + 0x88) = 0;
  *(_DWORD *)(this + 0x8C) = 0;
  *(_DWORD *)(this + 0x90) = 0;
  *(_DWORD *)(this + 0xA4) = 0;
  *(_BYTE *)(this + 0xA8) = 0;
  *(_BYTE *)(this + 0xA9) = 0;
  *(_BYTE *)(this + 0xAA) = 0;
  *(_BYTE *)(this + 0xAB) = 0;
  *(_DWORD *)(this + 0xAC) = 0;
  *(_DWORD *)(this + 0x1C0) = 0;
  SaveLoad_CurrentSavegame = (TESSaveLoad *)this;
  *(_BYTE *)(v2 + 0x185) = 0;
  v3 = (ChangesMap *)FormHeapAlloc(0x10u);
  v25 = (unsigned int *)v3;
  v26 = 0;
  if ( v3 )
    v4 = ChangesMap::ChangesMap(v3);
  else
    v4 = 0;
  *(_DWORD *)this = v4;
  v5 = (InteriorCellNewReferencesMap *)FormHeapAlloc(0x10u);
  v25 = (unsigned int *)v5;
  v26 = 1;
  if ( v5 )
    v6 = InteriorCellNewReferencesMap::InteriorCellNewReferencesMap(v5);
  else
    v6 = 0;
  *(_DWORD *)(this + 8) = v6;
  v7 = (ExteriorCellNewReferencesMap *)FormHeapAlloc(0x10u);
  v25 = (unsigned int *)v7;
  v26 = 2;
  if ( v7 )
    v8 = ExteriorCellNewReferencesMap::ExteriorCellNewReferencesMap(v7);
  else
    v8 = 0;
  *(_DWORD *)(this + 0xC) = v8;
  v9 = (ExteriorCellNewReferencesMap *)FormHeapAlloc(0x10u);
  v25 = (unsigned int *)v9;
  v26 = 3;
  if ( v9 )
    v10 = ExteriorCellNewReferencesMap::ExteriorCellNewReferencesMap(v9);
  else
    v10 = 0;
  *(_DWORD *)(this + 0x10) = v10;
  v11 = (NumericIDBufferMap *)FormHeapAlloc(0x10u);
  v25 = (unsigned int *)v11;
  v26 = 4;
  if ( v11 )
    v12 = NumericIDBufferMap::NumericIDBufferMap(v11);
  else
    v12 = 0;
  *(_DWORD *)(this + 0x54) = v12;
  v13 = (NumericIDBufferMap *)FormHeapAlloc(0x10u);
  v25 = (unsigned int *)v13;
  v26 = 5;
  if ( v13 )
    v14 = NumericIDBufferMap::NumericIDBufferMap(v13);
  else
    v14 = 0;
  *(_DWORD *)(this + 0x58) = v14;
  v15 = (NumericIDBufferMap *)FormHeapAlloc(0x10u);
  v25 = (unsigned int *)v15;
  v26 = 6;
  if ( v15 )
    v16 = NumericIDBufferMap::NumericIDBufferMap(v15);
  else
    v16 = 0;
  *(_DWORD *)(this + 0x5C) = v16;
  v17 = (NumericIDBufferMap *)FormHeapAlloc(0x10u);
  v25 = (unsigned int *)v17;
  v26 = 7;
  if ( v17 )
    v18 = NumericIDBufferMap::NumericIDBufferMap(v17);
  else
    v18 = 0;
  *(_DWORD *)(this + 0x60) = v18;
  v19 = (unsigned int *)FormHeapAlloc(0x18u);
  v20 = v19;
  v25 = v19;
  v26 = 8;
  if ( v19 )
  {
    v19[2] = 0x64;
    *v19 = (unsigned int)&NiTLargeArray<unsigned int>::`vftable';
    v19[5] = 0x32;
    v19[3] = 0;
    v19[4] = 0;
    v19[1] = FormHeapAlloc(0x190u);
  }
  else
  {
    v20 = 0;
  }
  *(_DWORD *)(this + 0x74) = v20;
  v21 = v20[2] == 0;
  v26 = 0xFFFFFFFF;
  v25 = 0;
  if ( v21 )
    sub_452910(v20, v20[5]);
  sub_446C50(v20, 0, &v25);
  v22 = (unsigned int *)FormHeapAlloc(0x18u);
  v23 = v22;
  v25 = v22;
  v26 = 9;
  if ( v22 )
  {
    v22[2] = 5;
    *v22 = (unsigned int)&NiTLargeArray<unsigned int>::`vftable';
    v22[5] = 1;
    v22[3] = 0;
    v22[4] = 0;
    v22[1] = FormHeapAlloc(0x14u);
  }
  else
  {
    v23 = 0;
  }
  *(_DWORD *)(this + 0x78) = v23;
  v21 = v23[2] == 0;
  v26 = 0xFFFFFFFF;
  v25 = 0;
  if ( v21 )
    sub_452910(v23, v23[5]);
  sub_446C50(v23, 0, &v25);
  *(_DWORD *)(this + 0x94) = 0;
  *(_DWORD *)(this + 0x98) = 0;
  *(_DWORD *)(this + 0x9C) = 0;
  *(_DWORD *)(this + 0xA0) = 0;
  *(_BYTE *)(this + 0x71) = 0x7D;
  *(_BYTE *)(this + 0x7C) = 0x7D;
  *(_BYTE *)(this + 0x70) = 0;
  return this;
}
