// Verified: initializes base Tile, optionally attaches to supplied parent via 0x58D1C0, then optionally names it. First argument after receiver is Tile* parent, not float; disassembly uses integer pointer test and push.
void __thiscall Tile::Init(Tile *this, Tile *parent, const char *name, Tile *sibling)
{
  BSStringT *v5; // edi

  v5 = (BSStringT *)((char *)this + 8); /*0x58da08*/
  *((_BYTE *)this + 4) = 0; /*0x58da12*/
  *((_BYTE *)this + 5) = 0; /*0x58da15*/
  *((_DWORD *)this + 4) = 0; /*0x58da18*/
  *((_DWORD *)this + 0xB) = 2; /*0x58da1b*/
  *((_DWORD *)this + 9) = 0; /*0x58da22*/
  BSStringT_Set((BSStringT *)this + 1, EmptyString, 0); /*0x58da25*/
  *((_DWORD *)this + 0xA) = 0; /*0x58da30*/
  if ( parent ) /*0x58da33*/
    Tile::SetParent(this, parent, sibling); /*0x58da3d*/
  if ( name ) /*0x58da48*/
    BSStringT_Set(v5, name, 0); /*0x58da4e*/
  if ( !dword_B3B0B4[6] ) /*0x58da53*/
    sub_58A1C0(); /*0x58da5d*/
}
