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

  v4 = (int *)OblivionDynamicCast(
                a3,
                0,
                (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                &TESActorBaseData `RTTI Type Descriptor',
                0);
  v5 = v4;
  if ( !v4 || *(_DWORD *)(a1 + 4) != v4[1] )
    return 1;
  v7 = (*(int (__thiscall **)(int *, int))(*v4 + 0x48))(v4, a2);
  if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)a1 + 0x48))(a1) == v7 )
  {
    v8 = (*(int (__thiscall **)(int *))(*v5 + 0x4C))(v5);
    if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)a1 + 0x4C))(a1) == v8
      && *(_WORD *)(a1 + 0xC) == *((_WORD *)v5 + 6)
      && *(_WORD *)(a1 + 0xE) == *((_WORD *)v5 + 7)
      && *(_WORD *)(a1 + 0x10) == *((_WORD *)v5 + 8)
      && *(_WORD *)(a1 + 0x12) == *((_WORD *)v5 + 9)
      && *(_DWORD *)(a1 + 0x14) == v5[5] )
    {
      v9 = v5 + 6;
      v10 = (int *)(a1 + 0x18);
      v11 = BSSimpleList_Count((_DWORD *)(a1 + 0x18));
      if ( v11 == BSSimpleList_Count(v9) )
      {
        if ( !v10 )
          return TESActorBaseData_CompareTo_::Return_0(a3);
        while ( 1 )
        {
          v12 = *v10;
          if ( *v10 )
          {
            v13 = v9;
            if ( v9 )
            {
              while ( 1 )
              {
                v14 = *v13;
                if ( *v13 )
                {
                  if ( *(_DWORD *)v14 == *(_DWORD *)v12 )
                    break;
                }
                v13 = (int *)v13[1];
                if ( !v13 )
                  goto LABEL_18;
              }
              v15 = *(char *)(v14 + 4);
            }
            else
            {
LABEL_18:
              v15 = 0xFFFFFFFF;
            }
            if ( v15 != *(char *)(v12 + 4) )
              break;
          }
          v10 = (int *)v10[1];
          if ( !v10 )
            return TESActorBaseData_CompareTo_::Return_0(a3);
        }
      }
    }
  }
  return TESActorBaseData_CompareTo_::Return_1((int)a3);
}
