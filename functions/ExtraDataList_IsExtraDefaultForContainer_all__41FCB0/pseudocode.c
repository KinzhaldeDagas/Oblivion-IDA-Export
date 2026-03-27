char __thiscall ExtraDataList_IsExtraDefaultForContainer_all(_DWORD *this)
{
  int v2; // eax
  char v3; // bl

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aExtradatalistI);
  v2 = *(this + 1);
  v3 = 0;
  if ( v2 )
  {
    while ( 2 )
    {
      switch ( *(_BYTE *)(v2 + 4) )
      {
        case 0x12:
        case 0x22:
        case 0x26:
        case 0x2A:
        case 0x2D:
        case 0x36:
        case 0x37:
        case 0x55:
          goto LABEL_4;
        case 0x27:
          v3 = 1;
LABEL_4:
          v2 = *(_DWORD *)(v2 + 8);
          if ( !v2 )
            break;
          continue;
        default:
          if ( v3 )
            v3 = 0;
          goto LABEL_8;
      }
      break;
    }
  }
LABEL_8:
  NiLeaveCriticalSection_0(&BSExtraDataCS);
  return v3;
}
