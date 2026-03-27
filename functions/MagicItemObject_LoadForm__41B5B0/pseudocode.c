void __thiscall MagicItemObject_LoadForm(TESForm *this, Data *a2)
{
  UInt32 ChunkType; // eax
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+4h] [ebp-14h]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  TESFile_InitializeFormFromRecord(a2, this, v4, v5);
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
    MagicItemObject_LoadForm_::SwitchChunkType(ChunkType, (int)this, (int)this + 0x24);
  else
    MagicItemObject_LoadForm_::ChunkLoopExit((int)this, (int)&savedregs, (int)a2);
}
