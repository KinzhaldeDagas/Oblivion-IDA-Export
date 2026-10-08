char __stdcall sub_448C60(Data *a1, int a2)
{
  char v2; // bl
  TESSaveLoad *v3; // ecx
  unsigned int v5; // eax

  v2 = 1; /*0x448c67*/
  if ( !a1 || TESFile_GetIsMaster(a1) ) /*0x448c6b*/
  {
    v3 = g_TESSaveLoadGame; /*0x448c8e*/
  }
  else
  {
    v3 = g_TESSaveLoadGame; /*0x448c74*/
    if ( !g_TESSaveLoadGame || (v3->flags & 0x1000) == 0 ) /*0x448c86*/
      return 1; /*0x448c8b*/
  }
  if ( a2 ) /*0x448c9a*/
  {
    v5 = *(_DWORD *)(a2 + 0xC); /*0x448c9c*/
    if ( v5 >= 4 && (v5 <= 5 || v5 == 9) ) /*0x448cac*/
    {
      return 0; /*0x448cdf*/
    }
    else if ( v3 ) /*0x448cb0*/
    {
      if ( (v3->flags & 0x1000) != 0 ) /*0x448cbb*/
      {
        switch ( TESForm_GetFormTypeFromChunkType(*(_DWORD *)(a2 + 8)) ) /*0x448cd8*/
        {
          case 3: /*0x448cd8*/
          case 5: /*0x448cd8*/
          case 7: /*0x448cd8*/
          case 8: /*0x448cd8*/
          case 9: /*0x448cd8*/
          case 0xA: /*0x448cd8*/
          case 0xB: /*0x448cd8*/
          case 0xC: /*0x448cd8*/
          case 0xD: /*0x448cd8*/
          case 0xE: /*0x448cd8*/
          case 0xF: /*0x448cd8*/
          case 0x10: /*0x448cd8*/
          case 0x11: /*0x448cd8*/
          case 0x12: /*0x448cd8*/
          case 0x17: /*0x448cd8*/
          case 0x18: /*0x448cd8*/
          case 0x19: /*0x448cd8*/
          case 0x1C: /*0x448cd8*/
          case 0x1D: /*0x448cd8*/
          case 0x1E: /*0x448cd8*/
          case 0x1F: /*0x448cd8*/
          case 0x20: /*0x448cd8*/
          case 0x25: /*0x448cd8*/
          case 0x28: /*0x448cd8*/
          case 0x29: /*0x448cd8*/
          case 0x2B: /*0x448cd8*/
          case 0x2D: /*0x448cd8*/
          case 0x2E: /*0x448cd8*/
          case 0x2F: /*0x448cd8*/
          case 0x39: /*0x448cd8*/
          case 0x3A: /*0x448cd8*/
          case 0x3C: /*0x448cd8*/
          case 0x3D: /*0x448cd8*/
          case 0x3E: /*0x448cd8*/
          case 0x3F: /*0x448cd8*/
          case 0x40: /*0x448cd8*/
          case 0x41: /*0x448cd8*/
          case 0x42: /*0x448cd8*/
          case 0x43: /*0x448cd8*/
          case 0x44: /*0x448cd8*/
            return 0;
          default:
            return v2;
        }
      }
    }
  }
  return v2; /*0x448c8a*/
}
