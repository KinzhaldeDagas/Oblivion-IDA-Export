int __thiscall sub_898DB0(int this, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // edx

  result = a2;
  *(_OWORD *)(a2 + 0x10) = *(_OWORD *)(this + 0x20);
  *(_DWORD *)(a2 + 0x20) = *(_DWORD *)(this + 0x2A4);
  *(_OWORD *)(a2 + 0x30) = *(_OWORD *)(this + 0x280);
  *(_OWORD *)(a2 + 0x40) = *(_OWORD *)(this + 0x290);
  *(_DWORD *)(a2 + 0x50) = *(_DWORD *)(*(_DWORD *)(this + 0x74) + 8);
  *(_DWORD *)(a2 + 0x54) = *(_DWORD *)(this + 0x78);
  v3 = *(_DWORD *)(this + 0x154);
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 0x2C);
  else
    LOBYTE(v4) = 3;
  *(_BYTE *)(a2 + 0x28) = v4;
  *(_DWORD *)(a2 + 0x58) = *(_DWORD *)(*(_DWORD *)(this + 0x7C) + 0x1C20);
  *(_DWORD *)(a2 + 0x5C) = *(_DWORD *)(*(_DWORD *)(this + 0x7C) + 0x1C24);
  *(_DWORD *)(a2 + 0x60) = *(_DWORD *)(this + 0x60);
  *(_DWORD *)(a2 + 0x64) = *(_DWORD *)(this + 0x2A0);
  *(_BYTE *)(a2 + 0x68) = *(_BYTE *)(this + 0x2AC);
  *(_DWORD *)(a2 + 0x24) = *(_DWORD *)(this + 0x1A0);
  *(_DWORD *)(a2 + 0x6C) = *(_DWORD *)(this + 0x174);
  *(_DWORD *)(a2 + 0x70) = *(_DWORD *)(this + 0x178);
  *(_DWORD *)(a2 + 0x74) = *(_DWORD *)(this + 0x26C);
  *(_DWORD *)(a2 + 0x7C) = **(_DWORD **)(*(_DWORD *)(this + 0x74) + 0x20);
  *(_DWORD *)(a2 + 0x80) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x74) + 0x20) + 4);
  *(_DWORD *)(a2 + 0x84) = *(_DWORD *)(this + 0xA8);
  *(_DWORD *)(a2 + 0x88) = *(_DWORD *)(this + 0xAC);
  *(_BYTE *)(a2 + 0x8C) = *(_BYTE *)(this + 0xA6);
  *(_DWORD *)(a2 + 0x90) = *(_DWORD *)(this + 0xB0);
  *(_BYTE *)(a2 + 0x94) = *(_BYTE *)(this + 0xA5);
  *(_BYTE *)(a2 + 0x95) = *(_BYTE *)(this + 0xB4);
  *(_BYTE *)(a2 + 0x96) = *(_BYTE *)(this + 0xA4);
  return result;
}
