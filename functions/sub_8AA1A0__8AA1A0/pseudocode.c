int __thiscall sub_8AA1A0(int this, int a2)
{
  int v3; // ecx
  char v4; // al
  int result; // eax

  *(_BYTE *)(a2 + 0xB4) = *(_BYTE *)(this + 0x90);
  *(_WORD *)(a2 + 0xA) = *(_WORD *)(this + 0x8E);
  v3 = *(_DWORD *)(this + 0x64);
  if ( v3 )
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x10))(v3);
  else
    v4 = 1;
  *(_BYTE *)(a2 + 0xB1) = v4;
  *(_DWORD *)(a2 + 0x9C) = *(_DWORD *)(this + 0x5C);
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(this + 0x58);
  *(_DWORD *)(a2 + 0xA0) = *(_DWORD *)(this + 0x60);
  *(_DWORD *)(a2 + 0x94) = *(_DWORD *)(*(_DWORD *)(this + 0x50) + 0xC8);
  *(_DWORD *)(a2 + 0x98) = *(_DWORD *)(*(_DWORD *)(this + 0x50) + 0xCC);
  *(_OWORD *)(a2 + 0x30) = *(_OWORD *)(*(_DWORD *)(this + 0x50) + 0xD0);
  *(_OWORD *)(a2 + 0x40) = *(_OWORD *)(*(_DWORD *)(this + 0x50) + 0xE0);
  *(float *)(a2 + 0x90) = sub_89DA90((float *)*(_DWORD *)(this + 0x50));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 0x50) + 0x28))(*(_DWORD *)(this + 0x50), a2 + 0x50);
  *(_BYTE *)(a2 + 0xB0) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x50) + 8))(*(_DWORD *)(this + 0x50));
  *(_BYTE *)(a2 + 0xB2) = *(_BYTE *)(*(_DWORD *)(this + 0x50) + 0xBC);
  *(_DWORD *)(a2 + 0xA4) = *(_DWORD *)(*(_DWORD *)(this + 0x50) + 0xB4);
  *(_DWORD *)(a2 + 0xA8) = *(_DWORD *)(*(_DWORD *)(this + 0x50) + 0xB8);
  *(_OWORD *)(a2 + 0x10) = *(_OWORD *)(*(_DWORD *)(this + 0x50) + 0x40);
  *(_OWORD *)(a2 + 0x20) = *(_OWORD *)(*(_DWORD *)(this + 0x50) + 0x80);
  *(_OWORD *)(a2 + 0x80) = *(_OWORD *)(*(_DWORD *)(this + 0x50) + 0x90);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(this + 0x14);
  *(_DWORD *)a2 = *(_DWORD *)(this + 0x30);
  result = *(_DWORD *)(this + 0x34);
  *(_DWORD *)(a2 + 0xAC) = result;
  *(_BYTE *)(a2 + 0xB3) = *(_BYTE *)(this + 0x2E);
  return result;
}
