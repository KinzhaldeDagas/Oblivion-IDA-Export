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

  v3 = *(this + 0x12); /*0x5be5c9*/
  v4 = *(this + 0x17); /*0x5be5cc*/
  if ( arg0 ) /*0x5be5d0*/
  {
    v7 = *(this + 0x1C); /*0x5be5e6*/
    *(this + 0x1C) = v4; /*0x5be5e9*/
    v8 = *(this + 0xD); /*0x5be5ec*/
    *(this + 0x17) = v3; /*0x5be5ef*/
    *(this + 0x12) = v8; /*0x5be5f2*/
    *(this + 0xD) = v7; /*0x5be5f5*/
  }
  else
  {
    v5 = *(this + 0xD); /*0x5be5d2*/
    *(this + 0xD) = v3; /*0x5be5d5*/
    v6 = *(this + 0x1C); /*0x5be5d8*/
    *(this + 0x12) = v4; /*0x5be5db*/
    *(this + 0x17) = v6; /*0x5be5de*/
    *(this + 0x1C) = v5; /*0x5be5e1*/
  }
  v9 = this + 0xC; /*0x5be5f8*/
  v10 = 4; /*0x5be5fb*/
  do /*0x5be682*/
  {
    switch ( v9[1] ) /*0x5be612*/
    {
      case 0x19: /*0x5be612*/
        v11 = (double)(*v9 + 1); /*0x5be622*/
        v12 = (Tile *)*(this + 0x26); /*0x5be627*/
        goto LABEL_10; /*0x5be62d*/
      case 0x32: /*0x5be612*/
        v11 = (double)(*v9 + 1); /*0x5be638*/
        v12 = (Tile *)*(this + 0x27); /*0x5be63d*/
        goto LABEL_10; /*0x5be643*/
      case 0x4B: /*0x5be612*/
        v11 = (double)(*v9 + 1); /*0x5be64e*/
        v12 = (Tile *)*(this + 0x28); /*0x5be653*/
        goto LABEL_10; /*0x5be659*/
      case 0x64: /*0x5be612*/
        v11 = (double)(*v9 + 1); /*0x5be664*/
        v12 = (Tile *)*(this + 0x29); /*0x5be669*/
LABEL_10:
        a2 = v11; /*0x5be66f*/
        Tile_SetFloat(v12, 0xFAEu, a2); /*0x5be677*/
        break; /*0x5be677*/
      default:
        break;
    }
    v9 += 5; /*0x5be67c*/
    --v10; /*0x5be67f*/
  }
  while ( v10 ); /*0x5be682*/
}
