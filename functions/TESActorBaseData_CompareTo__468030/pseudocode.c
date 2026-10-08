char __userpurge TESActorBaseData_CompareTo@<al>(int a1@<ecx>, int a2@<ebx>, void *a3)
{
  int *v4; // eax
  int *v5; // esi
  __int16 v7; // bx
  __int16 v8; // bx
  int *v9; // ebx
  int *v10; // esi
  int v11; // edi
  int v12; // edi
  int *v13; // eax
  int v14; // ecx
  unsigned int v15; // eax

  v4 = (int *)OblivionDynamicCast( /*0x468047*/
                a3,
                0,
                (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                &TESActorBaseData `RTTI Type Descriptor',
                0);
  v5 = v4; /*0x46804c*/
  if ( !v4 || *(_DWORD *)(a1 + 4) != v4[1] ) /*0x468062*/
    return 1; /*0x468059*/
  v7 = (*(int (__thiscall **)(int *, int))(*v4 + 0x48))(v4, a2); /*0x468070*/
  if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)a1 + 0x48))(a1) == v7 ) /*0x46807d*/
  {
    v8 = (*(int (__thiscall **)(int *))(*v5 + 0x4C))(v5); /*0x46808e*/
    if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)a1 + 0x4C))(a1) == v8 /*0x4680d3*/
      && *(_WORD *)(a1 + 0xC) == *((_WORD *)v5 + 6)
      && *(_WORD *)(a1 + 0xE) == *((_WORD *)v5 + 7)
      && *(_WORD *)(a1 + 0x10) == *((_WORD *)v5 + 8)
      && *(_WORD *)(a1 + 0x12) == *((_WORD *)v5 + 9)
      && *(_DWORD *)(a1 + 0x14) == v5[5] )
    {
      v9 = v5 + 6; /*0x4680d5*/
      v10 = (int *)(a1 + 0x18); /*0x4680d8*/
      v11 = BSSimpleList_Count((_DWORD *)(a1 + 0x18)); /*0x4680e4*/
      if ( v11 == BSSimpleList_Count(v9) ) /*0x4680ed*/
      {
        if ( !v10 ) /*0x4680f1*/
          return TESActorBaseData_CompareTo_::Return_0((int)a3); /*0x468123*/
        while ( 1 ) /*0x4680f3*/
        {
          v12 = *v10; /*0x4680f3*/
          if ( *v10 ) /*0x4680f3*/
          {
            v13 = v9; /*0x4680fb*/
            if ( v9 ) /*0x4680ff*/
            {
              while ( 1 ) /*0x468101*/
              {
                v14 = *v13; /*0x468101*/
                if ( *v13 ) /*0x468101*/
                {
                  if ( *(_DWORD *)v14 == *(_DWORD *)v12 ) /*0x468109*/
                    break; /*0x468109*/
                }
                v13 = (int *)v13[1]; /*0x46810b*/
                if ( !v13 ) /*0x468110*/
                  goto LABEL_18; /*0x468110*/
              }
              v15 = *(char *)(v14 + 4); /*0x46812c*/
            }
            else
            {
LABEL_18:
              v15 = 0xFFFFFFFF; /*0x468112*/
            }
            if ( v15 != *(char *)(v12 + 4) ) /*0x46811b*/
              break; /*0x46811b*/
          }
          v10 = (int *)v10[1]; /*0x46811d*/
          if ( !v10 ) /*0x468122*/
            return TESActorBaseData_CompareTo_::Return_0((int)a3); /*0x468122*/
        }
      }
    }
  }
  return TESActorBaseData_CompareTo_::Return_1((int)a3); /*0x468055*/
}
