char __thiscall sub_4A3BB0(int *this, Data *a2)
{
  if ( !a2 )
    return 0;
  if ( TESFile_GetChunkType(a2) == 0x4E4F4349 )
    TESTexture_Load(*(this + 2), a2);
  return 1;
}
