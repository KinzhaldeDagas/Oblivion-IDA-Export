unsigned int __thiscall sub_6D1C80(_DWORD *this, int a2, int a3)
{
  unsigned int result; // eax
  unsigned int i; // esi

  sub_6ECB60(a2, a3);
  *(_DWORD *)(a2 + 0x54) = *(this + 0x15);
  result = *((unsigned __int16 *)this + 0x25);
  for ( i = 0; i < result; ++i )
  {
    sub_6D1BC0((unsigned __int16 *)a2, *(_DWORD *)(*(this + 0x11) + 4 * i), i);
    result = *((unsigned __int16 *)this + 0x25);
  }
  return result;
}
