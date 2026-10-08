// Verified graph lifecycle dispatcher: if pointArray already exists, resolve deferred cross-cell PGRI links and optionally rebuild the render graph; otherwise find the thread-safe override file, load the PathGrid graph chunks, and on successful load perform the same cross-cell resolution/render update.
bool __thiscall TESPathGrid_LoadOrResolveGraph(TESPathGrid *this)
{
  Data *OverrideFile; // eax
  Data *ThreadSafeFile; // eax
  Data *v5; // edi
  bool SerializedGraphChunks; // bl

  if ( this->pointArray ) /*0x4e7613*/
  {
    TESPathGrid_ResolveCrossCellLinks(this); /*0x4e7619*/
    if ( unk_B35F84 ) /*0x4e761e*/
      TESPathGrid_RebuildRenderedGraph(this); /*0x4e7629*/
    return 1; /*0x4e762e*/
  }
  else
  {
    OverrideFile = TESForm_GetOverrideFile(&this->base, 0xFFFFFFFF); /*0x4e7635*/
    ThreadSafeFile = TESFile_GetThreadSafeFile(OverrideFile); /*0x4e763c*/
    v5 = ThreadSafeFile; /*0x4e7641*/
    if ( ThreadSafeFile && TESFile::FindForm(ThreadSafeFile, &this->base) ) /*0x4e764a*/
    {
      SerializedGraphChunks = TESPathGrid_LoadSerializedGraphChunks(this, v5); /*0x4e7661*/
      if ( SerializedGraphChunks ) /*0x4e7665*/
      {
        TESPathGrid_ResolveCrossCellLinks(this); /*0x4e7669*/
        if ( unk_B35F84 ) /*0x4e766e*/
          TESPathGrid_RebuildRenderedGraph(this); /*0x4e7679*/
      }
      return SerializedGraphChunks; /*0x4e767e*/
    }
    else
    {
      return 0; /*0x4e7654*/
    }
  }
}
