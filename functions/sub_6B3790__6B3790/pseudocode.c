char __thiscall sub_6B3790(_DWORD *this)
{
  unsigned int v3; // eax
  char v4; // dl
  int v5; // eax
  int v6; // eax
  int v7; // eax
  bool v8; // zf
  int v9; // edi
  int v10; // ecx
  char v11; // al
  int i; // edi
  int v13; // edx
  int v14; // ecx
  int v15; // eax

  if ( !sub_6B3200(this) )
    return def_6B37E0();
  v3 = ++*(this + 4);
  if ( v3 > *(this + 3) )
    goto LABEL_32;
  v4 = *(_BYTE *)(v3 + *(this + 2));
  *(this + 4) = v3 + 1;
  *(_DWORD *)*(this + 1) = v4 != (char)0xFFFFFFFB;
  switch ( *(unsigned __int8 *)(*(this + 4) + *(this + 2)) >> 4 )
  {
    case 1:
      *(_BYTE *)(*(this + 1) + 4) = 0x20;
      goto LABEL_10;
    case 2:
      *(_BYTE *)(*(this + 1) + 4) = 0x28;
      goto LABEL_10;
    case 3:
      *(_BYTE *)(*(this + 1) + 4) = 0x30;
      goto LABEL_10;
    case 4:
      *(_BYTE *)(*(this + 1) + 4) = 0x38;
      goto LABEL_10;
    case 5:
      *(_BYTE *)(*(this + 1) + 4) = 0x40;
LABEL_10:
      v5 = (*(unsigned __int8 *)(*(this + 4) + *(this + 2)) >> 2) & 3;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
          {
            *(_DWORD *)(*(this + 1) + 8) = 0x7D00;
            goto LABEL_16;
          }
LABEL_32:
          JUMPOUT(0x6B379C);
        }
        *(_DWORD *)(*(this + 1) + 8) = 0xBB80;
      }
      else
      {
        *(_DWORD *)(*(this + 1) + 8) = 0xAC44;
      }
LABEL_16:
      v7 = *(this + 4);
      v8 = (*(_BYTE *)(v7 + *(this + 2)) & 2) == 0;
      *(this + 4) = v7 + 1;
      v9 = !v8;
      *(_DWORD *)(*(this + 1) + 0xC) = v9
                                     + 0x23280
                                     * (unsigned int)*(unsigned __int8 *)(*(this + 1) + 4)
                                     / *(_DWORD *)(*(this + 1) + 8);
      *(_DWORD *)(*(this + 1) + 0x10) = *(_DWORD *)(*(this + 1) + 0xC) - 0x15;
      v10 = *(this + 4);
      v11 = *(_BYTE *)(v10 + *(this + 2)) & 0xC0;
      *(this + 4) = v10 + 1;
      if ( v11 != (char)0xC0 )
        return 0;
      *(_DWORD *)(*(this + 1) + 0x14) = sub_6B3240(this, 9);
      *(_DWORD *)(*(this + 1) + 0x18) = sub_6B3240(this, 5);
      *(_DWORD *)(*(this + 1) + 0x1C) = sub_6B3240(this, 1);
      *(_DWORD *)(*(this + 1) + 0x20) = sub_6B3240(this, 1);
      *(_DWORD *)(*(this + 1) + 0x24) = sub_6B3240(this, 1);
      *(_DWORD *)(*(this + 1) + 0x28) = sub_6B3240(this, 1);
      for ( i = 0; i < 0x90; i += 0x48 )
      {
        *(_DWORD *)(i + *(this + 1) + 0x2C) = sub_6B3240(this, 0xC);
        *(_DWORD *)(i + *(this + 1) + 0x30) = sub_6B3240(this, 9);
        *(_DWORD *)(i + *(this + 1) + 0x34) = sub_6B3240(this, 8);
        *(_DWORD *)(i + *(this + 1) + 0x38) = sub_6B3240(this, 4);
        *(_DWORD *)(i + *(this + 1) + 0x3C) = sub_6B3240(this, 1);
        if ( *(_DWORD *)(i + *(this + 1) + 0x3C) )
        {
          *(_DWORD *)(i + *(this + 1) + 0x40) = sub_6B3240(this, 2);
          *(_DWORD *)(i + *(this + 1) + 0x44) = sub_6B3240(this, 1);
          *(_DWORD *)(i + *(this + 1) + 0x48) = sub_6B3240(this, 5);
          *(_DWORD *)(i + *(this + 1) + 0x4C) = sub_6B3240(this, 5);
          *(_DWORD *)(i + *(this + 1) + 0x54) = sub_6B3240(this, 3);
          *(_DWORD *)(i + *(this + 1) + 0x58) = sub_6B3240(this, 3);
          *(_DWORD *)(i + *(this + 1) + 0x5C) = sub_6B3240(this, 3);
          v13 = *(this + 1);
          v14 = *(_DWORD *)(i + v13 + 0x40);
          v15 = i + v13;
          if ( !v14 )
            return 0;
          if ( v14 != 2 || *(_DWORD *)(v15 + 0x44) )
            *(_DWORD *)(v15 + 0x60) = 7;
          else
            *(_DWORD *)(v15 + 0x60) = 8;
          *(_DWORD *)(i + *(this + 1) + 0x64) = 0x14 - *(_DWORD *)(i + *(this + 1) + 0x60);
        }
        else
        {
          *(_DWORD *)(i + *(this + 1) + 0x48) = sub_6B3240(this, 5);
          *(_DWORD *)(i + *(this + 1) + 0x4C) = sub_6B3240(this, 5);
          *(_DWORD *)(i + *(this + 1) + 0x50) = sub_6B3240(this, 5);
          *(_DWORD *)(i + *(this + 1) + 0x60) = sub_6B3240(this, 4);
          *(_DWORD *)(i + *(this + 1) + 0x64) = sub_6B3240(this, 3);
          *(_DWORD *)(i + *(this + 1) + 0x40) = 0;
        }
        *(_DWORD *)(i + *(this + 1) + 0x68) = sub_6B3240(this, 1);
        *(_DWORD *)(i + *(this + 1) + 0x6C) = sub_6B3240(this, 1);
        *(_DWORD *)(i + *(this + 1) + 0x70) = sub_6B3240(this, 1);
      }
      return 1;
    default:
      goto LABEL_32;
  }
}
