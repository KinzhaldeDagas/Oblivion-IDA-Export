void __thiscall sub_57D730(Tile **this, char arg0)
{
  Tile *v3; // ecx
  int v4; // edi
  double Float; // st7
  int v6; // eax
  _DWORD *a2; // [esp+0h] [ebp-10h]

  if ( arg0 ) /*0x57d73a*/
  {
    if ( *(this + 0x27) ) /*0x57d73c*/
    {
      v3 = *(this + 0x26); /*0x57d744*/
      if ( v3 ) /*0x57d74c*/
      {
        Tile_SetFloat(v3, (_DWORD *)0xFDD, 0.0); /*0x57d75a*/
        v4 = *(_DWORD *)*(this + 0x27); /*0x57d76b*/
        a2 = *(this + 0x26); /*0x57d76d*/
        Float = Tile_GetFloat(a2, 0xFA8); /*0x57d773*/
        v6 = Double_To_SInt32(Float); /*0x57d778*/
        (*(void (__thiscall **)(_DWORD, int, _DWORD *))(v4 + 0x14))(*(this + 0x27), v6, a2); /*0x57d787*/
      }
    }
  }
  *(this + 0x27) = 0; /*0x57d78a*/
  *(this + 0x26) = 0; /*0x57d790*/
}
