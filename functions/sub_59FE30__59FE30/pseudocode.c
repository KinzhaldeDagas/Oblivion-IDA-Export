void __thiscall sub_59FE30(_DWORD *this, unsigned int *a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax

  v2 = *(this + 0x1E);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 0x74);
  }
  else
  {
    v4 = *(this + 0x1F);
    if ( !v4 )
      return;
    v3 = *(_DWORD *)(v4 + 0x28);
  }
  EffectItemList_RemoveItem((_DWORD *)(v3 + 0x24), a2);
  if ( a2 )
  {
    EffectItem_destr(a2);
    FormHeapFree((unsigned int)a2);
  }
}
