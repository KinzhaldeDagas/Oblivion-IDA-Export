void __usercall TileImage::~TileImage(
        TileImage *this@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  int v6; // esi

  *(_DWORD *)this = &TileImage::`vftable';
  if ( !*((_BYTE *)this + 4) )
    sub_58DA70((int)this);
  v6 = *((_DWORD *)this + 0x11);
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      a5 = ((double (__thiscall *)(int, int))**(_DWORD **)v6)(v6, 1);
  }
  Tile::~Tile(this, a2, a3, a4, a5);
}
