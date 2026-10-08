unsigned int __stdcall sub_72DE70(unsigned __int8 a1, _DWORD *a2)
{
  unsigned int result; // eax
  int v4; // ebx
  unsigned int v5; // edi
  int v6; // ebp
  unsigned int *v7; // ebp
  unsigned int *v8; // ebp
  unsigned int v9; // edi
  unsigned int *v10; // ebx
  int v11; // [esp+10h] [ebp-14h]
  unsigned int v12; // [esp+18h] [ebp-Ch]
  unsigned int v13; // [esp+1Ch] [ebp-8h]
  unsigned int v14; // [esp+20h] [ebp-4h]
  unsigned int v15; // [esp+2Ch] [ebp+8h]

  while ( 1 ) /*0x72de80*/
  {
    result = 0; /*0x72de80*/
    v11 = 0xFFFFFFFF; /*0x72de85*/
    v15 = 0; /*0x72de8d*/
    if ( !a2[2] ) /*0x72de82*/
      break; /*0x72de82*/
    while ( 1 ) /*0x72dea6*/
    {
      v4 = *(_DWORD *)(*a2 + 4 * result); /*0x72dea6*/
      v5 = result + 1; /*0x72dea9*/
      v12 = result + 1; /*0x72deaf*/
      if ( result + 1 < a2[2] ) /*0x72deb3*/
      {
        do /*0x72def7*/
        {
          v6 = *(_DWORD *)(*a2 + 4 * v5); /*0x72dec2*/
          result = sub_72D2B0((__int16 **)v4, (__int16 **)v6); /*0x72dec8*/
          if ( result <= a1 && (int)(*(_DWORD *)(v4 + 8) + *(_DWORD *)(v6 + 8) - result) > v11 ) /*0x72dedf*/
          {
            v13 = v15; /*0x72dee5*/
            v14 = v5; /*0x72dee9*/
            v11 = *(_DWORD *)(v4 + 8) + *(_DWORD *)(v6 + 8) - result; /*0x72deed*/
          }
          ++v5; /*0x72def1*/
        }
        while ( v5 < a2[2] ); /*0x72def7*/
        v5 = v12; /*0x72def9*/
      }
      v15 = v5; /*0x72df00*/
      if ( v5 >= a2[2] ) /*0x72df04*/
        break; /*0x72df04*/
      result = v5; /*0x72dea0*/
    }
    if ( v11 < 0 ) /*0x72df0b*/
      break; /*0x72df0b*/
    sub_72D330(*(unsigned int **)(*a2 + 4 * v13), *(_DWORD *)(*a2 + 4 * v14)); /*0x72df1e*/
    v7 = *(unsigned int **)(*a2 + 4 * v14); /*0x72df25*/
    if ( v7 ) /*0x72df2a*/
    {
      FormHeapFree(*v7); /*0x72df30*/
      FormHeapFree((unsigned int)v7); /*0x72df36*/
    }
    --a2[2]; /*0x72df3e*/
    *(_DWORD *)(*a2 + 4 * v14) = *(_DWORD *)(*a2 + 4 * a2[2]); /*0x72df4a*/
    v8 = *(unsigned int **)(*a2 + 4 * v13); /*0x72df4f*/
    v9 = 0; /*0x72df52*/
    while ( v9 < a2[2] ) /*0x72df54*/
    {
      v10 = *(unsigned int **)(*a2 + 4 * v9); /*0x72df62*/
      if ( v10 == v8 || !sub_72CDF0(v8, *(_DWORD **)(*a2 + 4 * v9)) ) /*0x72df6c*/
      {
        ++v9; /*0x72df9b*/
      }
      else
      {
        if ( v10 ) /*0x72df77*/
        {
          FormHeapFree(*v10); /*0x72df7c*/
          FormHeapFree((unsigned int)v10); /*0x72df82*/
        }
        --a2[2]; /*0x72df8a*/
        *(_DWORD *)(*a2 + 4 * v9) = *(_DWORD *)(*a2 + 4 * a2[2]); /*0x72df96*/
      }
    }
  }
  return result; /*0x72de93*/
}
