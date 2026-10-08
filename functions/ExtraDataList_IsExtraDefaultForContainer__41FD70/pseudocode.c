char __thiscall ExtraDataList_IsExtraDefaultForContainer(_DWORD *this, char a2)
{
  int v3; // eax

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aExtradatalistI); /*0x41fd7d*/
  v3 = *(this + 1); /*0x41fd82*/
  if ( v3 ) /*0x41fd88*/
  {
    while ( 2 ) /*0x41fd92*/
    {
      if ( a2 ) /*0x41fd92*/
      {
        switch ( *(_BYTE *)(v3 + 4) ) /*0x41fda7*/
        {
          case 0x12: /*0x41fda7*/
          case 0x1B: /*0x41fda7*/
          case 0x22: /*0x41fda7*/
          case 0x26: /*0x41fda7*/
          case 0x27: /*0x41fda7*/
          case 0x2A: /*0x41fda7*/
          case 0x2D: /*0x41fda7*/
          case 0x36: /*0x41fda7*/
          case 0x37: /*0x41fda7*/
          case 0x55: /*0x41fda7*/
            goto LABEL_5;
          default:
            goto ExtraDataList_IsExtraDefaultForContainer___def_41FDA7;
        }
      }
      switch ( *(_BYTE *)(v3 + 4) ) /*0x41fdc1*/
      {
        case 0x12: /*0x41fdc1*/
        case 0x22: /*0x41fdc1*/
        case 0x26: /*0x41fdc1*/
        case 0x27: /*0x41fdc1*/
        case 0x2A: /*0x41fdc1*/
        case 0x2D: /*0x41fdc1*/
        case 0x36: /*0x41fdc1*/
        case 0x37: /*0x41fdc1*/
        case 0x55: /*0x41fdc1*/
LABEL_5:
          v3 = *(_DWORD *)(v3 + 8); /*0x41fdc8*/
          if ( !v3 ) /*0x41fdcd*/
            break; /*0x41fdcd*/
          continue; /*0x41fdcd*/
        default:
ExtraDataList_IsExtraDefaultForContainer___def_41FDA7:
          NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x41fdde*/
          return 0; /*0x41fde8*/
      }
      break;
    }
  }
  NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x41fdcf*/
  return 1; /*0x41fddb*/
}
