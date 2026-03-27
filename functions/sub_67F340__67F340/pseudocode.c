void __cdecl sub_67F340(TESObjectCELL **a1)
{
  int *v1; // edi
  ExtraTeleport *TeleportExtraData; // eax
  BSExtraData *p_super; // esi
  int v4; // eax
  int v5; // ebx
  TESObjectCELL **v6; // eax
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  _DWORD *v10; // ebx
  BSSimpleList_VoidPtr *v11; // esi
  int data; // ebp
  BSSimpleList_VoidPtr *v13; // esi
  _DWORD *v14; // ecx
  _DWORD *v15; // ebx
  BSSimpleList_VoidPtr *v16; // ebp
  BSSimpleList_VoidPtr *next; // esi
  int *v18; // edi
  unsigned __int16 *v19; // esi
  _DWORD *v20; // [esp+8h] [ebp-14h] BYREF
  BSSimpleList_VoidPtr *v21; // [esp+Ch] [ebp-10h] BYREF
  int v22; // [esp+10h] [ebp-Ch]
  int v23; // [esp+14h] [ebp-8h]
  unsigned __int16 *v24; // [esp+18h] [ebp-4h]

  v1 = 0;
  if ( lowPathWorld_ptr )
  {
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g_pathingMutex, (int)&unk_A2F830);
    if ( a1 )
    {
      TeleportExtraData = GetTeleportExtraData(a1);
      p_super = &TeleportExtraData->super;
      if ( TeleportExtraData )
      {
        if ( sub_42B410(&TeleportExtraData->super) )
        {
          sub_4D8AF0(a1);
          v5 = v4;
          v22 = v4;
          v6 = (TESObjectCELL **)sub_42B410(p_super);
          sub_4D8AF0(v6);
          v8 = v7;
          v23 = v7;
          if ( v5 )
          {
            if ( v7 )
            {
              v9 = lowPathWorld_ptr;
              v20 = 0;
              if ( NiTMap_GetAt(v9, v5, &v20) )
              {
                v10 = v20;
                if ( v20 )
                {
                  v21 = 0;
                  if ( NiTMap_GetAt(v20, v8, &v21) )
                  {
                    v11 = v21;
                    if ( v21 )
                    {
                      while ( !BSSimpleList_IsEmpty(v11) )
                      {
                        if ( sub_680410(v11->firstNode.data, (int)a1) )
                        {
                          data = (int)v11->firstNode.data;
                          v24 = (unsigned __int16 *)v11->firstNode.data;
                          if ( v1 )
                            BSSimpleList_Remove(v1, data);
                          else
                            sub_67F100(v11);
                          v13 = v21;
                          if ( BSSimpleList_IsEmpty(v21) )
                          {
                            FormHeapFree((unsigned int)v13);
                            NiTMap_RemoveAt(v10, v23);
                            if ( !v10[3] )
                            {
                              (*(void (__thiscall **)(_DWORD *, int))*v10)(v10, 1);
                              v14 = lowPathWorld_ptr;
                              v20 = 0;
                              NiTMap_RemoveAt(v14, v22);
                            }
                          }
                          if ( data )
                          {
                            if ( NiTMap_GetAt(lowPathWorld_ptr, v23, &v20) )
                            {
                              v15 = v20;
                              if ( v20 )
                              {
                                v21 = 0;
                                if ( NiTMap_GetAt(v20, v22, &v21) )
                                {
                                  v16 = v21;
                                  if ( v21 )
                                  {
                                    next = v21;
                                    v18 = 0;
                                    while ( !BSSimpleList_IsEmpty(next) )
                                    {
                                      if ( next->firstNode.data == v24 )
                                      {
                                        if ( v18 )
                                          BSSimpleList_Remove(v18, (int)v24);
                                        else
                                          sub_67F100(next);
                                        if ( BSSimpleList_IsEmpty(v16) )
                                        {
                                          FormHeapFree((unsigned int)v16);
                                          NiTMap_RemoveAt(v15, v22);
                                          if ( !v15[3] )
                                          {
                                            (*(void (__thiscall **)(_DWORD *, int))*v15)(v15, 1);
                                            NiTMap_RemoveAt(lowPathWorld_ptr, v23);
                                          }
                                        }
                                        v19 = v24;
                                        BSSimpleList_Remove(&dword_B3BE18, (int)v24);
                                        sub_680340(v19);
                                        FormHeapFree((unsigned int)v19);
                                        goto LABEL_38;
                                      }
                                      v18 = (int *)next;
                                      next = (BSSimpleList_VoidPtr *)next->firstNode.next;
                                      if ( !next )
                                        goto LABEL_38;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          break;
                        }
                        v1 = (int *)v11;
                        v11 = (BSSimpleList_VoidPtr *)v11->firstNode.next;
                        if ( !v11 )
                          break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_38:
    NiLeaveCriticalSection_0(&g_pathingMutex);
  }
}
