char __thiscall sub_59FBF0(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(this + 0x1E); /*0x59fbf0*/
  if ( v2 ) /*0x59fbf5*/
  {
    LOBYTE(v2) = EffectItemList_AddItem((_DWORD *)(*(_DWORD *)(v2 + 0x74) + 0x24), a2); /*0x59fbfd*/
  }
  else
  {
    v3 = *(this + 0x1F); /*0x59fc02*/
    if ( v3 ) /*0x59fc07*/
      LOBYTE(v2) = EffectItemList_AddItem((_DWORD *)(*(_DWORD *)(v3 + 0x28) + 0x24), a2); /*0x59fc0f*/
  }
  return v2; /*0x59fc14*/
}
