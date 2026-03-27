int __thiscall EffectItem_GetSummonedObj_(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 7);
  if ( (*(_DWORD *)(v1 + 0x58) & 0x70000) != 0 )
    return *(_DWORD *)(v1 + 0x60);
  else
    return 0;
}
