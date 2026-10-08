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

  v4 = *(this + 1); /*0x596054*/
  if ( (*(_BYTE *)(arg0 + 0x88) & 1) != 0 ) /*0x596058*/
    v5 = 1.0; /*0x59605a*/
  else
    v5 = fConstant_2; /*0x59605e*/
  a2 = v5; /*0x596064*/
  Tile_SetFloat(v4, 0xFAEu, a2); /*0x59606c*/
  v6 = (char *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(arg0 + 0x80) + 0x10))(arg0 + 0x80, 0, 0x43534544); /*0x59608a*/
  Tile_SetString(*(this + 1), (_DWORD *)0xFB0, v6); /*0x596095*/
  *(this + 0xC) = a3; /*0x5960a0*/
  if ( !a3 || (*(_BYTE *)(arg0 + 0x88) & 2) != 0 ) /*0x5960ac*/
    v7 = 1.0; /*0x5960b6*/
  else
    v7 = fConstant_2; /*0x5960ae*/
  a2a = v7; /*0x5960bc*/
  Tile_SetFloat(*(this + 1), 0xFB1u, a2a); /*0x5960c4*/
  v8 = (const char *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(arg0 + 0x80) + 0x10))( /*0x5960d6*/
                       arg0 + 0x80,
                       0,
                       0x43534544);
  v13.m_data = 0; /*0x5960de*/
  v13.m_dataLen = 0; /*0x5960e2*/
  v13.m_bufLen = 0; /*0x5960e7*/
  BSStringT_Set(&v13, v8, 0); /*0x5960ec*/
  v9 = *(this + 1); /*0x5960f7*/
  a2b = flt_A6B328; /*0x5960fb*/
  v14 = 0; /*0x596103*/
  Tile_SetFloat(v9, 0xFB4u, a2b); /*0x596107*/
  Tile_SetFloat(*(this + 1), 0xFB4u, 0.0); /*0x59611a*/
  FormHeapFree((unsigned int)v13.m_data); /*0x596124*/
}
