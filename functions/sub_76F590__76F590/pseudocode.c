void __stdcall sub_76F590(int a1, NiGeometry *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  int v8; // edx

  v7 = *(_DWORD *)(a5 + 0xC);
  if ( v7 != 0x11 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(dword_B42700 + 4) + 4 * v7) )
    {
      v8 = *(_DWORD *)(a5 + 8);
      switch ( v8 )
      {
        case 0xFFFFFFFF:
          return;
        case 0:
        case 3:
        case 4:
        case 0xD:
        case 0xE:
          goto LABEL_17;
        case 1:
          if ( a4 )
          {
            switch ( *(_WORD *)(a4 + 0x24) )
            {
              case 1:
              case 2:
              case 3:
                goto LABEL_18;
              case 4:
                def_76F659(a4, a1, (int)a2, a3, a4, a5, 3, a7);
                return;
              default:
                JUMPOUT(0x76F6D3);
            }
          }
          return;
        case 2:
          if ( a4 )
          {
            if ( *(_DWORD *)(a4 + 0x10) )
            {
              switch ( *(_WORD *)(a4 + 0x24) )
              {
                case 1:
                case 2:
                case 3:
LABEL_18:
                  JUMPOUT(0x76F834);
                case 4:
                  def_76F702(a1, (int)a2, a3, a4, a5, 0x1C, a7);
                  break;
                default:
                  JUMPOUT(0x76F773);
              }
            }
          }
          return;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
          sub_7282F0(a2, v8 - 5);
LABEL_17:
          JUMPOUT(0x76F82C);
        default:
          JUMPOUT(0x76F7E6);
      }
    }
  }
}
