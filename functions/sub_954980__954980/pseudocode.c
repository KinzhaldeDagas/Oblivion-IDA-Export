int __thiscall sub_954980(_DWORD *this, unsigned int a2)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)*(this + 4);
  if ( a2 < 0x100 )
    return sub_956580(v2, 9, a2);
  if ( a2 >= 0x10000 )
    return sub_9567C0(v2, 0xB, a2);
  return sub_9565E0(v2, 0xA, a2);
}
