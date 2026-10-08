// Verified Oblivion .cmp mask bits: 0x1 trees, 0x2 buildings/object LOD, 0x4 LandLOD, established by direct mode-test consumers. Fallout divergence: Fallout WorldSpace instead exposes NoLODWater and NoLODNoise flag bits and a DistantLODShaderProperty cache; the Fallout database has no matching Oblivion .cmp cell-map path.
void __thiscall TESWorldSpace::LoadLODObjects(TESWorldSpace *this)
{
  const char *(__thiscall *GetEditorName)(TESForm *); // edx
  const char *v3; // eax
  char *m_data; // ebp
  _BYTE *BSFile; // esi
  unsigned int v6; // eax
  int v7; // edi
  char v8; // [esp+1Bh] [ebp-1Dh] BYREF
  unsigned int v9; // [esp+1Ch] [ebp-1Ch]
  _WORD v10[2]; // [esp+20h] [ebp-18h] BYREF
  BSStringT v11; // [esp+24h] [ebp-14h] BYREF
  int v12; // [esp+34h] [ebp-4h]

  this->distantLODMetadata.cellLODMapLoaded = 0; /*0x4f28db*/
  v11.m_data = 0; /*0x4f28e2*/
  v11.m_dataLen = 0; /*0x4f28e6*/
  v11.m_bufLen = 0; /*0x4f28eb*/
  GetEditorName = this->vtbl->GetEditorName; /*0x4f28f2*/
  v12 = 0; /*0x4f28f8*/
  v3 = GetEditorName((TESForm *)this); /*0x4f28fc*/
  BSStringT_Static_Format(&v11, "Data\\DistantLOD\\%s.cmp", v3); /*0x4f2909*/
  m_data = v11.m_data; /*0x4f290e*/
  BSFile = FileFinder_LoadBSFile(v11.m_data, 0, 0x800); /*0x4f291e*/
  if ( BSFile ) /*0x4f2925*/
  {
    NiTMap_Clear(&this->CellsWithLODObjects.vtbl); /*0x4f2935*/
    (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)BSFile + 0x18))(BSFile, 0, 0); /*0x4f2943*/
    v6 = ((unsigned int)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)BSFile + 0x1C))(BSFile) >> 2) - 1; /*0x4f2951*/
    if ( BSFile[0x24] ) /*0x4f2954*/
    {
      if ( v6 ) /*0x4f295c*/
      {
        v9 = v6; /*0x4f295e*/
        do /*0x4f29a6*/
        {
          (*(void (__thiscall **)(_BYTE *, _WORD *, int))(*(_DWORD *)BSFile + 0x38))(BSFile, v10, 4); /*0x4f2970*/
          v7 = (v10[1] << 0x10) | v10[0]; /*0x4f2984*/
          if ( !sub_4D6760(&this->CellsWithLODObjects.vtbl, v7, &v8) ) /*0x4f298e*/
            NiTMap_SetAt(&this->CellsWithLODObjects.vtbl, v7, 1); /*0x4f299c*/
          --v9; /*0x4f29a1*/
        }
        while ( v9 ); /*0x4f29a6*/
      }
      this->distantLODMetadata.cellLODMapLoaded = 1; /*0x4f29a8*/
      (*(void (__thiscall **)(_BYTE *, unsigned int *, int))(*(_DWORD *)BSFile + 0x38))( /*0x4f29bf*/
        BSFile,
        &this->distantLODMetadata.modeMask,
        4);                                     // Verified .cmp trailer: after reading the packed exterior-cell coordinate entries, LoadLODObjects reads the final 4-byte word into TESWorldSpace.distantLODMetadata.modeMask (+0xDC). No consumer of modeMask was established; its semantic meaning remains Unknown.
    }
    (**(void (__thiscall ***)(_BYTE *, int))BSFile)(BSFile, 1); /*0x4f29c9*/
    FormHeapFree((unsigned int)v11.m_data); /*0x4f29d0*/
  }
  else
  {
    FormHeapFree((unsigned int)m_data); /*0x4f2928*/
  }
}
