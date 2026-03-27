int __thiscall sub_7ED600(_DWORD *this)
{
  _DWORD *v1; // ecx
  int result; // eax
  int v3; // edx

  v1 = (_DWORD *)*(this + 0x1C);
  result = 0;
  while ( v1 )
  {
    v3 = v1[2];
    v1 = (_DWORD *)*v1;
    if ( v3 )
    {
      if ( *(_WORD *)(v3 + 0x118) != 0xFF && !*(_BYTE *)(v3 + 0xF4) )
        ++result;
    }
  }
  return result;
}
