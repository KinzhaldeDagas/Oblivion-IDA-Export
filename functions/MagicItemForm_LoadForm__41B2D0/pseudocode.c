void __thiscall MagicItemForm_LoadForm(TESForm *this, Data *a2)
{
  UInt32 ChunkType; // eax
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+4h] [ebp-14h]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  TESFile_InitializeFormFromRecord(a2, this, v4, v5); /*0x41b2eb*/
  ChunkType = TESFile_GetChunkType(a2); /*0x41b2f2*/
  if ( ChunkType ) /*0x41b2fc*/
    MagicItemForm_LoadForm_::SwitchChunkType(ChunkType, (int)this, (int)(this + 1), (int)a2, (int)&savedregs, (int)a2); /*0x41b305*/
  else
    MagicItemForm_LoadForm_::ChunkLoopExit((int)this, (int)&savedregs, (int)a2); /*0x41b2fc*/
}
