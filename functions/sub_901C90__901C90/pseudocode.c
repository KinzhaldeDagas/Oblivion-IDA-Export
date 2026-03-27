_DWORD *__thiscall sub_901C90(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  const void *v3; // esi

  result = this;
  *this = *(_DWORD *)a2;
  *(this + 0x40C) = *(_DWORD *)(a2 + 0x3034);
  *((_OWORD *)this + 0x101) = *(_OWORD *)(a2 + 0x10);
  *((_OWORD *)this + 0x102) = *(_OWORD *)(a2 + 0x20);
  *(this + 0x40D) = *(_DWORD *)(a2 + 0x3030);
  v3 = *(const void **)(a2 + 0x3040);
  if ( v3 )
    qmemcpy(this + 1, v3, 0x1008u);
  return result;
}
