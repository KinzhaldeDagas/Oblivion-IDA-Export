char __thiscall sub_4A49F0(BSStringT *this, Data *a1)
{
  int v4[3]; // [esp+0h] [ebp-10h] BYREF

  if ( !a1 || TESFile_GetChunkType(a1) != 0x504D4452 ) /*0x4a4a16*/
    return 0; /*0x4a4a3e*/
  _alloca_(v4[0]); /*0x4a4a1e*/
  TESFile_GetChunkData(a1, (char *)v4, 0); /*0x4a4a2a*/
  BSStringT_Set(this + 1, (const char *)v4, 0); /*0x4a4a35*/
  return 1; /*0x4a4a43*/
}
