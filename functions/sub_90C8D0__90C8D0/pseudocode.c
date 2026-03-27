_DWORD *__thiscall sub_90C8D0(_WORD *this, int a2)
{
  int v3; // edx
  int v4; // edi
  _DWORD *v5; // ecx
  int v6; // eax
  bool v7; // zf
  int v8; // ebp
  int v9; // ebp

  sub_929DD0(this, a2);
  *(_DWORD *)this = &off_A9C4D4;
  if ( a2 )
  {
    v3 = 0;
    if ( *((int *)this + 0xA) > 0 )
    {
      v4 = 0;
      do
      {
        v5 = *(_DWORD **)(*((_DWORD *)this + 0x10) + 4 * v3);
        v6 = v4 + *((_DWORD *)this + 9);
        v7 = *(_BYTE *)(v6 + 0x10) == 1;
        *(_DWORD *)v6 = *v5;
        if ( v7 )
          v8 = v5[3];
        else
          v8 = v5[6];
        v7 = *(_BYTE *)(v6 + 0x11) == 1;
        *(_DWORD *)(v6 + 0xC) = v8;
        if ( v7 )
          v9 = v5[9];
        else
          v9 = v5[0xF];
        *(_DWORD *)(v6 + 0x1C) = v9;
        *(_DWORD *)(v6 + 0x24) = v5[0xC];
        ++v3;
        v4 += 0x30;
      }
      while ( v3 < *((_DWORD *)this + 0xA) );
    }
  }
  return this;
}
