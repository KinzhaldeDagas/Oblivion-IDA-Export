char __thiscall sub_70F030(_DWORD *this, int a2, char a3, int *a4)
{
  char result; // al
  int v6; // ecx

  result = a3; /*0x70f030*/
  *((_BYTE *)this + 1) = a3; /*0x70f042*/
  *(this + 1) = a2; /*0x70f045*/
  *(this + 3) = 0xFFFFFFFF; /*0x70f048*/
  *(this + 4) = 0; /*0x70f04f*/
  *(_BYTE *)this = 1; /*0x70f052*/
  *(this + 2) = 0; /*0x70f055*/
  switch ( a2 ) /*0x70f05e*/
  {
    case 0: /*0x70f05e*/
      if ( a3 == 0x10 ) /*0x70f06c*/
      {
        result = (char)a4; /*0x70f0db*/
        if ( *a4 != 0xF800 || a4[1] != 0x7E0 || a4[2] != 0x1F || a4[3] ) /*0x70f0f6*/
          goto LABEL_19; /*0x70f0f9*/
        qmemcpy(this, &unk_B263E8, 0x44u); /*0x70f105*/
      }
      else
      {
        if ( a3 != 0x18 ) /*0x70f070*/
          goto LABEL_19; /*0x70f070*/
        result = (char)a4; /*0x70f076*/
        if ( *a4 == 0xFF && a4[1] == 0xFF00 && a4[2] == 0xFF0000 && !a4[3] ) /*0x70f097*/
        {
          qmemcpy(this, &unk_B25E48, 0x44u); /*0x70f0a6*/
        }
        else
        {
          if ( *a4 != 0xFF0000 || a4[1] != 0xFF00 || a4[2] != 0xFF || a4[3] ) /*0x70f0c4*/
            goto LABEL_19; /*0x70f0c7*/
          qmemcpy(this, &unk_B26598, 0x44u); /*0x70f0d3*/
        }
      }
      return result; /*0x70f0a6*/
    case 1: /*0x70f05e*/
      if ( a3 == 0x10 ) /*0x70f11d*/
      {
        result = (char)a4; /*0x70f16e*/
        v6 = *a4; /*0x70f172*/
        if ( *a4 == 0x1F && a4[1] == 0x3E0 && a4[2] == 0x7C00 && a4[3] == 0x8000 ) /*0x70f194*/
        {
          qmemcpy(this, &unk_B25E90, 0x44u); /*0x70f1a0*/
          return result; /*0x70f1a0*/
        }
        if ( v6 == 0x7C00 && a4[1] == 0x3E0 && a4[2] == 0x1F && a4[3] == 0x8000 ) /*0x70f1be*/
        {
          qmemcpy(this, &unk_B25ED8, 0x44u); /*0x70f1ca*/
          return result; /*0x70f1ca*/
        }
        if ( v6 == 0xF00 && a4[1] == 0xF0 && a4[2] == 0xF && a4[3] == 0xF000 ) /*0x70f1fc*/
        {
          qmemcpy(this, &unk_B26508, 0x44u); /*0x70f20c*/
          return result; /*0x70f20c*/
        }
LABEL_19:
        *(this + 1) = 0x10; /*0x70f10d*/
        return result; /*0x70f113*/
      }
      if ( a3 != 0x20 ) /*0x70f121*/
        goto LABEL_19; /*0x70f121*/
      result = (char)a4; /*0x70f123*/
      if ( *a4 == 0xFF0000 && a4[1] == 0xFF00 && a4[2] == 0xFF && a4[3] == 0xFF000000 ) /*0x70f148*/
        qmemcpy(this, &unk_B265E0, 0x44u); /*0x70f154*/
      else
        qmemcpy(this, &unk_B25E00, 0x44u); /*0x70f166*/
      return result;
    case 2: /*0x70f05e*/
      if ( a3 != 8 ) /*0x70f216*/
        goto LABEL_52; /*0x70f216*/
      qmemcpy(this, &unk_B25D70, 0x44u); /*0x70f226*/
      return result; /*0x70f226*/
    case 3: /*0x70f05e*/
      if ( a3 != 8 ) /*0x70f230*/
        goto LABEL_52; /*0x70f230*/
      qmemcpy(this, &unk_B25DB8, 0x44u); /*0x70f23c*/
      return result; /*0x70f23c*/
    case 4: /*0x70f05e*/
      qmemcpy(this, &unk_B25FB0, 0x44u); /*0x70f24e*/
      return result; /*0x70f24e*/
    case 5: /*0x70f05e*/
      qmemcpy(this, &unk_B25FF8, 0x44u); /*0x70f260*/
      return result; /*0x70f260*/
    case 6: /*0x70f05e*/
      qmemcpy(this, &unk_B26040, 0x44u); /*0x70f272*/
      return result; /*0x70f272*/
    case 8: /*0x70f05e*/
      qmemcpy(this, &unk_B25F20, 0x44u); /*0x70f284*/
      return result; /*0x70f284*/
    case 9: /*0x70f05e*/
      qmemcpy(this, &unk_B25F68, 0x44u); /*0x70f296*/
      return result; /*0x70f296*/
    default:
LABEL_52:
      *(this + 1) = 0x10; /*0x70f29e*/
      return result; /*0x70f29e*/
  }
}
