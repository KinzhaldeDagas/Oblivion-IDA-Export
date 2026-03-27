int __thiscall sub_9A4370(void *this, int a2, int a3, NiObjectNET *a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  unsigned int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ebp
  int v15; // edi
  int v16; // eax
  int v17; // edi
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v21; // [esp+10h] [ebp-18h]
  int v22; // [esp+14h] [ebp-14h]
  int v23; // [esp+18h] [ebp-10h]
  int v24; // [esp+1Ch] [ebp-Ch]
  int v25; // [esp+20h] [ebp-8h]
  unsigned int v26; // [esp+24h] [ebp-4h]

  v11 = *(_DWORD *)(a3 + 0x18);
  LOBYTE(v21) = (v11 & 0x2000000) != 0;
  v26 = v11 & 0xF0000000;
  LOBYTE(v22) = HIBYTE(v11) & 1;
  v12 = (*(int (__thiscall **)(void *, unsigned int))(*(_DWORD *)this + 0x3C))(this, v11 & 0xFFF);
  v13 = (*(int (__thiscall **)(void *, unsigned int))(*(_DWORD *)this + 0x3C))(this, (v11 >> 0xC) & 0xFFF);
  v14 = v13;
  v25 = v13;
  if ( v12 && v13 )
  {
    v15 = *(_DWORD *)(v12 + 0x14);
    if ( !byte_B4295B )
      sub_783C70();
    v16 = dword_B428D8[(unsigned __int8)v15];
    v17 = *(_DWORD *)(v14 + 0x14);
    v23 = v16;
    if ( !byte_B4295B )
      sub_783C70();
    v18 = *(_DWORD *)(v12 + 0x14) & 0xF0000000;
    v24 = dword_B428D8[(unsigned __int8)v17];
    switch ( v18 )
    {
      case 0x20000000u:
        v23 = sub_9A2690(*(char **)(v12 + 0xC));
        sub_9A3A60(0, v12, a4, a5, a6, a7, a8, a9);
        break;
      case 0x40000000u:
        sub_9A3D20(0, (_DWORD *)v12, a10);
        break;
      case 0x30000000u:
      case 0x10000000u:
        sub_9A4010(0, v12, a4, a5, a6, a8, a9, a10);
        break;
    }
    v19 = *(_DWORD *)(v25 + 0x14) & 0xF0000000;
    switch ( v19 )
    {
      case 0x20000000u:
        v24 = sub_9A2690(*(char **)(v25 + 0xC));
        sub_9A3A60(1, v25, a4, a5, a6, a7, a8, a9);
        break;
      case 0x30000000u:
        sub_9A4010(1, v25, a4, a5, a6, a8, a9, a10);
        break;
      case 0x40000000u:
      case 0x10000000u:
        sub_9A3D20(1, (_DWORD *)v25, a10);
        break;
    }
    if ( v23 && v24 )
    {
      if ( v26 > 0x30000000 )
      {
        if ( v26 == 0x40000000 )
          return sub_9A3080(a2, a3, v23, v24, v22, v21);
      }
      else
      {
        switch ( v26 )
        {
          case 0x30000000u:
            return sub_9A2E50(a2, a3, v23, v24, v22, v21);
          case 0x10000000u:
            return sub_9A28A0(a2, a3, v23, v24, v22, v21);
          case 0x20000000u:
            return sub_9A2BD0(a2, a3, v23, v24, *(float *)&v22, v21);
        }
      }
    }
    else
    {
      sub_738460(1, 0, "Invalid operands in OperatorConstant\n");
    }
  }
  else
  {
    sub_738460(1, 0, "Invalid entries in OperatorConstant\n");
  }
  return 1;
}
