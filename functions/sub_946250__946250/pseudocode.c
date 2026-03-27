_DWORD *__usercall sub_946250@<eax>(int a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>, _DWORD *a4, int a5)
{
  unsigned int v5; // ecx
  int v8; // esi
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  v5 = a3 - 1;
  v8 = 2 * a5;
  while ( 2 )
  {
    switch ( v5 )
    {
      case 0u:
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0x17u:
        return a2;
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x10u:
      case 0x11u:
        v9 = &a2[4 * *(unsigned __int16 *)(*a4 + v8 + 2)];
        v10 = 0xC;
        v8 += 2;
        a2 = v9;
        goto LABEL_9;
      case 0x15u:
      case 0x19u:
        v14 = *(unsigned __int16 *)(*a4 + v8 + 2);
        v11 = sub_940CF0(a1);
        v10 = *(unsigned __int8 *)(a1 + 0xD);
        v8 += 2;
        a2 = (_DWORD *)(*a2 + v14 * v11);
        goto LABEL_9;
      case 0x18u:
        if ( !a1 )
          return 0;
        if ( !*(_DWORD *)(a1 + 4) )
          return 0;
        v12 = (_DWORD *)sub_90D1F0((_DWORD *)a1);
        if ( !v12 )
          return 0;
        a1 = sub_90D260(v12, *(unsigned __int16 *)(*a4 + v8 + 2));
        v10 = *(unsigned __int8 *)(a1 + 0xC);
        v8 += 2;
        a2 = (_DWORD *)((char *)a2 + *(unsigned __int16 *)(a1 + 0x12));
LABEL_9:
        v5 = v10 - 1;
        if ( v5 <= 0x19 )
          continue;
        return 0;
      default:
        return 0;
    }
  }
}
