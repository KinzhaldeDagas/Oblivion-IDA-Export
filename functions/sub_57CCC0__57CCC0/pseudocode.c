int (__thiscall ***__cdecl sub_57CCC0(char a1))(void *, int)
{
  int (__thiscall ***result)(void *, int); // eax
  int (__thiscall **v6)(void *, int); // edi
  int (__thiscall *v7)(void *, int); // ebp
  int (__thiscall ***v8)(void *, int); // esi
  int ParentMenu; // eax
  NiTPointerList_Node_void *v10; // eax
  BSTextureManager *v11; // ecx
  bool v12; // zf
  NiTPointerList_Node_void *v13; // edi
  int (__thiscall **v14)(void *, int); // [esp+8h] [ebp-8h]
  NiTPointerList_Node_void *v15; // [esp+Ch] [ebp-4h] BYREF

  byte_B3A6D4 = 1;
  result = (int (__thiscall ***)(void *, int))InterfaceManager_GetSingleton(0, 1);
  v6 = result[0x1A];
  v7 = v6[0xD];
  v14 = v6;
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *((int (__thiscall ****)(void *, int))v7 + 2);
      result = (int (__thiscall ***)(void *, int))((char *)v7 + 8);
      v7 = *(int (__thiscall **)(void *, int))v7;
      if ( v8 )
      {
        result = (int (__thiscall ***)(void *, int))Tile_GetParentMenu(v8);
        if ( result )
        {
          ParentMenu = Tile_GetParentMenu(v8);
          result = (int (__thiscall ***)(void *, int))((*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu)
                                                     - 0x3EA);
          switch ( (unsigned int)result )
          {
            case 0u:
            case 1u:
            case 2u:
            case 5u:
            case 0x14u:
            case 0x15u:
            case 0x2Bu:
              break;
            case 8u:
              if ( !a1 )
                goto LABEL_8;
              break;
            default:
LABEL_8:
              v10 = (NiTPointerList_Node_void *)v6[0xD];
              v11 = (BSTextureManager *)(v6 + 0xC);
              if ( v10 )
              {
                while ( 1 )
                {
                  v12 = v8 == v10->data;
                  v13 = v10;
                  v10 = v10->next;
                  if ( v12 )
                    break;
                  if ( !v10 )
                    goto LABEL_11;
                }
              }
              else
              {
LABEL_11:
                v13 = 0;
              }
              v15 = v13;
              if ( v13 )
                result = (int (__thiscall ***)(void *, int))sub_7AA860(v11, &v15);
              else
                result = v8;
              if ( result )
                result = (int (__thiscall ***)(void *, int))(**result)(result, 1);
              break;
          }
        }
      }
      if ( !v7 )
        break;
      v6 = v14;
    }
  }
  byte_B3A6D4 = 0;
  return result;
}
