// Verified source selection: externalLodFiles uses the parsed external .lod stream exclusively; otherwise the loader searches this WorldSpace's override files, parses matching cell records, and follows parentWorldspace until a contributing file is found. Callers include DistantLODLoaderTask_LoadCellData.
bool __thiscall TESWorldSpace_LoadCellDistantLODData(
        TESWorldSpace *this,
        int cellX,
        int cellY,
        DistantLODCellObjectMap *outMap,
        DistantLODLoadMode lodMode,
        void *externalFile)
{
  TESForm::ModReferenceList *p_modlist; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  Data *OverrideFile; // eax
  Data *ThreadSafeFile; // esi
  char v13; // [esp+7h] [ebp-1h]

  if ( outMap ) /*0x4f1999*/
  {
    while ( 1 ) /*0x4f19a9*/
    {
      v13 = 0; /*0x4f19a9*/
      if ( externalLodFiles ) /*0x4f19a2*/
        break; /*0x4f19a2*/
      p_modlist = &this->super.modlist; /*0x4f19c9*/
      v8 = 0; /*0x4f19cc*/
      if ( this != (TESWorldSpace *)0xFFFFFFF0 ) /*0x4f19d0*/
      {
        do /*0x4f19df*/
        {
          if ( p_modlist->data ) /*0x4f19d2*/
            ++v8; /*0x4f19d7*/
          p_modlist = p_modlist->next; /*0x4f19da*/
        }
        while ( p_modlist ); /*0x4f19df*/
      }
      v9 = 0; /*0x4f19e1*/
      if ( v8 ) /*0x4f19e5*/
      {
        do /*0x4f1a39*/
        {
          OverrideFile = TESForm_GetOverrideFile((TESForm *)this, v9); /*0x4f19ea*/
          ThreadSafeFile = TESFile_GetThreadSafeFile(OverrideFile); /*0x4f19f6*/
          if ( ThreadSafeFile ) /*0x4f19fa*/
          {
            if ( TESWorldSpace::FindCellInFile(this, ThreadSafeFile, cellX, cellY) ) /*0x4f1a09*/
            {
              if ( TESWorldSpace_ParseCellDistantLODRecords(ThreadSafeFile, this, cellX, cellY, outMap) ) /*0x4f1a23*/
                v13 = 1; /*0x4f1a2f*/
            }
          }
          ++v9; /*0x4f1a34*/
        }
        while ( v9 < v8 ); /*0x4f1a39*/
        LOBYTE(p_modlist) = v13; /*0x4f1a3b*/
LABEL_15:
        if ( (_BYTE)p_modlist ) /*0x4f1a41*/
          return (char)p_modlist; /*0x4f1a41*/
      }
      this = this->parentWorldspace; /*0x4f1a43*/
      if ( !this ) /*0x4f1a48*/
        return (char)p_modlist; /*0x4f1a48*/
    }
    LOBYTE(p_modlist) = DistantLOD_ParseExternalCellFile(externalFile, outMap, lodMode); /*0x4f19bf*/
    goto LABEL_15; /*0x4f19c7*/
  }
  return (char)p_modlist; /*0x4f1a51*/
}
