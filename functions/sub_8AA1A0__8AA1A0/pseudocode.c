int __thiscall sub_8AA1A0(int this, int a2)
{
  int v3; // ecx
  char v4; // al
  int result; // eax

  *(_BYTE *)(a2 + 0xB4) = *(_BYTE *)(this + 0x90); /*0x8aa1ae*/
  *(_WORD *)(a2 + 0xA) = *(_WORD *)(this + 0x8E); /*0x8aa1bb*/
  v3 = *(_DWORD *)(this + 0x64); /*0x8aa1bf*/
  if ( v3 ) /*0x8aa1c4*/
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x10))(v3); /*0x8aa1c8*/
  else
    v4 = 1; /*0x8aa1cd*/
  *(_BYTE *)(a2 + 0xB1) = v4; /*0x8aa1d2*/
  *(_DWORD *)(a2 + 0x9C) = *(_DWORD *)(this + 0x5C); /*0x8aa1db*/
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(this + 0x58); /*0x8aa1e4*/
  *(_DWORD *)(a2 + 0xA0) = *(_DWORD *)(this + 0x60); /*0x8aa1ea*/
  *(_DWORD *)(a2 + 0x94) = *(_DWORD *)(*(_DWORD *)(this + 0x50) + 0xC8); /*0x8aa1f9*/
  *(_DWORD *)(a2 + 0x98) = *(_DWORD *)(*(_DWORD *)(this + 0x50) + 0xCC); /*0x8aa208*/
  *(_OWORD *)(a2 + 0x30) = *(_OWORD *)(*(_DWORD *)(this + 0x50) + 0xD0); /*0x8aa218*/
  *(_OWORD *)(a2 + 0x40) = *(_OWORD *)(*(_DWORD *)(this + 0x50) + 0xE0); /*0x8aa226*/
  *(float *)(a2 + 0x90) = sub_89DA90((float *)*(_DWORD *)(this + 0x50)); /*0x8aa232*/
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 0x50) + 0x28))(*(_DWORD *)(this + 0x50), a2 + 0x50); /*0x8aa241*/
  *(_BYTE *)(a2 + 0xB0) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x50) + 8))(*(_DWORD *)(this + 0x50)); /*0x8aa24c*/
  *(_BYTE *)(a2 + 0xB2) = *(_BYTE *)(*(_DWORD *)(this + 0x50) + 0xBC); /*0x8aa25b*/
  *(_DWORD *)(a2 + 0xA4) = *(_DWORD *)(*(_DWORD *)(this + 0x50) + 0xB4); /*0x8aa26a*/
  *(_DWORD *)(a2 + 0xA8) = *(_DWORD *)(*(_DWORD *)(this + 0x50) + 0xB8); /*0x8aa279*/
  *(_OWORD *)(a2 + 0x10) = *(_OWORD *)(*(_DWORD *)(this + 0x50) + 0x40); /*0x8aa286*/
  *(_OWORD *)(a2 + 0x20) = *(_OWORD *)(*(_DWORD *)(this + 0x50) + 0x80); /*0x8aa294*/
  *(_OWORD *)(a2 + 0x80) = *(_OWORD *)(*(_DWORD *)(this + 0x50) + 0x90); /*0x8aa2a2*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(this + 0x14); /*0x8aa2ac*/
  *(_DWORD *)a2 = *(_DWORD *)(this + 0x30); /*0x8aa2b2*/
  result = *(_DWORD *)(this + 0x34); /*0x8aa2b4*/
  *(_DWORD *)(a2 + 0xAC) = result; /*0x8aa2b7*/
  *(_BYTE *)(a2 + 0xB3) = *(_BYTE *)(this + 0x2E); /*0x8aa2c0*/
  return result; /*0x8aa2c6*/
}
