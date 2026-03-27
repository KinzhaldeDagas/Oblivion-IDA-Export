char __thiscall ExtraDataList_IsExtraDefaultForContainer(_DWORD *this, char a2)
{
  int v3; // eax

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aExtradatalistI);
  v3 = *(this + 1);
  if ( v3 )
  {
    while ( 2 )
    {
      if ( a2 )
      {
        switch ( *(_BYTE *)(v3 + 4) )
        {
          case 0x12:
          case 0x1B:
          case 0x22:
          case 0x26:
          case 0x27:
          case 0x2A:
          case 0x2D:
          case 0x36:
          case 0x37:
          case 0x55:
            goto LABEL_5;
          default:
            goto ExtraDataList_IsExtraDefaultForContainer___def_41FDA7;
        }
      }
      switch ( *(_BYTE *)(v3 + 4) )
      {
        case 0x12:
        case 0x22:
        case 0x26:
        case 0x27:
        case 0x2A:
        case 0x2D:
        case 0x36:
        case 0x37:
        case 0x55:
LABEL_5:
          v3 = *(_DWORD *)(v3 + 8);
          if ( !v3 )
            break;
          continue;
        default:
ExtraDataList_IsExtraDefaultForContainer___def_41FDA7:
          NiLeaveCriticalSection_0(&BSExtraDataCS);
          return 0;
      }
      break;
    }
  }
  NiLeaveCriticalSection_0(&BSExtraDataCS);
  return 1;
}
