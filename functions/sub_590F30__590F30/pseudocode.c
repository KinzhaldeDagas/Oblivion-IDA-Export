// Verified vtable +0x14 callback, Fallout analogue 0x822468F8. Marks position dirty for x/y, geometry dirty for width/height, returns NULL so shared FinalPostParse also runs. No dialogue callback here.
Tile *__thiscall TileImage::PostParse(TileImage *this, unsigned int trait, float value, const char *text)
{
  int v4; // eax
  int v5; // eax

  if ( trait == 0xFAD || trait == 0xFAC ) /*0x590f42*/
  {
    v4 = *((_DWORD *)this + 0xB); /*0x590f44*/
    if ( (v4 & 1) == 0 ) /*0x590f49*/
      *((_DWORD *)this + 0xB) = v4 | 1; /*0x590f4e*/
  }
  if ( trait == 0xFCB || trait == 0xFCA ) /*0x590f5f*/
  {
    v5 = *((_DWORD *)this + 0xB); /*0x590f61*/
    if ( (v5 & 0x10) == 0 ) /*0x590f66*/
      *((_DWORD *)this + 0xB) = v5 | 0x10; /*0x590f6b*/
  }
  return 0; /*0x590f70*/
}
