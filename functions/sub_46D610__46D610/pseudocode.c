// Verified: replaces runtime TESTextureList entry count and pointer array; for each 24-byte record invokes ArchiveManager_LazyFileLookup using decoded 8-byte identifiers. Diagnostic strings confirm missing archive texture entries. Record field semantics beyond lookup identifiers remain Unknown.
int __thiscall TESModel_ReplaceTextureHashEntries(
        TESTextureList *this,
        TextureHashEntry24 *entries,
        unsigned int count,
        TESForm *form,
        const char *modelPath)
{
  int result; // eax
  unsigned int v7; // edi
  unsigned __int8 *v8; // esi
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // al
  unsigned int v11; // ecx
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // al
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // al
  const char *v16; // [esp-10h] [ebp-28h]
  int v17; // [esp-Ch] [ebp-24h]
  unsigned int v18[2]; // [esp+8h] [ebp-10h] BYREF
  unsigned int v19[2]; // [esp+10h] [ebp-8h] BYREF

  LOBYTE(this->count) = count;                  // Oblivion runtime texture-array mutation overwrites the entry count and installs a newly allocated array for this decoded MODT. Repeated valid MODT chunks therefore replace prior runtime state (last valid wins). /*0x46d61c*/
  result = FormHeapAlloc((unsigned __int64)count >> 0x1E != 0 ? 0xFFFFFFFF : 4 * count);
  v7 = 0; /*0x46d633*/
  this->archiveEntries = (void **)result; /*0x46d63c*/
  if ( count ) /*0x46d63f*/
  {
    v8 = &entries->opaque[2]; /*0x46d64f*/
    do /*0x46d656*/
    {
      v9 = *v8; /*0x46d656*/
      v10 = v8[0xFFFFFFFE]; /*0x46d659*/
      BYTE1(v18[0]) = v8[0xFFFFFFFF]; /*0x46d65d*/
      v11 = *(_DWORD *)(v8 + 2); /*0x46d661*/
      BYTE2(v18[0]) = v9; /*0x46d664*/
      v12 = v8[0xE]; /*0x46d668*/
      LOBYTE(v18[0]) = v10; /*0x46d66c*/
      v13 = v8[1]; /*0x46d670*/
      v18[1] = v11; /*0x46d674*/
      LOBYTE(v11) = v8[0x10]; /*0x46d678*/
      LOBYTE(v19[0]) = v12; /*0x46d67c*/
      v14 = v8[0x11]; /*0x46d680*/
      HIBYTE(v18[0]) = v13; /*0x46d684*/
      v15 = v8[0xF]; /*0x46d688*/
      BYTE2(v19[0]) = v11; /*0x46d68c*/
      HIBYTE(v19[0]) = v14; /*0x46d696*/
      BYTE1(v19[0]) = v15; /*0x46d69f*/
      v19[1] = *(_DWORD *)(v8 + 0x12); /*0x46d6a9*/
      result = ArchiveManager_LazyFileLookup(1, v19, v18, 0); /*0x46d6ad*/
      this->archiveEntries[v7] = (void *)result; /*0x46d6b8*/
      if ( !byte_B06310 || !bUseArchives_Archive || this->archiveEntries[v7] ) /*0x46d6d0*/
        goto LABEL_12; /*0x46d6d4*/
      if ( form ) /*0x46d6d8*/
      {
        if ( !modelPath ) /*0x46d6df*/
          goto LABEL_11; /*0x46d6df*/
        v16 = (const char *)((int (__thiscall *)(TESForm *, UInt32))form->vtbl->GetEditorName)(form, form->member.refID); /*0x46d6f2*/
        result = PrintError( /*0x46d6fd*/
                   "Failed to find archive file entry for texture on model '%s' for form %s (%08X).",
                   modelPath,
                   v16,
                   v17);
      }
      else
      {
        if ( !modelPath ) /*0x46d70c*/
        {
LABEL_11:
          result = PrintError("Failed to find archive file entry for texture on UNKNOWN Model"); /*0x46d722*/
          goto LABEL_12; /*0x46d727*/
        }
        result = PrintError("Failed to find archive file entry for texture on model '%s' on UNKNOWN form.", modelPath); /*0x46d718*/
      }
LABEL_12:
      ++v7; /*0x46d72f*/
      v8 += 0x18; /*0x46d732*/
    }
    while ( v7 < count ); /*0x46d656*/
  }
  return result; /*0x46d741*/
}
