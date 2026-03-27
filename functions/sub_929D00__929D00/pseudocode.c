int __thiscall sub_929D00(_DWORD *this, unsigned int a2)
{
  int v2; // edi
  unsigned int v3; // edx
  unsigned int v4; // eax
  char v5; // cl
  _DWORD *v6; // eax
  bool v7; // zf
  int v8; // ecx

  v2 = *(this + 9);
  v3 = a2 & (0xFFFFFFFF >> *(this + 8));
  v4 = 0x30 * (a2 >> (0x20 - *(this + 8)));
  v5 = *(_BYTE *)(v4 + v2 + 0x11);
  v6 = (_DWORD *)(v2 + v4);
  v7 = v5 == 1;
  v8 = v6[8];
  if ( v7 )
    return *(_DWORD *)(*(unsigned __int8 *)(v3 * v8 + v6[7]) * v6[0xA] + v6[9]);
  else
    return *(_DWORD *)(*(unsigned __int16 *)(v3 * v8 + v6[7]) * v6[0xA] + v6[9]);
}
