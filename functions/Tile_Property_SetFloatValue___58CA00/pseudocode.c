void __thiscall Tile_Property_SetFloatValue_(int this, float a2)
{
  double v3; // st7

  v3 = *(float *)(this + 4);
  *(_BYTE *)(this + 0x1A) = 1;
  if ( a2 != v3 || *(_WORD *)(this + 0x18) == 0xFDE )
  {
    BSStringT_Set((BSStringT *)(this + 8), EmptyString, 0);
    *(float *)(this + 4) = a2;
    sub_588930((_DWORD *)this);
    DoActionEnumeration((float *)this, 1);
  }
}
