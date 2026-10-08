double __userpurge sub_529A20@<st0>(int a1@<ecx>, double result@<st0>, _DWORD *a3)
{
  int *v4; // ebx
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // eax

  if ( a3 )
  {
    BSSimpleList_Clear(a3); /*0x529a2e*/
    if ( (*(_BYTE *)(a1 + 0x3C) & 2) == 0 )
    {
      v4 = (int *)(a1 + 0x48); /*0x529a3a*/
      if ( a1 != 0xFFFFFFB8 )
      {
        do
        {
          v5 = *v4; /*0x529a42*/
          if ( !*v4 ) /*0x529a42*/
            break; /*0x529a46*/
          v4 = (int *)v4[1]; /*0x529a4d*/
          if ( ConditionList_EvaluateForActor((unsigned __int8 **)(v5 + 4), (Actor *)reference, 0) )
          {
            result = sub_65D8D0(reference, result, (_DWORD *)v5); /*0x529a66*/
            v7 = v6; /*0x529a6f*/
            sub_52B440((_DWORD *)v5, 0); /*0x529a71*/
            *(_DWORD *)(v5 + 0x10) = v8 != v7 ? v7 : 0;
            BSSimpleList_PushBack(a3, v5); /*0x529a86*/
          }
        }
        while ( v4 );
      }
    }
  }
  return result; /*0x529a91*/
}
