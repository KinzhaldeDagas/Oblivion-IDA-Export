char __thiscall sub_70F030(_DWORD *this, int a2, char a3, int *a4)
{
  char result; // al
  int v6; // ecx

  result = a3;
  *((_BYTE *)this + 1) = a3;
  *(this + 1) = a2;
  *(this + 3) = 0xFFFFFFFF;
  *(this + 4) = 0;
  *(_BYTE *)this = 1;
  *(this + 2) = 0;
  switch ( a2 )
  {
    case 0:
      if ( a3 == 0x10 )
      {
        result = (char)a4;
        if ( *a4 != 0xF800 || a4[1] != 0x7E0 || a4[2] != 0x1F || a4[3] )
          goto LABEL_19;
        qmemcpy(this, &unk_B263E8, 0x44u);
      }
      else
      {
        if ( a3 != 0x18 )
          goto LABEL_19;
        result = (char)a4;
        if ( *a4 == 0xFF && a4[1] == 0xFF00 && a4[2] == 0xFF0000 && !a4[3] )
        {
          qmemcpy(this, &unk_B25E48, 0x44u);
        }
        else
        {
          if ( *a4 != 0xFF0000 || a4[1] != 0xFF00 || a4[2] != 0xFF || a4[3] )
            goto LABEL_19;
          qmemcpy(this, &unk_B26598, 0x44u);
        }
      }
      return result;
    case 1:
      if ( a3 == 0x10 )
      {
        result = (char)a4;
        v6 = *a4;
        if ( *a4 == 0x1F && a4[1] == 0x3E0 && a4[2] == 0x7C00 && a4[3] == 0x8000 )
        {
          qmemcpy(this, &unk_B25E90, 0x44u);
          return result;
        }
        if ( v6 == 0x7C00 && a4[1] == 0x3E0 && a4[2] == 0x1F && a4[3] == 0x8000 )
        {
          qmemcpy(this, &unk_B25ED8, 0x44u);
          return result;
        }
        if ( v6 == 0xF00 && a4[1] == 0xF0 && a4[2] == 0xF && a4[3] == 0xF000 )
        {
          qmemcpy(this, &unk_B26508, 0x44u);
          return result;
        }
LABEL_19:
        *(this + 1) = 0x10;
        return result;
      }
      if ( a3 != 0x20 )
        goto LABEL_19;
      result = (char)a4;
      if ( *a4 == 0xFF0000 && a4[1] == 0xFF00 && a4[2] == 0xFF && a4[3] == 0xFF000000 )
        qmemcpy(this, &unk_B265E0, 0x44u);
      else
        qmemcpy(this, &unk_B25E00, 0x44u);
      return result;
    case 2:
      if ( a3 != 8 )
        goto LABEL_52;
      qmemcpy(this, &unk_B25D70, 0x44u);
      return result;
    case 3:
      if ( a3 != 8 )
        goto LABEL_52;
      qmemcpy(this, &unk_B25DB8, 0x44u);
      return result;
    case 4:
      qmemcpy(this, &unk_B25FB0, 0x44u);
      return result;
    case 5:
      qmemcpy(this, &unk_B25FF8, 0x44u);
      return result;
    case 6:
      qmemcpy(this, &unk_B26040, 0x44u);
      return result;
    case 8:
      qmemcpy(this, &unk_B25F20, 0x44u);
      return result;
    case 9:
      qmemcpy(this, &unk_B25F68, 0x44u);
      return result;
    default:
LABEL_52:
      *(this + 1) = 0x10;
      return result;
  }
}
