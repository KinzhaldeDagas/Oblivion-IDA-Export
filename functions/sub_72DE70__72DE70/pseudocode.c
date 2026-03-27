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

  while ( 1 )
  {
    result = 0;
    v11 = 0xFFFFFFFF;
    v15 = 0;
    if ( !a2[2] )
      break;
    while ( 1 )
    {
      v4 = *(_DWORD *)(*a2 + 4 * result);
      v5 = result + 1;
      v12 = result + 1;
      if ( result + 1 < a2[2] )
      {
        do
        {
          v6 = *(_DWORD *)(*a2 + 4 * v5);
          result = sub_72D2B0((__int16 **)v4, (__int16 **)v6);
          if ( result <= a1 && (int)(*(_DWORD *)(v4 + 8) + *(_DWORD *)(v6 + 8) - result) > v11 )
          {
            v13 = v15;
            v14 = v5;
            v11 = *(_DWORD *)(v4 + 8) + *(_DWORD *)(v6 + 8) - result;
          }
          ++v5;
        }
        while ( v5 < a2[2] );
        v5 = v12;
      }
      v15 = v5;
      if ( v5 >= a2[2] )
        break;
      result = v5;
    }
    if ( v11 < 0 )
      break;
    sub_72D330(*(unsigned int **)(*a2 + 4 * v13), *(_DWORD *)(*a2 + 4 * v14));
    v7 = *(unsigned int **)(*a2 + 4 * v14);
    if ( v7 )
    {
      FormHeapFree(*v7);
      FormHeapFree((unsigned int)v7);
    }
    --a2[2];
    *(_DWORD *)(*a2 + 4 * v14) = *(_DWORD *)(*a2 + 4 * a2[2]);
    v8 = *(unsigned int **)(*a2 + 4 * v13);
    v9 = 0;
    while ( v9 < a2[2] )
    {
      v10 = *(unsigned int **)(*a2 + 4 * v9);
      if ( v10 == v8 || !sub_72CDF0(v8, *(_DWORD **)(*a2 + 4 * v9)) )
      {
        ++v9;
      }
      else
      {
        if ( v10 )
        {
          FormHeapFree(*v10);
          FormHeapFree((unsigned int)v10);
        }
        --a2[2];
        *(_DWORD *)(*a2 + 4 * v9) = *(_DWORD *)(*a2 + 4 * a2[2]);
      }
    }
  }
  return result;
}
