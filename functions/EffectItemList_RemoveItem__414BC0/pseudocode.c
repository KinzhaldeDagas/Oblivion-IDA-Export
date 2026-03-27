char __thiscall EffectItemList_RemoveItem(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // eax

  v3 = this + 1;
  v4 = v3;
  if ( v3 )
  {
    while ( (_DWORD *)*v4 != a2 )
    {
      v4 = (_DWORD *)v4[1];
      if ( !v4 )
        return (char)v4;
    }
    BSSimpleList_Remove(v3, (int)a2);
    LOBYTE(v4) = EffectItem_IsHostile(a2);
    if ( (_BYTE)v4 )
      --*(this + 3);
  }
  return (char)v4;
}
