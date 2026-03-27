void __usercall TileRect::~TileRect(
        TileRect *this@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  *(_DWORD *)this = &TileRect::`vftable';
  if ( !*((_BYTE *)this + 4) )
    sub_58DA70((int)this);
  Tile::~Tile(this, a2, a3, a4, a5);
}
