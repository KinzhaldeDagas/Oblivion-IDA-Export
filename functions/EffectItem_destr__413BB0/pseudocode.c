int __thiscall EffectItem_destr(unsigned int *this)
{
  unsigned int v1; // esi

  v1 = *(this + 6);
  if ( v1 )
  {
    FormHeapFree(*(_DWORD *)(v1 + 8));
    *(_DWORD *)(v1 + 8) = 0;
    *(_WORD *)(v1 + 0xE) = 0;
    *(_WORD *)(v1 + 0xC) = 0;
    FormHeapFree(v1);
  }
  return EffectItem_destr_::Done();
}
