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

  if ( (int)arg0 > 0 )
  {
    dword_B135F8 = (int)arg0;
    dword_B13600 = a3;
    if ( a3 <= 0 )
      dword_B13600 = (int)arg0;
  }
  a2 = sub_57D330();
  Tile_SetFloat((Tile *)*(this + 0x1A), (_DWORD *)0xFDA, a2);
  a2a = sub_57D390();
  Tile_SetFloat((Tile *)*(this + 0x1A), (_DWORD *)0xFD9, a2a);
  v8 = (float)nWidth;
  v12 = (float)nHeight;
  if ( v12 >= (double)v8 )
    v4 = flt_A688A8;
  else
    v4 = v8 / v12 * dbl_A68D70;
  v9 = v4;
  Tile_SetFloat((Tile *)*(this + 0x1A), (_DWORD *)0xFCB, v9);
  v13 = (float)nWidth;
  v10 = (float)nHeight;
  if ( v13 >= (double)v10 )
    v5 = flt_A68D78;
  else
    v5 = v10 / v13 * dbl_A688A0;
  v11 = v5;
  Tile_SetFloat((Tile *)*(this + 0x1A), (_DWORD *)0xFCA, v11);
}
