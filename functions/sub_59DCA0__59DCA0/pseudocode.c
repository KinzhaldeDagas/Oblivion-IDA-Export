void __thiscall sub_59DCA0(_DWORD *this, signed int a2, Tile *a3)
{
  if ( a2 < 0x64 )
  {
    if ( a3 )
      Tile_SetFloat(a3, (_DWORD *)0xFDD, 0.0);
  }
  else
  {
    Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFA1, 1.0);
  }
}
