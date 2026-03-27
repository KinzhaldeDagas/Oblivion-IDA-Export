void __thiscall sub_57D730(Tile **this, char arg0)
{
  Tile *v3; // ecx
  int v4; // edi
  double Float; // st7
  int v6; // eax
  _DWORD *a2; // [esp+0h] [ebp-10h]

  if ( arg0 )
  {
    if ( *(this + 0x27) )
    {
      v3 = *(this + 0x26);
      if ( v3 )
      {
        Tile_SetFloat(v3, (_DWORD *)0xFDD, 0.0);
        v4 = *(_DWORD *)*(this + 0x27);
        a2 = *(this + 0x26);
        Float = Tile_GetFloat(a2, 0xFA8);
        v6 = Double_To_SInt32(Float);
        (*(void (__thiscall **)(_DWORD, int, _DWORD *))(v4 + 0x14))(*(this + 0x27), v6, a2);
      }
    }
  }
  *(this + 0x27) = 0;
  *(this + 0x26) = 0;
}
