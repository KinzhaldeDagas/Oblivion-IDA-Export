bool __thiscall EffectItemList_HasScriptEffect(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  bool v4; // bl
  int v5; // edi
  int v6; // esi

  v2 = this;
  if ( !*(this + 2) && !*(this + 1) )
    return 0;
  v4 = 0;
  if ( this )
  {
    do
    {
      if ( v4 )
        break;
      v5 = v2[1];
      if ( v5 )
      {
        if ( EffectItem_GetScript((UInt32 **)v2[1]) == a2 )
          v4 = (*(_DWORD *)(*(_DWORD *)(v5 + 0x1C) + 0x58) & 0x400000) == 0;
      }
      v6 = v2[2];
      if ( !v6 )
        break;
      v2 = (_DWORD *)(v6 - 4);
    }
    while ( v2 );
  }
  return v4;
}
