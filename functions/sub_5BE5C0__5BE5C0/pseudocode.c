void __thiscall sub_5BE5C0(_DWORD *this, char arg0)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  _DWORD *v9; // edi
  int v10; // ebx
  double v11; // st7
  Tile *v12; // ecx
  float a2; // [esp+0h] [ebp-10h]

  v3 = *(this + 0x12);
  v4 = *(this + 0x17);
  if ( arg0 )
  {
    v7 = *(this + 0x1C);
    *(this + 0x1C) = v4;
    v8 = *(this + 0xD);
    *(this + 0x17) = v3;
    *(this + 0x12) = v8;
    *(this + 0xD) = v7;
  }
  else
  {
    v5 = *(this + 0xD);
    *(this + 0xD) = v3;
    v6 = *(this + 0x1C);
    *(this + 0x12) = v4;
    *(this + 0x17) = v6;
    *(this + 0x1C) = v5;
  }
  v9 = this + 0xC;
  v10 = 4;
  do
  {
    switch ( v9[1] )
    {
      case 0x19:
        v11 = (double)(*v9 + 1);
        v12 = (Tile *)*(this + 0x26);
        goto LABEL_10;
      case 0x32:
        v11 = (double)(*v9 + 1);
        v12 = (Tile *)*(this + 0x27);
        goto LABEL_10;
      case 0x4B:
        v11 = (double)(*v9 + 1);
        v12 = (Tile *)*(this + 0x28);
        goto LABEL_10;
      case 0x64:
        v11 = (double)(*v9 + 1);
        v12 = (Tile *)*(this + 0x29);
LABEL_10:
        a2 = v11;
        Tile_SetFloat(v12, (_DWORD *)0xFAE, a2);
        break;
      default:
        break;
    }
    v9 += 5;
    --v10;
  }
  while ( v10 );
}
