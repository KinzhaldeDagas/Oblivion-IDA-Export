char __cdecl sub_568370(int a1, signed int a2)
{
  char v2; // bl
  bool v3; // zf
  char result; // al
  bool v5; // zf

  v2 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      switch ( *(_BYTE *)(a1 + 4) )
      {
        case 0x10:
          switch ( a2 )
          {
            case 0x1A:
              goto LABEL_55;
            case 0x1B:
            case 0x1C:
            case 0x1D:
              if ( a2 == 0x1B )
              {
                if ( !EffectItemList_HasOnTarget(a1 + 0x24) )
                  return v2;
                result = 1;
              }
              else
              {
                if ( a2 != 0x1C )
                {
                  if ( a2 == 0x1D && EffectItemList_HasSelfEffect(a1 + 0x24) )
                    return 1;
                  return v2;
                }
                if ( !EffectItemList_HasTouchEffect((_DWORD *)(a1 + 0x24)) )
                  return v2;
                result = 1;
              }
              break;
            case 0x1E:
            case 0x1F:
            case 0x20:
            case 0x21:
            case 0x22:
            case 0x23:
              switch ( EffectItemList_GetSchoolAV() )
              {
                case 0x14:
                  v3 = a2 == 0x1E;
                  goto LABEL_54;
                case 0x15:
                  v3 = a2 == 0x1F;
                  goto LABEL_54;
                case 0x16:
                  v3 = a2 == 0x20;
                  goto LABEL_54;
                case 0x17:
                  v3 = a2 == 0x21;
                  goto LABEL_54;
                case 0x18:
                  v3 = a2 == 0x22;
                  goto LABEL_54;
                case 0x19:
                  v3 = a2 == 0x23;
                  goto LABEL_54;
                default:
                  return v2;
              }
              return v2;
            default:
              return v2;
          }
          return result;
        case 0x12:
          v3 = a2 == 1;
          goto LABEL_54;
        case 0x13:
          v3 = a2 == 2;
          goto LABEL_54;
        case 0x14:
          v5 = a2 == 3;
          goto LABEL_28;
        case 0x15:
          v3 = a2 == 4;
          goto LABEL_54;
        case 0x16:
          if ( a2 == 5 )
            goto LABEL_55;
          v3 = a2 == 0x16;
          goto LABEL_54;
        case 0x17:
          v3 = a2 == 6;
          goto LABEL_54;
        case 0x18:
          v3 = a2 == 7;
          goto LABEL_54;
        case 0x19:
          if ( a2 == 8 )
            goto LABEL_55;
          if ( a2 != 0x14 || (*(_BYTE *)(a1 + 0x7C) & 2) == 0 )
            return v2;
          return 1;
        case 0x1A:
          v3 = a2 == 9;
          goto LABEL_54;
        case 0x1B:
          v3 = a2 == 0xA;
          goto LABEL_54;
        case 0x1F:
          v3 = a2 == 0xB;
          goto LABEL_54;
        case 0x20:
          v3 = a2 == 0xC;
          goto LABEL_54;
        case 0x21:
          switch ( a2 )
          {
            case 0xD:
            case 0x15:
            case 0x16:
              goto LABEL_55;
            case 0x18:
            case 0x19:
              switch ( *(_BYTE *)(a1 + 0x90) )
              {
                case 0:
                case 1:
                case 2:
                case 3:
                  v3 = a2 == 0x18;
                  goto LABEL_54;
                case 4:
                case 5:
                  v3 = a2 == 0x19;
                  goto LABEL_54;
                default:
                  return v2;
              }
            default:
              return v2;
          }
          return v2;
        case 0x22:
          v5 = a2 == 0xE;
LABEL_28:
          if ( v5 )
            goto LABEL_55;
          if ( a2 <= 0x14 || a2 > 0x16 )
            return v2;
          return 1;
        case 0x23:
          v3 = a2 == 0xF;
          goto LABEL_54;
        case 0x24:
          v3 = a2 == 0x10;
          goto LABEL_54;
        case 0x26:
          v3 = a2 == 0x11;
          goto LABEL_54;
        case 0x27:
          v3 = a2 == 0x12;
LABEL_54:
          if ( v3 )
            goto LABEL_55;
          return v2;
        case 0x28:
          if ( a2 == 0x13 )
          {
LABEL_55:
            v2 = 1;
          }
          else if ( a2 == 0x14 && (unsigned __int8)AlchemyItem_IsEdible(a1) )
          {
            return 1;
          }
          break;
        default:
          return v2;
      }
    }
  }
  return v2;
}
