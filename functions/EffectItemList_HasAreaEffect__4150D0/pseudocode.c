bool __thiscall EffectItemList_HasAreaEffect(_DWORD *this)
{
  _DWORD *v1; // esi
  bool v3; // bl
  int v4; // edi
  int v5; // esi

  v1 = this; /*0x4150d1*/
  if ( !*(this + 2) && !*(this + 1) ) /*0x4150d9*/
    return 0; /*0x4150df*/
  v3 = 0; /*0x4150e4*/
  if ( this ) /*0x4150e8*/
  {
    do /*0x415121*/
    {
      if ( v3 ) /*0x4150f2*/
        break; /*0x4150f2*/
      v4 = v1[1]; /*0x4150f4*/
      if ( v4 ) /*0x4150f9*/
      {
        if ( EffectItem_GetArea((_DWORD *)v1[1]) > 1 ) /*0x415105*/
          v3 = (*(_DWORD *)(*(_DWORD *)(v4 + 0x1C) + 0x58) & 0x400000) == 0; /*0x415115*/
      }
      v5 = v1[2]; /*0x415117*/
      if ( !v5 ) /*0x41511c*/
        break; /*0x41511c*/
      v1 = (_DWORD *)(v5 - 4); /*0x41511e*/
    }
    while ( v1 ); /*0x415121*/
  }
  return v3; /*0x4150e1*/
}
