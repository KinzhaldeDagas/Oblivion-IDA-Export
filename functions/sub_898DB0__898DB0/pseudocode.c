int __thiscall sub_898DB0(int this, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // edx

  result = a2; /*0x898db4*/
  *(_OWORD *)(a2 + 0x10) = *(_OWORD *)(this + 0x20); /*0x898db8*/
  *(_DWORD *)(a2 + 0x20) = *(_DWORD *)(this + 0x2A4); /*0x898dc2*/
  *(_OWORD *)(a2 + 0x30) = *(_OWORD *)(this + 0x280); /*0x898dcc*/
  *(_OWORD *)(a2 + 0x40) = *(_OWORD *)(this + 0x290); /*0x898dd7*/
  *(_DWORD *)(a2 + 0x50) = *(_DWORD *)(*(_DWORD *)(this + 0x74) + 8); /*0x898de1*/
  *(_DWORD *)(a2 + 0x54) = *(_DWORD *)(this + 0x78); /*0x898de8*/
  v3 = *(_DWORD *)(this + 0x154); /*0x898deb*/
  if ( v3 ) /*0x898df3*/
    v4 = *(_DWORD *)(v3 + 0x2C); /*0x898df5*/
  else
    LOBYTE(v4) = 3; /*0x898dfa*/
  *(_BYTE *)(a2 + 0x28) = v4; /*0x898dff*/
  *(_DWORD *)(a2 + 0x58) = *(_DWORD *)(*(_DWORD *)(this + 0x7C) + 0x1C20); /*0x898e0b*/
  *(_DWORD *)(a2 + 0x5C) = *(_DWORD *)(*(_DWORD *)(this + 0x7C) + 0x1C24); /*0x898e17*/
  *(_DWORD *)(a2 + 0x60) = *(_DWORD *)(this + 0x60); /*0x898e1d*/
  *(_DWORD *)(a2 + 0x64) = *(_DWORD *)(this + 0x2A0); /*0x898e26*/
  *(_BYTE *)(a2 + 0x68) = *(_BYTE *)(this + 0x2AC); /*0x898e2f*/
  *(_DWORD *)(a2 + 0x24) = *(_DWORD *)(this + 0x1A0); /*0x898e38*/
  *(_DWORD *)(a2 + 0x6C) = *(_DWORD *)(this + 0x174); /*0x898e41*/
  *(_DWORD *)(a2 + 0x70) = *(_DWORD *)(this + 0x178); /*0x898e4a*/
  *(_DWORD *)(a2 + 0x74) = *(_DWORD *)(this + 0x26C); /*0x898e53*/
  *(_DWORD *)(a2 + 0x7C) = **(_DWORD **)(*(_DWORD *)(this + 0x74) + 0x20); /*0x898e5e*/
  *(_DWORD *)(a2 + 0x80) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x74) + 0x20) + 4); /*0x898e6a*/
  *(_DWORD *)(a2 + 0x84) = *(_DWORD *)(this + 0xA8); /*0x898e76*/
  *(_DWORD *)(a2 + 0x88) = *(_DWORD *)(this + 0xAC); /*0x898e82*/
  *(_BYTE *)(a2 + 0x8C) = *(_BYTE *)(this + 0xA6); /*0x898e8e*/
  *(_DWORD *)(a2 + 0x90) = *(_DWORD *)(this + 0xB0); /*0x898e9a*/
  *(_BYTE *)(a2 + 0x94) = *(_BYTE *)(this + 0xA5); /*0x898ea6*/
  *(_BYTE *)(a2 + 0x95) = *(_BYTE *)(this + 0xB4); /*0x898eb2*/
  *(_BYTE *)(a2 + 0x96) = *(_BYTE *)(this + 0xA4); /*0x898ebe*/
  return result; /*0x898ec5*/
}
