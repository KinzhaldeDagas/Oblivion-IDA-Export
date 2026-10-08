void __thiscall sub_57D840(_DWORD **this, _DWORD *arg0, int a3)
{
  double v4; // st7
  double v5; // st7
  float a2; // [esp+0h] [ebp-8h]
  float a2a; // [esp+0h] [ebp-8h]
  float v8; // [esp+Ch] [ebp+4h]
  float v9; // [esp+Ch] [ebp+4h]
  float v10; // [esp+Ch] [ebp+4h]
  float v11; // [esp+Ch] [ebp+4h]
  float v12; // [esp+10h] [ebp+8h]
  float v13; // [esp+10h] [ebp+8h]

  if ( (int)arg0 > 0 ) /*0x57d849*/
  {
    dword_B135F8 = (int)arg0; /*0x57d851*/
    dword_B13600 = a3; /*0x57d856*/
    if ( a3 <= 0 ) /*0x57d85c*/
      dword_B13600 = (int)arg0; /*0x57d85e*/
  }
  a2 = sub_57D330(); /*0x57d86c*/
  Tile_SetFloat((Tile *)*(this + 0x1A), 0xFDAu, a2); /*0x57d874*/
  a2a = sub_57D390(); /*0x57d882*/
  Tile_SetFloat((Tile *)*(this + 0x1A), 0xFD9u, a2a); /*0x57d88a*/
  v8 = (float)nWidth; /*0x57d895*/
  v12 = (float)nHeight; /*0x57d89f*/
  if ( v12 >= (double)v8 ) /*0x57d8b2*/
    v4 = flt_A688A8; /*0x57d8c2*/
  else
    v4 = v8 / v12 * dbl_A68D70; /*0x57d8b6*/
  v9 = v4; /*0x57d8c8*/
  Tile_SetFloat((Tile *)*(this + 0x1A), 0xFCBu, v9); /*0x57d8dc*/
  v13 = (float)nWidth; /*0x57d8e7*/
  v10 = (float)nHeight; /*0x57d8f1*/
  if ( v13 >= (double)v10 ) /*0x57d904*/
    v5 = flt_A68D78; /*0x57d914*/
  else
    v5 = v10 / v13 * dbl_A688A0; /*0x57d908*/
  v11 = v5; /*0x57d91a*/
  Tile_SetFloat((Tile *)*(this + 0x1A), 0xFCAu, v11); /*0x57d92e*/
}
