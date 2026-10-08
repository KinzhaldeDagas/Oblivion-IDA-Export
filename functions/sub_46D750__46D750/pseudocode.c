// Verified: MODT chunks are accepted only when byte length is a nonzero multiple of 24. Each valid chunk is decoded into runtime texture-hash entries and replaces the TESTextureList state; zero/invalid-width chunks leave the old state unchanged. The 24-byte field meanings remain Unknown.
int __thiscall TESModel_ReadAndReplaceTextureHashEntries(
        TESTextureList *this,
        Data *file,
        TESForm *form,
        const char *modelPath)
{
  UInt32 length; // ecx
  int result; // eax
  unsigned int v6; // esi
  int v7[3]; // [esp+0h] [ebp-14h] BYREF
  TESTextureList *v8; // [esp+Ch] [ebp-8h]

  v8 = this; /*0x46d763*/
  length = file->currentChunk.length; /*0x46d766*/
  result = 0xAAAAAAAB * length; /*0x46d771*/
  v6 = length / 0x18; /*0x46d777*/
  if ( !(length % 0x18) )                       // MODT acceptance gate: only nonzero payload length divisible by 24 reaches replacement. Invalid-width and zero-length MODT retain the prior runtime texture array. /*0x46d783*/
  {
    if ( v6 ) /*0x46d793*/
    {
      _alloca_(v7[0]); /*0x46d797*/
      _memset((int)v7, 0, 0x18 * v6); /*0x46d7a2*/
      TESFile_GetChunkData(file, (char *)v7, 0x18 * v6); /*0x46d7af*/
      return TESModel_ReplaceTextureHashEntries(v8, (TextureHashEntry24 *)v7, v6, form, modelPath); /*0x46d7c1*/
    }
  }
  return result; /*0x46d7c9*/
}
