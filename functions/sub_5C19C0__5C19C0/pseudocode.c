void __stdcall sub_5C19C0(int a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v3; // ecx
  int v4; // eax
  float Float; // [esp+0h] [ebp-4h]

  if ( a1 >= 0x33 )
  {
    v2 = a2;
    Float = Tile_GetFloat(a2, 0xFB8);
    v3 = (unsigned __int16)(int)Tile_GetFloat(v2, 0xFB9) << 0x10;
    a2 = (_DWORD *)(int)Float;
    a1 = (unsigned __int16)a2 | v3;
    if ( a1 )
    {
      v4 = sub_5C1100();
      sub_776690((_DWORD *)&quickKeyList_ptr + 4 * v4, &a1);
      byte_B3B43C = 1;
    }
  }
}
