// 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
char __thiscall TESFile_GetChunkData4(Data *this, char *Dst)
{
  return TESFile_GetChunkData(this, Dst, 4u); /*0x4510ec*/
}
