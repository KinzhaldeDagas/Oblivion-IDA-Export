char __cdecl sub_568370(int a1, signed int a2)
{
  char v2; // bl
  bool v3; // zf
  char result; // al
  bool v5; // zf
  char v6; // al

  v2 = 0; /*0x568375*/
  if ( a1 ) /*0x568379*/
  {
    if ( a2 ) /*0x568386*/
    {
      switch ( *(_BYTE *)(a1 + 4) ) /*0x56839c*/
      {
        case 0x10: /*0x56839c*/
          switch ( a2 ) /*0x5684e0*/
          {
            case 0x1A: /*0x5684e0*/
              goto LABEL_55;
            case 0x1B: /*0x5684e0*/
            case 0x1C: /*0x5684e0*/
            case 0x1D: /*0x5684e0*/
              if ( a2 == 0x1B ) /*0x5684ea*/
              {
                if ( !EffectItemList_HasOnTarget(a1 + 0x24) ) /*0x568526*/
                  return v2; /*0x568526*/
                result = 1; /*0x56852b*/
              }
              else
              {
                if ( a2 != 0x1C ) /*0x5684ef*/
                {
                  if ( a2 == 0x1D && EffectItemList_HasSelfEffect(a1 + 0x24) ) /*0x5684f9*/
                    return 1; /*0x568508*/
                  return v2; /*0x568500*/
                }
                EffectItemList_HasTouchEffect((_DWORD *)(a1 + 0x24)); /*0x56850c*/
                if ( !v6 ) /*0x568513*/
                  return v2; /*0x568513*/
                result = 1; /*0x568518*/
              }
              break; /*0x56851b*/
            case 0x1E: /*0x5684e0*/
            case 0x1F: /*0x5684e0*/
            case 0x20: /*0x5684e0*/
            case 0x21: /*0x5684e0*/
            case 0x22: /*0x5684e0*/
            case 0x23: /*0x5684e0*/
              switch ( EffectItemList_GetSchoolAV() ) /*0x56853f*/
              {
                case 0x14: /*0x56853f*/
                  v3 = a2 == 0x1E; /*0x568546*/
                  goto LABEL_54; /*0x568549*/
                case 0x15: /*0x56853f*/
                  v3 = a2 == 0x1F; /*0x56854b*/
                  goto LABEL_54; /*0x56854e*/
                case 0x16: /*0x56853f*/
                  v3 = a2 == 0x20; /*0x568550*/
                  goto LABEL_54; /*0x568553*/
                case 0x17: /*0x56853f*/
                  v3 = a2 == 0x21; /*0x568555*/
                  goto LABEL_54; /*0x568558*/
                case 0x18: /*0x56853f*/
                  v3 = a2 == 0x22; /*0x56855a*/
                  goto LABEL_54; /*0x56855d*/
                case 0x19: /*0x56853f*/
                  v3 = a2 == 0x23; /*0x56855f*/
                  goto LABEL_54; /*0x56855f*/
                default:
                  return v2;
              }
              return v2;
            default:
              return v2;
          }
          return result; /*0x56851b*/
        case 0x12: /*0x56839c*/
          v3 = a2 == 1; /*0x5683a3*/
          goto LABEL_54; /*0x5683a6*/
        case 0x13: /*0x56839c*/
          v3 = a2 == 2; /*0x5683ab*/
          goto LABEL_54; /*0x5683ae*/
        case 0x14: /*0x56839c*/
          v5 = a2 == 3; /*0x568465*/
          goto LABEL_28; /*0x568465*/
        case 0x15: /*0x56839c*/
          v3 = a2 == 4; /*0x5683b3*/
          goto LABEL_54; /*0x5683b6*/
        case 0x16: /*0x56839c*/
          if ( a2 == 5 ) /*0x568457*/
            goto LABEL_55; /*0x568457*/
          v3 = a2 == 0x16; /*0x56845d*/
          goto LABEL_54; /*0x568460*/
        case 0x17: /*0x56839c*/
          v3 = a2 == 6; /*0x5683bb*/
          goto LABEL_54; /*0x5683be*/
        case 0x18: /*0x56839c*/
          v3 = a2 == 7; /*0x5683c3*/
          goto LABEL_54; /*0x5683c6*/
        case 0x19: /*0x56839c*/
          if ( a2 == 8 ) /*0x568434*/
            goto LABEL_55; /*0x568434*/
          if ( a2 != 0x14 || (*(_BYTE *)(a1 + 0x7C) & 2) == 0 ) /*0x568447*/
            return v2; /*0x568447*/
          return 1; /*0x568453*/
        case 0x1A: /*0x56839c*/
          v3 = a2 == 9; /*0x5683cb*/
          goto LABEL_54; /*0x5683ce*/
        case 0x1B: /*0x56839c*/
          v3 = a2 == 0xA; /*0x5683d3*/
          goto LABEL_54; /*0x5683d6*/
        case 0x1F: /*0x56839c*/
          v3 = a2 == 0xB; /*0x5683db*/
          goto LABEL_54; /*0x5683de*/
        case 0x20: /*0x56839c*/
          v3 = a2 == 0xC; /*0x5683e3*/
          goto LABEL_54; /*0x5683e6*/
        case 0x21: /*0x56839c*/
          switch ( a2 ) /*0x56849a*/
          {
            case 0xD: /*0x56849a*/
            case 0x15: /*0x56849a*/
            case 0x16: /*0x56849a*/
              goto LABEL_55;
            case 0x18: /*0x56849a*/
            case 0x19: /*0x56849a*/
              switch ( *(_BYTE *)(a1 + 0x90) ) /*0x5684b1*/
              {
                case 0: /*0x5684b1*/
                case 1: /*0x5684b1*/
                case 2: /*0x5684b1*/
                case 3: /*0x5684b1*/
                  v3 = a2 == 0x18; /*0x5684b8*/
                  goto LABEL_54; /*0x5684bb*/
                case 4: /*0x5684b1*/
                case 5: /*0x5684b1*/
                  v3 = a2 == 0x19; /*0x5684c0*/
                  goto LABEL_54; /*0x5684c3*/
                default:
                  return v2;
              }
            default:
              return v2;
          }
          return v2;
        case 0x22: /*0x56839c*/
          v5 = a2 == 0xE; /*0x5684c8*/
LABEL_28:
          if ( v5 ) /*0x568468*/
            goto LABEL_55; /*0x568468*/
          if ( a2 <= 0x14 || a2 > 0x16 ) /*0x56847a*/
            return v2; /*0x56847a*/
          return 1; /*0x568486*/
        case 0x23: /*0x56839c*/
          v3 = a2 == 0xF; /*0x5683eb*/
          goto LABEL_54; /*0x5683ee*/
        case 0x24: /*0x56839c*/
          v3 = a2 == 0x10; /*0x5683f3*/
          goto LABEL_54; /*0x5683f6*/
        case 0x26: /*0x56839c*/
          v3 = a2 == 0x11; /*0x5683fb*/
          goto LABEL_54; /*0x5683fe*/
        case 0x27: /*0x56839c*/
          v3 = a2 == 0x12; /*0x568403*/
LABEL_54:
          if ( v3 ) /*0x568562*/
            goto LABEL_55; /*0x568562*/
          return v2; /*0x568562*/
        case 0x28: /*0x56839c*/
          if ( a2 == 0x13 ) /*0x56840e*/
          {
LABEL_55:
            v2 = 1; /*0x568564*/
          }
          else if ( a2 == 0x14 && (unsigned __int8)AlchemyItem_IsEdible(a1) ) /*0x56841d*/
          {
            return 1; /*0x568430*/
          }
          break; /*0x568430*/
        default:
          return v2;
      }
    }
  }
  return v2; /*0x56842f*/
}
