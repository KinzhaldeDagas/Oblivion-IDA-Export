unsigned int __thiscall sub_936460(unsigned __int8 *this, int a2, int a3, _BYTE *a4)
{
  unsigned __int8 v5; // bl
  unsigned int result; // eax
  _DWORD *v7; // edi

  v5 = *(this + 0x21);
  if ( v5 > 8u )
    return 0xFFFFFFFF;
  v7 = a4;
  if ( *sub_9363E0(this, &a4, a4) )
    return 0xFFFFFFFF;
  result = v5;
  if ( v5 >= 8u )
    return 0xFFFFFFFF;
  *((_DWORD *)this + v5) = *v7;
  ++*(this + 0x21);
  return result;
}
