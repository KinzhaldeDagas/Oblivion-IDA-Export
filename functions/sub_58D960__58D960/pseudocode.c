char __thiscall sub_58D960(float *this)
{
  _DWORD *PropertyByCode; // eax
  _DWORD *v3; // eax
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]
  float v7; // [esp+Ch] [ebp-4h]

  v5 = sub_583D50((int)this);
  v6 = (*(this + 3) - *(this + 2)) * v5 + *(this + 2);
  PropertyByCode = Tile_GetPropertyByCode_(*(_DWORD **)this, *((_DWORD **)this + 1));
  if ( PropertyByCode )
    Tile_Property_SetFloatValue_((int)PropertyByCode, v6);
  *(_DWORD *)(*(_DWORD *)this + 0x2C) |= 0x80u;
  if ( 1.0 != v5 )
    return 0;
  v7 = *(this + 3);
  v3 = Tile_GetPropertyByCode_(*(_DWORD **)this, *((_DWORD **)this + 1));
  if ( v3 )
    Tile_Property_SetFloatValue_((int)v3, v7);
  sub_5895E0(this);
  return 1;
}
