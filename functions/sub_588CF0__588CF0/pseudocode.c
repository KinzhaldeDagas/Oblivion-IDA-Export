double __thiscall sub_588CF0(_DWORD *this)
{
  int i; // esi
  _DWORD *v3; // eax
  int v4; // edx
  unsigned __int16 v5; // cx
  _DWORD *v6; // eax
  int v7; // edx
  unsigned __int16 v8; // cx
  float Float; // [esp+4h] [ebp-8h]
  float v11; // [esp+8h] [ebp-4h]

  Float = Tile_GetFloat(this, 0xFAC);
  for ( i = *(this + 4); i; i = *(_DWORD *)(i + 0x10) )
  {
    v3 = *(_DWORD **)(i + 0x18);
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = v3[2];
        v5 = *(_WORD *)(v4 + 0x18);
        v3 = (_DWORD *)*v3;
        if ( v5 == 0xFA6 )
          break;
        if ( v5 > 0xFA6u || !v3 )
          goto LABEL_14;
      }
      if ( 0.0 != *(float *)(v4 + 4) )
      {
        v6 = *(_DWORD **)(i + 0x18);
        if ( v6 )
        {
          while ( 1 )
          {
            v7 = v6[2];
            v8 = *(_WORD *)(v7 + 0x18);
            v6 = (_DWORD *)*v6;
            if ( v8 == 0xFAC )
              break;
            if ( v8 > 0xFACu || !v6 )
              goto LABEL_12;
          }
          v11 = *(float *)(v7 + 4);
        }
        else
        {
LABEL_12:
          v11 = 0.0;
        }
        Float = v11 + Float;
      }
    }
LABEL_14:
    ;
  }
  return Float;
}
