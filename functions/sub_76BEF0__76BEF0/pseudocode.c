signed int __cdecl sub_76BEF0(int a1)
{
  signed int result; // eax
  unsigned __int8 v2; // cl
  signed int v3; // edi
  char v4; // al

  result = *(_DWORD *)(a1 + 0xC);
  v2 = *(_BYTE *)(a1 + 1);
  if ( result == 0xFFFFFFFF )
  {
    v3 = 0;
    switch ( *(_DWORD *)(a1 + 4) )
    {
      case 0:
        switch ( v2 )
        {
          case 8u:
            if ( sub_700B60((char *)a1, 0) == 0xE0 )
            {
              v3 = 0x1B;
              goto LABEL_6;
            }
            if ( sub_700B60((char *)a1, 0) )
              goto LABEL_6;
            return 0x32;
          case 0x10u:
            if ( sub_700B60((char *)a1, 0) == 0xF800 )
              return 0x17;
            if ( sub_700B60((char *)a1, 0) == 0x7C00 )
              return 0x18;
            if ( sub_700B60((char *)a1, 0) == 0xF00 )
              return 0x1E;
            if ( sub_700B60((char *)a1, 0) )
              goto LABEL_6;
            return 0x51;
          case 0x18u:
            return 0x14;
          case 0x20u:
            if ( sub_700B60((char *)a1, 0) == 0xFF0000 )
              return 0x16;
            if ( sub_700B60((char *)a1, 0) == 0xFF )
              return 0x21;
            if ( sub_700B60((char *)a1, 0) != 0xFFFF0000 )
              goto LABEL_6;
            result = 0x22;
            break;
          default:
            goto LABEL_25;
        }
        break;
      case 1:
        switch ( v2 )
        {
          case 8u:
            if ( !sub_700B60((char *)a1, 9) )
              return 0x1C;
            if ( sub_700B60((char *)a1, 9) != 0xF )
              goto LABEL_6;
            return 0x34;
          case 0x10u:
            if ( sub_700B60((char *)a1, 0) == 0x7C00 )
              return 0x19;
            if ( sub_700B60((char *)a1, 0) == 0xF00 )
              return 0x1A;
            if ( sub_700B60((char *)a1, 0) == 0xE0 )
              return 0x1D;
            if ( !sub_700B60((char *)a1, 0) )
              goto LABEL_38;
            goto LABEL_6;
          case 0x20u:
            if ( sub_700B60((char *)a1, 0) == 0xFF0000 )
              goto LABEL_71;
            if ( sub_700B60((char *)a1, 0) == 0x3FF )
              return 0x1F;
            if ( sub_700B60((char *)a1, 0) == 0xFF )
              return 0x20;
            if ( sub_700B60((char *)a1, 0) != 0x3FF00000 )
              goto LABEL_6;
            result = 0x23;
            break;
          case 0x40u:
            goto LABEL_46;
          case 0x80u:
            goto LABEL_70;
          default:
            goto LABEL_25;
        }
        break;
      case 2:
        result = 0x29;
        break;
      case 3:
      case 0xA:
      case 0xD:
LABEL_25:
        result = 0;
        break;
      case 4:
        result = 0x31545844;
        break;
      case 5:
        result = 0x33545844;
        break;
      case 6:
        result = 0x35545844;
        break;
      case 8:
        result = 0x3C;
        break;
      case 9:
        if ( v2 == 0x10 )
        {
          result = 0x3D;
        }
        else
        {
          if ( v2 != 0x20 )
            goto LABEL_6;
          result = 0x3E;
        }
        break;
      case 0xB:
        switch ( v2 )
        {
          case 8u:
            result = sub_700B60((char *)a1, 3) != 0 ? 0x1C : 0x32;
            break;
          case 0x10u:
            result = 0x6F;
            break;
          case 0x20u:
            result = 0x72;
            break;
          default:
            goto LABEL_6;
        }
        break;
      case 0xC:
        switch ( v2 )
        {
          case 0x10u:
LABEL_38:
            result = 0x33;
            break;
          case 0x20u:
            result = 0x70;
            break;
          case 0x40u:
            result = 0x73;
            break;
          default:
            goto LABEL_6;
        }
        break;
      case 0xE:
        switch ( v2 )
        {
          case 0x20u:
LABEL_71:
            result = 0x15;
            break;
          case 0x40u:
LABEL_46:
            result = 0x71;
            break;
          case 0x80u:
LABEL_70:
            result = 0x74;
            break;
          default:
            goto LABEL_6;
        }
        break;
      case 0xF:
        if ( v2 == 0x10 )
        {
          result = sub_71B4A0((char *)a1, 0x12) != 1 ? 0x50 : 0x49;
        }
        else
        {
          if ( v2 != 0x20 )
            goto LABEL_6;
          v4 = sub_71B4A0((char *)a1, 0x12);
          if ( v4 == 4 )
          {
            result = 0x4F;
          }
          else if ( v4 == 8 )
          {
            result = 0x4B;
          }
          else
          {
            result = sub_71B4A0((char *)a1, 0x11) != 0x18 ? 0x47 : 0x4D;
          }
        }
        break;
      default:
LABEL_6:
        result = v3;
        break;
    }
  }
  return result;
}
