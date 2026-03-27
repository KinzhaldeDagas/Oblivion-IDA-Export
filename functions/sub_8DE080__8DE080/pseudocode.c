int __thiscall sub_8DE080(const void **this, int a2)
{
  _DWORD *v3; // esi

  v3 = this + 0x17;
  if ( *(this + 0x18) == (const void *)((unsigned int)*(this + 0x19) & 0x3FFFFFFF) )
    sub_8A6EE0(this + 0x17, 4);
  *(_DWORD *)(*v3 + 4 * (_DWORD)*(this + 0x18)) = a2;
  *(this + 0x18) = (char *)*(this + 0x18) + 1;
  *(_DWORD *)(a2 + 0xC) = this;
  return a2;
}
