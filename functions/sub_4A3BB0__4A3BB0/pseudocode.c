char __thiscall sub_4A3BB0(int *this, Data *a2)
{
  if ( !a2 ) /*0x4a3bba*/
    return 0; /*0x4a3bbd*/
  if ( TESFile_GetChunkType(a2) == 0x4E4F4349 ) /*0x4a3bcf*/
    TESTexture_Load(*(this + 2), a2); /*0x4a3bd6*/
  return 1; /*0x4a3bbc*/
}
