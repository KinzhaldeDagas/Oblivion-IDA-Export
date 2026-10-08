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

  if ( !sub_6B3200(this) ) /*0x6b3793*/
    return def_6B37E0(); /*0x6b379b*/
  v3 = ++*(this + 4); /*0x6b37a4*/
  if ( v3 > *(this + 3) ) /*0x6b37aa*/
    goto LABEL_32; /*0x6b37aa*/
  v4 = *(_BYTE *)(v3 + *(this + 2)); /*0x6b37af*/
  *(this + 4) = v3 + 1; /*0x6b37b8*/
  *(_DWORD *)*(this + 1) = v4 != (char)0xFFFFFFFB; /*0x6b37c9*/
  switch ( *(unsigned __int8 *)(*(this + 4) + *(this + 2)) >> 4 ) /*0x6b37e0*/
  {
    case 1: /*0x6b37e0*/
      *(_BYTE *)(*(this + 1) + 4) = 0x20; /*0x6b380e*/
      goto LABEL_10; /*0x6b380e*/
    case 2: /*0x6b37e0*/
      *(_BYTE *)(*(this + 1) + 4) = 0x28; /*0x6b3805*/
      goto LABEL_10; /*0x6b3809*/
    case 3: /*0x6b37e0*/
      *(_BYTE *)(*(this + 1) + 4) = 0x30; /*0x6b37fc*/
      goto LABEL_10; /*0x6b3800*/
    case 4: /*0x6b37e0*/
      *(_BYTE *)(*(this + 1) + 4) = 0x38; /*0x6b37f3*/
      goto LABEL_10; /*0x6b37f7*/
    case 5: /*0x6b37e0*/
      *(_BYTE *)(*(this + 1) + 4) = 0x40; /*0x6b37ea*/
LABEL_10:
      v5 = (*(unsigned __int8 *)(*(this + 4) + *(this + 2)) >> 2) & 3; /*0x6b3812*/
      if ( v5 ) /*0x6b3825*/
      {
        v6 = v5 - 1; /*0x6b3827*/
        if ( v6 ) /*0x6b382a*/
        {
          if ( v6 == 1 ) /*0x6b382f*/
          {
            *(_DWORD *)(*(this + 1) + 8) = 0x7D00; /*0x6b3838*/
            goto LABEL_16; /*0x6b383f*/
          }
LABEL_32:
          JUMPOUT(0x6B379C); /*0x6b379c*/
        }
        *(_DWORD *)(*(this + 1) + 8) = 0xBB80; /*0x6b3844*/
      }
      else
      {
        *(_DWORD *)(*(this + 1) + 8) = 0xAC44; /*0x6b3850*/
      }
LABEL_16:
      v7 = *(this + 4); /*0x6b3857*/
      v8 = (*(_BYTE *)(v7 + *(this + 2)) & 2) == 0; /*0x6b385d*/
      *(this + 4) = v7 + 1; /*0x6b3865*/
      v9 = !v8; /*0x6b3871*/
      *(_DWORD *)(*(this + 1) + 0xC) = v9 /*0x6b3887*/
                                     + 0x23280
                                     * (unsigned int)*(unsigned __int8 *)(*(this + 1) + 4)
                                     / *(_DWORD *)(*(this + 1) + 8);
      *(_DWORD *)(*(this + 1) + 0x10) = *(_DWORD *)(*(this + 1) + 0xC) - 0x15; /*0x6b3893*/
      v10 = *(this + 4); /*0x6b3896*/
      v11 = *(_BYTE *)(v10 + *(this + 2)) & 0xC0; /*0x6b38a2*/
      *(this + 4) = v10 + 1; /*0x6b38a6*/
      if ( v11 != (char)0xC0 ) /*0x6b38a9*/
        return 0; /*0x6b3aba*/
      *(_DWORD *)(*(this + 1) + 0x14) = sub_6B3240(this, 9); /*0x6b38bb*/
      *(_DWORD *)(*(this + 1) + 0x18) = sub_6B3240(this, 5); /*0x6b38ce*/
      *(_DWORD *)(*(this + 1) + 0x1C) = sub_6B3240(this, 1); /*0x6b38d9*/
      *(_DWORD *)(*(this + 1) + 0x20) = sub_6B3240(this, 1); /*0x6b38ec*/
      *(_DWORD *)(*(this + 1) + 0x24) = sub_6B3240(this, 1); /*0x6b38f7*/
      *(_DWORD *)(*(this + 1) + 0x28) = sub_6B3240(this, 1); /*0x6b3906*/
      for ( i = 0; i < 0x90; i += 0x48 ) /*0x6b3909*/
      {
        *(_DWORD *)(i + *(this + 1) + 0x2C) = sub_6B3240(this, 0xC); /*0x6b391c*/
        *(_DWORD *)(i + *(this + 1) + 0x30) = sub_6B3240(this, 9); /*0x6b3930*/
        *(_DWORD *)(i + *(this + 1) + 0x34) = sub_6B3240(this, 8); /*0x6b393c*/
        *(_DWORD *)(i + *(this + 1) + 0x38) = sub_6B3240(this, 4); /*0x6b3950*/
        *(_DWORD *)(i + *(this + 1) + 0x3C) = sub_6B3240(this, 1); /*0x6b395c*/
        if ( *(_DWORD *)(i + *(this + 1) + 0x3C) ) /*0x6b3963*/
        {
          *(_DWORD *)(i + *(this + 1) + 0x40) = sub_6B3240(this, 2); /*0x6b397a*/
          *(_DWORD *)(i + *(this + 1) + 0x44) = sub_6B3240(this, 1); /*0x6b398e*/
          *(_DWORD *)(i + *(this + 1) + 0x48) = sub_6B3240(this, 5); /*0x6b399a*/
          *(_DWORD *)(i + *(this + 1) + 0x4C) = sub_6B3240(this, 5); /*0x6b39ae*/
          *(_DWORD *)(i + *(this + 1) + 0x54) = sub_6B3240(this, 3); /*0x6b39ba*/
          *(_DWORD *)(i + *(this + 1) + 0x58) = sub_6B3240(this, 3); /*0x6b39ce*/
          *(_DWORD *)(i + *(this + 1) + 0x5C) = sub_6B3240(this, 3); /*0x6b39da*/
          v13 = *(this + 1); /*0x6b39de*/
          v14 = *(_DWORD *)(i + v13 + 0x40); /*0x6b39e1*/
          v15 = i + v13; /*0x6b39e7*/
          if ( !v14 ) /*0x6b39ea*/
            return 0; /*0x6b39ea*/
          if ( v14 != 2 || *(_DWORD *)(v15 + 0x44) ) /*0x6b39f5*/
            *(_DWORD *)(v15 + 0x60) = 7; /*0x6b3a04*/
          else
            *(_DWORD *)(v15 + 0x60) = 8; /*0x6b39fb*/
          *(_DWORD *)(i + *(this + 1) + 0x64) = 0x14 - *(_DWORD *)(i + *(this + 1) + 0x60); /*0x6b3a18*/
        }
        else
        {
          *(_DWORD *)(i + *(this + 1) + 0x48) = sub_6B3240(this, 5); /*0x6b3a2b*/
          *(_DWORD *)(i + *(this + 1) + 0x4C) = sub_6B3240(this, 5); /*0x6b3a37*/
          *(_DWORD *)(i + *(this + 1) + 0x50) = sub_6B3240(this, 5); /*0x6b3a4b*/
          *(_DWORD *)(i + *(this + 1) + 0x60) = sub_6B3240(this, 4); /*0x6b3a57*/
          *(_DWORD *)(i + *(this + 1) + 0x64) = sub_6B3240(this, 3); /*0x6b3a67*/
          *(_DWORD *)(i + *(this + 1) + 0x40) = 0; /*0x6b3a6e*/
        }
        *(_DWORD *)(i + *(this + 1) + 0x68) = sub_6B3240(this, 1); /*0x6b3a82*/
        *(_DWORD *)(i + *(this + 1) + 0x6C) = sub_6B3240(this, 1); /*0x6b3a96*/
        *(_DWORD *)(i + *(this + 1) + 0x70) = sub_6B3240(this, 1); /*0x6b3aa2*/
      }
      return 1;
    default:
      goto LABEL_32;
  }
}
