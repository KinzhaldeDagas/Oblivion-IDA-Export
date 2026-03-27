int __thiscall sub_8DA800(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  int i; // edi
  int v7; // edx
  int v8; // ecx

  *(this + a2 + 0x43) |= *(this + a3 + 0x43);
  result = *(this + 0x702);
  for ( i = 0; i < result; ++i )
  {
    v7 = *(this + 0x701);
    v8 = *(_DWORD *)(v7 + 8 * i + 4);
    if ( v8 == a2 )
      sub_8DA800(this, *(_DWORD *)(v7 + 8 * i), v8, a4 + 1);
    result = *(this + 0x702);
  }
  return result;
}
