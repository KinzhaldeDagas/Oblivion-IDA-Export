// AchievementsNative evidence: stock tile X helper starts with tile x and adds ancestor x only when ancestor locus is nonzero; use for inventory focus/popup coordinate mimic.
double __thiscall sub_588C50(_DWORD *this)
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

  Float = Tile_GetFloat(this, 0xFAD); /*0x588c60*/
  for ( i = *(this + 4); i; i = *(_DWORD *)(i + 0x10) ) /*0x588c69*/
  {
    v3 = *(_DWORD **)(i + 0x18); /*0x588c71*/
    if ( v3 ) /*0x588c75*/
    {
      while ( 1 ) /*0x588c77*/
      {
        v4 = v3[2]; /*0x588c77*/
        v5 = *(_WORD *)(v4 + 0x18); /*0x588c7d*/
        v3 = (_DWORD *)*v3; /*0x588c86*/
        if ( v5 == 0xFA6 ) /*0x588c88*/
          break; /*0x588c88*/
        if ( v5 > 0xFA6u || !v3 ) /*0x588c8e*/
          goto LABEL_14; /*0x588c8e*/
      }
      if ( 0.0 != *(float *)(v4 + 4) ) /*0x588ca2*/
      {
        v6 = *(_DWORD **)(i + 0x18); /*0x588ca4*/
        if ( v6 ) /*0x588ca8*/
        {
          while ( 1 ) /*0x588caa*/
          {
            v7 = v6[2]; /*0x588caa*/
            v8 = *(_WORD *)(v7 + 0x18); /*0x588cb0*/
            v6 = (_DWORD *)*v6; /*0x588cb9*/
            if ( v8 == 0xFAD ) /*0x588cbb*/
              break; /*0x588cbb*/
            if ( v8 > 0xFADu || !v6 ) /*0x588cc1*/
              goto LABEL_12; /*0x588cc1*/
          }
          v11 = *(float *)(v7 + 4); /*0x588ce9*/
        }
        else
        {
LABEL_12:
          v11 = 0.0; /*0x588cc3*/
        }
        Float = v11 + Float; /*0x588ccf*/
      }
    }
LABEL_14:
    ; /*0x588cd3*/
  }
  return Float; /*0x588ce1*/
}
