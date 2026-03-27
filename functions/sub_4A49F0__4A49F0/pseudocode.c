char __thiscall sub_4A49F0(BSStringT *this, Data *a1)
{
  char v4[12]; // [esp+0h] [ebp-10h] BYREF

  if ( !a1 || TESFile_GetChunkType(a1) != 0x504D4452 )
    return 0;
  _alloca_();
  TESFile_GetChunkData(a1, v4, 0);
  BSStringT_Set(this + 1, v4, 0);
  return 1;
}
