void __stdcall sub_5C19C0(int data, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v3; // ecx
  int v4; // eax
  float Float; // [esp+0h] [ebp-4h]

  if ( data >= 0x33 ) /*0x5c19c6*/
  {
    v2 = a2; /*0x5c19cd*/
    Float = Tile_GetFloat(a2, 0xFB8); /*0x5c19dd*/
    v3 = (unsigned __int16)(int)Tile_GetFloat(v2, 0xFB9) << 0x10; /*0x5c1a10*/
    a2 = (_DWORD *)(int)Float; /*0x5c1a30*/
    data = (unsigned __int16)a2 | v3; /*0x5c1a42*/
    if ( data ) /*0x5c1a46*/
    {
      v4 = sub_5C1100(); /*0x5c1a4d*/
      NiTPointerList_RemoveByData(&MEMORY[0xB3B440][0x10 * v4], (void **)&data); /*0x5c1a5d*/
      byte_B3B418[0x24] = 1; /*0x5c1a62*/
    }
  }
}
