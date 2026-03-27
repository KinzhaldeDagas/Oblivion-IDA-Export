double __userpurge sub_529A20@<st0>(int a1@<ecx>, double result@<st0>, _DWORD *a3)
{
  int *v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int v9; // eax

  if ( a3 )
  {
    BSSimpleList_Clear(a3);
    if ( (*(_BYTE *)(a1 + 0x3C) & 2) == 0 )
    {
      v5 = (int *)(a1 + 0x48);
      if ( a1 != 0xFFFFFFB8 )
      {
        do
        {
          v6 = *v5;
          if ( !*v5 )
            break;
          v5 = (int *)v5[1];
          if ( sub_56A950((unsigned __int8 **)(v6 + 4), (int)TESDataHandler_g_PlayerRef, 0) )
          {
            result = sub_65D8D0(TESDataHandler_g_PlayerRef, result, (_DWORD *)v6);
            v8 = v7;
            sub_52B440((_DWORD *)v6, 0);
            *(_DWORD *)(v6 + 0x10) = v9 != v8 ? v8 : 0;
            BSSimpleList_PushBack(a3, v6);
          }
        }
        while ( v5 );
      }
    }
  }
  return result;
}
