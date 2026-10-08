void __thiscall sub_8A00A0(_DWORD *this, signed int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  if ( this && (v3 = *(this + 2)) != 0 ) /*0x8a00ad*/
    v4 = *(_DWORD *)(v3 + 0x18); /*0x8a00af*/
  else
    v4 = 0; /*0x8a00b4*/
  if ( v4 ) /*0x8a00b8*/
    v5 = *(_DWORD *)(v4 + 0xC); /*0x8a00ba*/
  else
    v5 = 0; /*0x8a00bf*/
  (*(void (__thiscall **)(signed int, int))(*(_DWORD *)a2 + 0x2C))(a2, v5); /*0x8a00cd*/
  if ( this && (v6 = *(this + 2)) != 0 ) /*0x8a00d8*/
    v7 = *(_DWORD *)(v6 + 0x1C); /*0x8a00da*/
  else
    v7 = 0; /*0x8a00df*/
  if ( v7 ) /*0x8a00e3*/
    v8 = *(_DWORD *)(v7 + 0xC); /*0x8a00e5*/
  else
    v8 = 0; /*0x8a00ea*/
  (*(void (__thiscall **)(signed int, int))(*(_DWORD *)a2 + 0x2C))(a2, v8); /*0x8a00f4*/
  sub_89D7B0(this, a2); /*0x8a00f9*/
}
