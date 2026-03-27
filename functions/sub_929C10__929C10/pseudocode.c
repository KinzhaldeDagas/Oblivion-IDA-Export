int __thiscall sub_929C10(unsigned int *this, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  int v5; // ecx
  signed int v6; // eax
  unsigned int v7; // eax
  int v8; // esi
  int v9; // eax
  unsigned int v11; // [esp+14h] [ebp-21Ch]
  _BYTE v12[5]; // [esp+1Bh] [ebp-215h] BYREF
  _BYTE v13[524]; // [esp+20h] [ebp-210h] BYREF

  v3 = a2 >> (0x20 - *(this + 8));
  v4 = a2 & (0xFFFFFFFF >> *(this + 8));
  v5 = 0x30 * v3;
  for ( *(_DWORD *)&v12[1] = 0x30 * v3; ; v5 = *(_DWORD *)&v12[1] )
  {
    v6 = v4 + 1;
    v11 = v6;
    if ( v6 >= *(_DWORD *)(*(this + 9) + v5 + 0x18) )
    {
      v7 = *(this + 0xA);
      ++v3;
      *(_DWORD *)&v12[1] = v5 + 0x30;
      if ( v3 >= v7 )
        return 0xFFFFFFFF;
      v11 = 0;
      v6 = 0;
    }
    v8 = v6 | (v3 << (0x20 - *(this + 8)));
    v9 = (*(int (__thiscall **)(unsigned int *, int, _BYTE *))(*this + 0x28))(this, v8, v13);
    if ( *(_BYTE *)sub_950B10((int)v12, v9 + 0x10, v9 + 0x20, v9 + 0x30, dword_B3060C) == 1 )
      break;
    v4 = v11;
  }
  return v8;
}
