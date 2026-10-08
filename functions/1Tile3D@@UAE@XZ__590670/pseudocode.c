void __thiscall Tile3D::~Tile3D(Tile3D *this)
{
  *(_DWORD *)this = &Tile3D::`vftable'; /*0x590699*/
  QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], *((_DWORD *)this + 0x14), 1, 1); /*0x5906b5*/
  if ( !*((_BYTE *)this + 4) ) /*0x5906bc*/
    Tile::Release(this); /*0x5906c3*/
  FormHeapFree(*((_DWORD *)this + 0x14)); /*0x5906cc*/
  *((_DWORD *)this + 0x14) = 0; /*0x5906d1*/
  *((_WORD *)this + 0x2B) = 0; /*0x5906d4*/
  *((_WORD *)this + 0x2A) = 0; /*0x5906d8*/
  FormHeapFree(*((_DWORD *)this + 0x12)); /*0x5906e0*/
  *((_DWORD *)this + 0x12) = 0; /*0x5906ea*/
  *((_WORD *)this + 0x27) = 0; /*0x5906ed*/
  *((_WORD *)this + 0x26) = 0; /*0x5906f1*/
  Tile::~Tile(this); /*0x5906fd*/
}
