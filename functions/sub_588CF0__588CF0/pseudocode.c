// AchievementsNative evidence: stock tile Y helper starts with tile y and adds ancestor y only when ancestor locus is nonzero; inventory hover passes this row Y to popup path.
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

  Float = Tile_GetFloat(this, 0xFAC); /*0x588d00*/
  for ( i = *(this + 4); i; i = *(_DWORD *)(i + 0x10) ) /*0x588d09*/
  {
    v3 = *(_DWORD **)(i + 0x18); /*0x588d11*/
    if ( v3 ) /*0x588d15*/
    {
      while ( 1 ) /*0x588d17*/
      {
        v4 = v3[2]; /*0x588d17*/
        v5 = *(_WORD *)(v4 + 0x18); /*0x588d1d*/
        v3 = (_DWORD *)*v3; /*0x588d26*/
        if ( v5 == 0xFA6 ) /*0x588d28*/
          break; /*0x588d28*/
        if ( v5 > 0xFA6u || !v3 ) /*0x588d2e*/
          goto LABEL_14; /*0x588d2e*/
      }
      if ( 0.0 != *(float *)(v4 + 4) ) /*0x588d42*/
      {
        v6 = *(_DWORD **)(i + 0x18); /*0x588d44*/
        if ( v6 ) /*0x588d48*/
        {
          while ( 1 ) /*0x588d4a*/
          {
            v7 = v6[2]; /*0x588d4a*/
            v8 = *(_WORD *)(v7 + 0x18); /*0x588d50*/
            v6 = (_DWORD *)*v6; /*0x588d59*/
            if ( v8 == 0xFAC ) /*0x588d5b*/
              break; /*0x588d5b*/
            if ( v8 > 0xFACu || !v6 ) /*0x588d61*/
              goto LABEL_12; /*0x588d61*/
          }
          v11 = *(float *)(v7 + 4); /*0x588d89*/
        }
        else
        {
LABEL_12:
          v11 = 0.0; /*0x588d63*/
        }
        Float = v11 + Float; /*0x588d6f*/
      }
    }
LABEL_14:
    ; /*0x588d73*/
  }
  return Float; /*0x588d81*/
}
