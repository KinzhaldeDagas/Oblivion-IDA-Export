void __thiscall sub_596020(Tile **this, int arg0, Tile *a3)
{
  Tile *v4; // ecx
  double v5; // st7
  char *v6; // eax
  double v7; // st7
  const char *v8; // eax
  Tile *v9; // ecx
  float a2; // [esp+10h] [ebp-2Ch]
  float a2a; // [esp+10h] [ebp-2Ch]
  float a2b; // [esp+10h] [ebp-2Ch]
  BSStringT v13; // [esp+28h] [ebp-14h] BYREF
  int v14; // [esp+38h] [ebp-4h]

  v4 = *(this + 1);
  if ( (*(_BYTE *)(arg0 + 0x88) & 1) != 0 )
    v5 = 1.0;
  else
    v5 = fConstant_2;
  a2 = v5;
  Tile_SetFloat(v4, (_DWORD *)0xFAE, a2);
  v6 = (char *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(arg0 + 0x80) + 0x10))(arg0 + 0x80, 0, 0x43534544);
  Tile_SetString(*(this + 1), (_DWORD *)0xFB0, v6);
  *(this + 0xC) = a3;
  if ( !a3 || (*(_BYTE *)(arg0 + 0x88) & 2) != 0 )
    v7 = 1.0;
  else
    v7 = fConstant_2;
  a2a = v7;
  Tile_SetFloat(*(this + 1), (_DWORD *)0xFB1, a2a);
  v8 = (const char *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(arg0 + 0x80) + 0x10))(
                       arg0 + 0x80,
                       0,
                       0x43534544);
  v13.m_data = 0;
  v13.m_dataLen = 0;
  v13.m_bufLen = 0;
  BSStringT_Set(&v13, v8, 0);
  v9 = *(this + 1);
  a2b = flt_A6B328;
  v14 = 0;
  Tile_SetFloat(v9, (_DWORD *)0xFB4, a2b);
  Tile_SetFloat(*(this + 1), (_DWORD *)0xFB4, 0.0);
  FormHeapFree((unsigned int)v13.m_data);
}
