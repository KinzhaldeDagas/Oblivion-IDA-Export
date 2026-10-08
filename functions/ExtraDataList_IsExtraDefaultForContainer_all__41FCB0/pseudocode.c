char __thiscall ExtraDataList_IsExtraDefaultForContainer_all(_DWORD *this)
{
  int v2; // eax
  char v3; // bl

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aExtradatalistI); /*0x41fcbe*/
  v2 = *(this + 1); /*0x41fcc3*/
  v3 = 0; /*0x41fcc6*/
  if ( v2 ) /*0x41fcca*/
  {
    while ( 2 ) /*0x41fce3*/
    {
      switch ( *(_BYTE *)(v2 + 4) ) /*0x41fce3*/
      {
        case 0x12: /*0x41fce3*/
        case 0x22: /*0x41fce3*/
        case 0x26: /*0x41fce3*/
        case 0x2A: /*0x41fce3*/
        case 0x2D: /*0x41fce3*/
        case 0x36: /*0x41fce3*/
        case 0x37: /*0x41fce3*/
        case 0x55: /*0x41fce3*/
          goto LABEL_4;
        case 0x27: /*0x41fce3*/
          v3 = 1; /*0x41fcea*/
LABEL_4:
          v2 = *(_DWORD *)(v2 + 8); /*0x41fcec*/
          if ( !v2 ) /*0x41fcf1*/
            break; /*0x41fcf1*/
          continue; /*0x41fcf1*/
        default:
          if ( v3 ) /*0x41fd04*/
            v3 = 0; /*0x41fd06*/
          goto LABEL_8; /*0x41fd06*/
      }
      break;
    }
  }
LABEL_8:
  NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x41fd08*/
  return v3; /*0x41fcfd*/
}
