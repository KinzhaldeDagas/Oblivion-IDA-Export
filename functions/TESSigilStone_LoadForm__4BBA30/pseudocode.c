void __thiscall TESSigilStone_LoadForm(TESForm *this, Data *a2)
{
  UInt32 ChunkType; // eax
  int v4; // [esp+0h] [ebp-14h]
  int v5; // [esp+4h] [ebp-10h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) == 0x2A ) /*0x4bba51*/
  {
    TESFile_InitializeFormFromRecord(a2, this, v4, v5); /*0x4bba5d*/
    TESForm_SetIsLinked(this, 0); /*0x4bba66*/
    ChunkType = TESFile_GetChunkType(a2); /*0x4bba6d*/
    if ( ChunkType ) /*0x4bba74*/
      TESSigilStone_LoadForm_::SwitchChunkType(ChunkType, (int *)a2, (int)&savedregs, this, (int)a2); /*0x4bba7b*/
    else
      TESSigilStone_LoadForm_::Return_1((int)&savedregs, (int)a2); /*0x4bba74*/
  }
  else
  {
    TESSigilStone_LoadForm_::Done((int)a2); /*0x4bba55*/
  }
}
