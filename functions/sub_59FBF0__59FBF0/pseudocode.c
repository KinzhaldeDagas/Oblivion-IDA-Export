char __thiscall sub_59FBF0(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(this + 0x1E);
  if ( v2 )
  {
    LOBYTE(v2) = EffectItemList_AddItem((_DWORD *)(*(_DWORD *)(v2 + 0x74) + 0x24), a2);
  }
  else
  {
    v3 = *(this + 0x1F);
    if ( v3 )
      LOBYTE(v2) = EffectItemList_AddItem((_DWORD *)(*(_DWORD *)(v3 + 0x28) + 0x24), a2);
  }
  return v2;
}
