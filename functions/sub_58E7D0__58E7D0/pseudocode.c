void __usercall sub_58E7D0(_DWORD *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  Tile *v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  _DWORD *PropertyByCode; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int v11; // [esp+Ch] [ebp-8h] BYREF
  float Float; // [esp+10h] [ebp-4h]

  v5 = (Tile *)*(this + 4);
  v11 = 0;
  v6 = sub_58E3B0(v5, a2, a3, a4, (_DWORD *)0xFF5, &v11);
  v7 = v6;
  if ( v6 )
  {
    PropertyByCode = Tile_GetPropertyByCode_(v6, (_DWORD *)0xFB3);
    if ( PropertyByCode )
      Tile_Property_SetFloatValue_((int)PropertyByCode, flt_A6906C);
    Float = Tile_GetFloat(this, 0xFF5);
    v9 = Tile_GetPropertyByCode_(v7, (_DWORD *)0xFB3);
    if ( v9 )
      Tile_Property_SetFloatValue_((int)v9, Float);
    v10 = Tile_GetPropertyByCode_(v7, (_DWORD *)0xFB3);
    if ( v10 )
      Tile_Property_SetFloatValue_((int)v10, 0.0);
  }
}
