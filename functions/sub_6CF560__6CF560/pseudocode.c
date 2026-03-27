int __thiscall sub_6CF560(char *this, unsigned int a2)
{
  int v3; // ebx
  void *v4; // eax
  void *v5; // esi
  unsigned __int8 v6; // bl
  bool v7; // zf
  char *v8; // esi

  sub_6CD720((NiRenderer *)this, a2);
  v3 = (unsigned __int8)*(this + 0xD);
  v4 = (void *)FormHeapAlloc((0x68 * (unsigned __int64)(unsigned __int8)*(this + 0xD)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x68 * v3);
  v5 = v4;
  if ( v4 )
    sub_401080(v4, 0x68, v3, (void *(__thiscall *)(void *))sub_6C3730);
  else
    v5 = 0;
  v6 = 0;
  v7 = *(this + 0xD) == 0;
  *((_DWORD *)this + 0x14) = v5;
  if ( !v7 )
  {
    do
    {
      v8 = (char *)(*((_DWORD *)this + 0x14) + 0x68 * v6);
      sub_6CB990(v8 + 4, a2);
      sub_6CB990(v8 + 0x24, a2);
      sub_711B90(v8 + 0x44, a2);
      ++v6;
    }
    while ( v6 < (unsigned __int8)*(this + 0xD) );
  }
  return sub_6CB990(this + 0x30, a2);
}
