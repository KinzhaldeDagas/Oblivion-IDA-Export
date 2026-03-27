bool __thiscall EffectItemList_HasAreaEffect(_DWORD *this)
{
  _DWORD *v1; // esi
  bool v3; // bl
  int v4; // edi
  int v5; // esi

  v1 = this;
  if ( !*(this + 2) && !*(this + 1) )
    return 0;
  v3 = 0;
  if ( this )
  {
    do
    {
      if ( v3 )
        break;
      v4 = v1[1];
      if ( v4 )
      {
        if ( EffectItem_GetArea((_DWORD *)v1[1]) > 1 )
          v3 = (*(_DWORD *)(*(_DWORD *)(v4 + 0x1C) + 0x58) & 0x400000) == 0;
      }
      v5 = v1[2];
      if ( !v5 )
        break;
      v1 = (_DWORD *)(v5 - 4);
    }
    while ( v1 );
  }
  return v3;
}
