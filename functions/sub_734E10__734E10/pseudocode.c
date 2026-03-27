unsigned int __thiscall sub_734E10(int this, int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  char *v5; // esi
  char *v6; // ebx
  unsigned int v7; // ecx
  char v8; // al
  unsigned int result; // eax
  _BYTE *v10; // ebx
  unsigned int v11; // ebp
  char *v12; // ebx
  char v13; // cl
  char *v14; // ebx
  char v15; // cl
  char *v16; // ebx
  unsigned int i; // eax
  char v18; // cl
  char *v19; // ebx
  char v20; // dl
  char v21; // cl

  v3 = *(unsigned __int16 *)(this + 0x106);
  if ( *(_DWORD *)(this + 0x168) < v3 )
  {
    *(_DWORD *)(this + 0x168) = v3;
    FormHeapFree(*(_DWORD *)(this + 0x16C));
    *(_DWORD *)(this + 0x16C) = FormHeapAlloc(
                                  (unsigned __int64)*(unsigned int *)(this + 0x168) >> 0x1E != 0
                                ? 0xFFFFFFFF
                                : 4 * *(_DWORD *)(this + 0x168));
  }
  v4 = 4 * *(unsigned __int16 *)(this + 0x106);
  if ( *(_DWORD *)(this + 0x160) < v4 )
  {
    *(_DWORD *)(this + 0x160) = v4;
    FormHeapFree(*(_DWORD *)(this + 0x164));
    *(_DWORD *)(this + 0x164) = FormHeapAlloc(*(_DWORD *)(this + 0x160));
  }
  v5 = *(char **)(this + 0x16C);
  switch ( *(_BYTE *)(this + 0x108) )
  {
    case 8:
      v6 = *(char **)(this + 0x164);
      sub_734C80(a2, (int)v6, *(unsigned __int16 *)(this + 0x106));
      v7 = 0;
      if ( !*(_WORD *)(this + 0x106) )
        goto LABEL_17;
      do
      {
        v8 = *v6;
        v5[2] = *v6;
        v5[1] = v8;
        *v5 = v8;
        v5[3] = 0xFF;
        result = *(unsigned __int16 *)(this + 0x106);
        ++v7;
        v5 += 4;
        ++v6;
      }
      while ( v7 < result );
      break;
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
      goto LABEL_17;
    case 0xF:
    case 0x10:
      v10 = *(_BYTE **)(this + 0x164);
      sub_734C80(a2, (int)v10, 2 * *(unsigned __int16 *)(this + 0x106));
      v11 = 0;
      if ( !*(_WORD *)(this + 0x106) )
        goto LABEL_17;
      do
      {
        *v5 = 2 * (v10[1] & 0xFC);
        v5[1] = (v10[1] << 6) + ((*v10 >> 2) & 0x38);
        v5[2] = 8 * *v10;
        v5[3] = 0xFF;
        result = *(unsigned __int16 *)(this + 0x106);
        ++v11;
        v5 += 4;
        v10 += 2;
      }
      while ( v11 < result );
      break;
    case 0x18:
      v12 = *(char **)(this + 0x164);
      sub_734C80(a2, (int)v12, 3 * *(unsigned __int16 *)(this + 0x106));
      result = 0;
      if ( !*(_WORD *)(this + 0x106) )
        goto LABEL_17;
      do
      {
        v13 = *v12;
        v14 = v12 + 1;
        v5[2] = v13;
        v15 = *v14++;
        v5[1] = v15;
        *v5 = *v14;
        v5[3] = 0xFF;
        ++result;
        v12 = v14 + 1;
        v5 += 4;
      }
      while ( result < *(unsigned __int16 *)(this + 0x106) );
      break;
    case 0x20:
      v16 = *(char **)(this + 0x164);
      sub_734C80(a2, (int)v16, 4 * *(unsigned __int16 *)(this + 0x106));
      for ( i = 0; i < *(unsigned __int16 *)(this + 0x106); v5 += 4 )
      {
        v18 = *v16;
        v19 = v16 + 1;
        v5[2] = v18;
        v20 = *v19++;
        v5[1] = v20;
        v21 = *v19++;
        *v5 = v21;
        v5[3] = *v19;
        ++i;
        v16 = v19 + 1;
      }
LABEL_17:
      result = def_734EB6(a2);
      break;
    default:
      JUMPOUT(0x735055);
  }
  return result;
}
