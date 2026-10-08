// Verified: invokes ScanForMaxFocus with INT_MIN and null root, sets selected tile via SetCurrentFocusTarget, hides cursor, clears mouse-motion byte +0xB9. Fallout named analogue 0x824F09D0.
void __thiscall InterfaceManager::GetDefaultFocus(InterfaceManager *this)
{
  double v1; // st5
  double v2; // st6
  double v3; // st7
  Tile *v5; // eax
  int v6; // [esp+8h] [ebp-4h] BYREF

  v6 = 0x80000000; /*0x57fd6b*/
  v5 = InterfaceManager::ScanForMaxFocus(this, &v6, 0); /*0x57fd73*/
  if ( v5 ) /*0x57fd83*/
  {
    InterfaceManager::SetCurrentFocusTarget((float *)this, v1, v3, v2, *(float *)&v5, (_DWORD *)0xFDD, 0); /*0x57fd86*/
    *(_WORD *)(*((_DWORD *)this->cursor + 9) + 0x18) |= 1u; /*0x57fd93*/
    Tile_SetFloat(this->cursor, 0xFA1u, 1.0); /*0x57fda4*/
    BYTE1(this->unk0B8) = 0; /*0x57fda9*/
  }
  else
  {
    InterfaceManager::SetCurrentFocusTarget((float *)this, v1, v3, v2, 0.0, (_DWORD *)0xFDD, 0); /*0x57fdb5*/
  }
}
