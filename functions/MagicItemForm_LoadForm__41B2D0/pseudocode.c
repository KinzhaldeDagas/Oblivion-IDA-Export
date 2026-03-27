void __thiscall MagicItemForm_LoadForm(TESForm *this, Data *a2)
{
  UInt32 ChunkType; // eax
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+4h] [ebp-14h]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  TESFile_InitializeFormFromRecord(a2, this, v4, v5);
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
    MagicItemForm_LoadForm_::SwitchChunkType(ChunkType, (int)this, (int)(this + 1));
  else
    MagicItemForm_LoadForm_::ChunkLoopExit((int)this, (int)&savedregs, (int)a2);
}
