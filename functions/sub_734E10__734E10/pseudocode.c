void __thiscall sub_734E10(int this, int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  char *v5; // esi
  char *v6; // ebx
  unsigned int v7; // ecx
  char v8; // al
  _BYTE *v9; // ebx
  unsigned int v10; // ebp
  char *v11; // ebx
  unsigned int v12; // eax
  char v13; // cl
  char *v14; // ebx
  char v15; // cl
  char *v16; // ebx
  unsigned int i; // eax
  char v18; // cl
  char *v19; // ebx
  char v20; // dl
  char v21; // cl

  v3 = *(unsigned __int16 *)(this + 0x106); /*0x734e15*/
  if ( *(_DWORD *)(this + 0x168) < v3 )
  {
    *(_DWORD *)(this + 0x168) = v3; /*0x734e24*/
    FormHeapFree(*(_DWORD *)(this + 0x16C)); /*0x734e31*/
    *(_DWORD *)(this + 0x16C) = FormHeapAlloc(
                                  (unsigned __int64)*(unsigned int *)(this + 0x168) >> 0x1E != 0
                                ? 0xFFFFFFFF
                                : 4 * *(_DWORD *)(this + 0x168));
  }
  v4 = 4 * *(unsigned __int16 *)(this + 0x106); /*0x734e64*/
  if ( *(_DWORD *)(this + 0x160) < v4 ) /*0x734e6c*/
  {
    *(_DWORD *)(this + 0x160) = v4; /*0x734e6e*/
    FormHeapFree(*(_DWORD *)(this + 0x164)); /*0x734e7b*/
    *(_DWORD *)(this + 0x164) = FormHeapAlloc(*(_DWORD *)(this + 0x160)); /*0x734e8f*/
  }
  v5 = *(char **)(this + 0x16C); /*0x734e9c*/
  switch ( *(_BYTE *)(this + 0x108) ) /*0x734eb6*/
  {
    case 8: /*0x734eb6*/
      v6 = *(char **)(this + 0x164); /*0x734ec4*/
      sub_734C80(a2, (int)v6, *(unsigned __int16 *)(this + 0x106)); /*0x734ed1*/
      v7 = 0; /*0x734ed6*/
      if ( !*(_WORD *)(this + 0x106) ) /*0x734ee2*/
        goto LABEL_17; /*0x734ee2*/
      do /*0x734f0f*/
      {
        v8 = *v6; /*0x734ef0*/
        v5[2] = *v6; /*0x734ef2*/
        v5[1] = v8; /*0x734ef5*/
        *v5 = v8; /*0x734ef8*/
        v5[3] = 0xFF; /*0x734efa*/
        ++v7; /*0x734f04*/
        v5 += 4; /*0x734f07*/
        ++v6; /*0x734f0a*/
      }
      while ( v7 < *(unsigned __int16 *)(this + 0x106) ); /*0x734f0f*/
      break; /*0x734f0f*/
    case 9: /*0x734eb6*/
    case 0xA: /*0x734eb6*/
    case 0xB: /*0x734eb6*/
    case 0xC: /*0x734eb6*/
    case 0xD: /*0x734eb6*/
    case 0xE: /*0x734eb6*/
    case 0x11: /*0x734eb6*/
    case 0x12: /*0x734eb6*/
    case 0x13: /*0x734eb6*/
    case 0x14: /*0x734eb6*/
    case 0x15: /*0x734eb6*/
    case 0x16: /*0x734eb6*/
    case 0x17: /*0x734eb6*/
    case 0x19: /*0x734eb6*/
    case 0x1A: /*0x734eb6*/
    case 0x1B: /*0x734eb6*/
    case 0x1C: /*0x734eb6*/
    case 0x1D: /*0x734eb6*/
    case 0x1E: /*0x734eb6*/
    case 0x1F: /*0x734eb6*/
      goto LABEL_17;
    case 0xF: /*0x734eb6*/
    case 0x10: /*0x734eb6*/
      v9 = *(_BYTE **)(this + 0x164); /*0x734f1f*/
      sub_734C80(a2, (int)v9, 2 * *(unsigned __int16 *)(this + 0x106)); /*0x734f2e*/
      v10 = 0; /*0x734f33*/
      if ( !*(_WORD *)(this + 0x106) ) /*0x734f3f*/
        goto LABEL_17; /*0x734f3f*/
      do /*0x734f87*/
      {
        *v5 = 2 * (v9[1] & 0xFC); /*0x734f4f*/
        v5[1] = (v9[1] << 6) + ((*v9 >> 2) & 0x38); /*0x734f63*/
        v5[2] = 8 * *v9; /*0x734f6f*/
        v5[3] = 0xFF; /*0x734f72*/
        ++v10; /*0x734f7c*/
        v5 += 4; /*0x734f7f*/
        v9 += 2; /*0x734f82*/
      }
      while ( v10 < *(unsigned __int16 *)(this + 0x106) ); /*0x734f87*/
      break; /*0x734f87*/
    case 0x18: /*0x734eb6*/
      v11 = *(char **)(this + 0x164); /*0x734f97*/
      sub_734C80(a2, (int)v11, 3 * *(unsigned __int16 *)(this + 0x106)); /*0x734fa7*/
      v12 = 0; /*0x734fac*/
      if ( !*(_WORD *)(this + 0x106) ) /*0x734fb8*/
        goto LABEL_17; /*0x734fb8*/
      do /*0x734fec*/
      {
        v13 = *v11; /*0x734fc0*/
        v14 = v11 + 1; /*0x734fc3*/
        v5[2] = v13; /*0x734fc6*/
        v15 = *v14++; /*0x734fc9*/
        v5[1] = v15; /*0x734fcf*/
        *v5 = *v14; /*0x734fd5*/
        v5[3] = 0xFF; /*0x734fd7*/
        ++v12; /*0x734fe1*/
        v11 = v14 + 1; /*0x734fe4*/
        v5 += 4; /*0x734fe7*/
      }
      while ( v12 < *(unsigned __int16 *)(this + 0x106) ); /*0x734fec*/
      break; /*0x734fec*/
    case 0x20: /*0x734eb6*/
      v16 = *(char **)(this + 0x164); /*0x734ffc*/
      sub_734C80(a2, (int)v16, 4 * *(unsigned __int16 *)(this + 0x106)); /*0x73500d*/
      for ( i = 0; i < *(unsigned __int16 *)(this + 0x106); v5 += 4 ) /*0x735017*/
      {
        v18 = *v16; /*0x735020*/
        v19 = v16 + 1; /*0x735023*/
        v5[2] = v18; /*0x735026*/
        v20 = *v19++; /*0x735029*/
        v5[1] = v20; /*0x73502f*/
        v21 = *v19++; /*0x735032*/
        *v5 = v21; /*0x735038*/
        v5[3] = *v19; /*0x73503d*/
        ++i; /*0x735047*/
        v16 = v19 + 1; /*0x73504a*/
      }
LABEL_17:
      def_734EB6(a2); /*0x735054*/
      break; /*0x735054*/
    default:
      JUMPOUT(0x735055); /*0x735055*/
  }
}
