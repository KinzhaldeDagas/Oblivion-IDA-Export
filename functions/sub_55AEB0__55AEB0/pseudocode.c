int __thiscall sub_55AEB0(_DWORD *this, unsigned int a2)
{
  int v2; // eax

  v2 = *(this + 4); /*0x55aeb0*/
  if ( v2 && a2 <= 0xF ) /*0x55aebe*/
    return *(_DWORD *)(v2 + 4 * a2); /*0x55aec0*/
  else
    return 0; /*0x55aec6*/
}
