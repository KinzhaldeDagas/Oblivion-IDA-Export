double __usercall sub_5362F0@<st0>(int a1@<ebx>, int a2@<edi>, float a3@<esi>, int a4)
{
  int v4; // eax
  int *v5; // eax
  int v6; // eax
  int *v7; // esi
  int v8; // eax
  _DWORD **v9; // edi
  float v10; // ebx
  int v11; // esi
  int v12; // eax
  double v13; // st7
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ecx
  double v17; // st7
  double v18; // st6
  float v22; // [esp+0h] [ebp-Ch]
  float v23; // [esp+4h] [ebp-8h]
  float v24; // [esp+8h] [ebp-4h]
  float v25; // [esp+8h] [ebp-4h]

  v24 = 0.0; /*0x5362f8*/
  if ( a4 && (v4 = *(_DWORD *)(a4 + 8)) != 0 && (v5 = (int *)(v4 + 0x14)) != 0 && (v6 = *v5) != 0 ) /*0x536311*/
    v7 = *(int **)(v6 + 8); /*0x536313*/
  else
    v7 = 0; /*0x536318*/
  v8 = (*(int (__thiscall **)(int *, int))(*v7 + 0x88))(v7, a2); /*0x536325*/
  v9 = (_DWORD **)v8; /*0x536327*/
  if ( v8 ) /*0x53632b*/
  {
    v10 = 0.0; /*0x536336*/
    v11 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(v8 + 8) + 0x20))(*(_DWORD *)(v8 + 8), a1); /*0x53633e*/
    if ( v11 != 0xFFFFFFFF ) /*0x536343*/
    {
      do /*0x536376*/
      {
        v12 = ((int (__thiscall *)(_DWORD **, int))(*v9)[0x27])(v9, v11); /*0x536350*/
        v23 = sub_536260(v12) + v23; /*0x536364*/
        ++LODWORD(v10); /*0x53636c*/
        v11 = (*(int (__thiscall **)(_DWORD *, int))(*v9[2] + 0x24))(v9[2], v11); /*0x536371*/
      }
      while ( v11 != 0xFFFFFFFF ); /*0x536376*/
      v24 = v10; /*0x536378*/
    }
    v13 = a3 / (double)SLODWORD(v24); /*0x536381*/
  }
  else
  {
    v13 = sub_536260(v7[4]); /*0x53638b*/
  }
  if ( a4 && (v14 = *(_DWORD *)(a4 + 8)) != 0 && (v15 = v14 + 0x14) != 0 ) /*0x5363ac*/
    v16 = *(_DWORD *)(v15 + 0x1C); /*0x5363ae*/
  else
    v16 = 0; /*0x5363b3*/
  v22 = v13; /*0x536395*/
  v17 = v22; /*0x5363b5*/
  if ( (v16 & 0x3F) != 8 ) /*0x5363c3*/
    JUMPOUT(0x536422); /*0x536422*/
  v18 = 0.0; /*0x5363c5*/
  if ( v17 > 0.0 ) /*0x5363ce*/
  {
    switch ( (v16 >> 8) & 0x1F ) /*0x5363e5*/
    {
      case 1u: /*0x5363e5*/
      case 2u: /*0x5363e5*/
      case 3u: /*0x5363e5*/
      case 4u: /*0x5363e5*/
      case 5u: /*0x5363e5*/
      case 8u: /*0x5363e5*/
      case 0xBu: /*0x5363e5*/
      case 0xEu: /*0x5363e5*/
        break;
      case 6u: /*0x5363e5*/
      case 7u: /*0x5363e5*/
      case 9u: /*0x5363e5*/
      case 0xAu: /*0x5363e5*/
      case 0xCu: /*0x5363e5*/
      case 0xDu: /*0x5363e5*/
      case 0xFu: /*0x5363e5*/
      case 0x10u: /*0x5363e5*/
      case 0x18u: /*0x5363e5*/
        return (float)(v17 * MEMORY[0xB37A58][0x1E]); /*0x53641f*/
      case 0x11u: /*0x5363e5*/
      case 0x12u: /*0x5363e5*/
      case 0x13u: /*0x5363e5*/
      case 0x14u: /*0x5363e5*/
      case 0x15u: /*0x5363e5*/
      case 0x16u: /*0x5363e5*/
      case 0x17u: /*0x5363e5*/
        goto LABEL_22;
      default:
        JUMPOUT(0x536420); /*0x536420*/
    }
  }
  v18 = MEMORY[0xB37A58][0x1C]; /*0x5363ec*/
LABEL_22:
  v25 = v18; /*0x5363f4*/
  return (float)(v17 * v25); /*0x536404*/
}
