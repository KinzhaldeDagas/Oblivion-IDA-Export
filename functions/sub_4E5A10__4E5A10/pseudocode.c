int __thiscall sub_4E5A10(_DWORD *this)
{
  int v2; // ecx
  int result; // eax
  unsigned int v4; // edi

  v2 = *(this + 9);
  result = 0;
  if ( v2 )
  {
    v4 = *(unsigned __int16 *)(v2 + 0xA);
    return *(_DWORD *)(*(_DWORD *)(*(this + 9) + 4) + 4 * (GetRandomLargeInteger_(0) % v4));
  }
  return result;
}
