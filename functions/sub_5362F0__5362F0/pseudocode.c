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

  v24 = 0.0;
  if ( a4 && (v4 = *(_DWORD *)(a4 + 8)) != 0 && (v5 = (int *)(v4 + 0x14)) != 0 && (v6 = *v5) != 0 )
    v7 = *(int **)(v6 + 8);
  else
    v7 = 0;
  v8 = (*(int (__thiscall **)(int *, int))(*v7 + 0x88))(v7, a2);
  v9 = (_DWORD **)v8;
  if ( v8 )
  {
    v10 = 0.0;
    v11 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(v8 + 8) + 0x20))(*(_DWORD *)(v8 + 8), a1);
    if ( v11 != 0xFFFFFFFF )
    {
      do
      {
        v12 = ((int (__thiscall *)(_DWORD **, int))(*v9)[0x27])(v9, v11);
        v23 = sub_536260(v12) + v23;
        ++LODWORD(v10);
        v11 = (*(int (__thiscall **)(_DWORD *, int))(*v9[2] + 0x24))(v9[2], v11);
      }
      while ( v11 != 0xFFFFFFFF );
      v24 = v10;
    }
    v13 = a3 / (double)SLODWORD(v24);
  }
  else
  {
    v13 = sub_536260(v7[4]);
  }
  if ( a4 && (v14 = *(_DWORD *)(a4 + 8)) != 0 && (v15 = v14 + 0x14) != 0 )
    v16 = *(_DWORD *)(v15 + 0x1C);
  else
    v16 = 0;
  v22 = v13;
  v17 = v22;
  if ( (v16 & 0x3F) != 8 )
    JUMPOUT(0x536422);
  v18 = 0.0;
  if ( v17 > 0.0 )
  {
    switch ( (v16 >> 8) & 0x1F )
    {
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 8u:
      case 0xBu:
      case 0xEu:
        break;
      case 6u:
      case 7u:
      case 9u:
      case 0xAu:
      case 0xCu:
      case 0xDu:
      case 0xFu:
      case 0x10u:
      case 0x18u:
        return (float)(v17 * fBuoyancyMultExtremity);
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
        goto LABEL_22;
      default:
        JUMPOUT(0x536420);
    }
  }
  v18 = flt_B37AC8;
LABEL_22:
  v25 = v18;
  return (float)(v17 * v25);
}
