int __thiscall EffectItem_GetSummonedObj_(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 7); /*0x418f30*/
  if ( (*(_DWORD *)(v1 + 0x58) & 0x70000) != 0 ) /*0x418f3a*/
    return *(_DWORD *)(v1 + 0x60); /*0x418f3c*/
  else
    return 0; /*0x418f40*/
}
