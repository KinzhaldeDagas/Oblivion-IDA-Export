char __thiscall sub_949070(_DWORD *this, const char *a2)
{
  int v3; // eax
  signed int v4; // ebx
  int v5; // esi
  int v7; // [esp+4h] [ebp-4h]

  v3 = *(this + 3) & 0x3FFFFFFF;
  if ( v3 > *(this + 2) + 0x46 )
  {
    v4 = 0;
    v7 = 0;
    if ( a2 )
    {
      v4 = sub_8B1860(a2) + 1;
      v7 = v4 % 2;
    }
    v5 = sub_948DF0((int)(this + 1), v4 + v7);
    LOBYTE(v3) = v7 + v4;
    *(_BYTE *)v5 = 0x50;
    *(_BYTE *)(v5 + 1) = v7 + v4;
    *(_WORD *)(v5 + 2) = 0;
    *(_WORD *)(v5 + 4) = 0;
    if ( v4 > 0 )
    {
      sub_8B1890((void *)(v5 + 6), a2, v4);
      LOBYTE(v3) = v7;
      if ( v7 )
        *(_BYTE *)(v5 + v4 + 6) = 0;
    }
  }
  return v3;
}
