int (__thiscall ***__cdecl sub_57CCC0(char a1))(void *, int)
{
  int (__thiscall ***result)(void *, int); // eax
  int (__thiscall **v2)(void *, int); // edi
  int (__thiscall *v3)(void *, int); // ebp
  int (__thiscall ***v4)(void *, int); // esi
  int ParentMenu; // eax
  int (__thiscall *v6)(void *, int); // eax
  void *v7; // ecx
  bool v8; // zf
  int (__thiscall *v9)(void *, int); // edi
  int (__thiscall **v10)(void *, int); // [esp+8h] [ebp-8h]
  void *node; // [esp+Ch] [ebp-4h] BYREF

  unk_B3A6D4 = 1; /*0x57ccc9*/
  result = (int (__thiscall ***)(void *, int))InterfaceManager_GetSingleton(0, 1); /*0x57ccd0*/
  v2 = result[0x1A]; /*0x57ccd5*/
  v3 = v2[0xD]; /*0x57ccd8*/
  v10 = v2; /*0x57cce0*/
  if ( v3 ) /*0x57cce4*/
  {
    while ( 1 ) /*0x57ccf4*/
    {
      v4 = *((int (__thiscall ****)(void *, int))v3 + 2); /*0x57ccf4*/
      result = (int (__thiscall ***)(void *, int))((char *)v3 + 8); /*0x57ccf9*/
      v3 = *(int (__thiscall **)(void *, int))v3; /*0x57ccfc*/
      if ( v4 ) /*0x57ccff*/
      {
        result = (int (__thiscall ***)(void *, int))Tile_GetParentMenu(v4); /*0x57cd03*/
        if ( result ) /*0x57cd0a*/
        {
          ParentMenu = Tile_GetParentMenu(v4); /*0x57cd0e*/
          result = (int (__thiscall ***)(void *, int))((*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) /*0x57cd1c*/
                                                     - 0x3EA);
          switch ( (unsigned int)result ) /*0x57cd2d*/
          {
            case 0u: /*0x57cd2d*/
            case 1u: /*0x57cd2d*/
            case 2u: /*0x57cd2d*/
            case 5u: /*0x57cd2d*/
            case 0x14u: /*0x57cd2d*/
            case 0x15u: /*0x57cd2d*/
            case 0x2Bu: /*0x57cd2d*/
              break;
            case 8u: /*0x57cd2d*/
              if ( !a1 ) /*0x57cd39*/
                goto LABEL_8; /*0x57cd39*/
              break; /*0x57cd39*/
            default:
LABEL_8:
              v6 = v2[0xD]; /*0x57cd3b*/
              v7 = v2 + 0xC; /*0x57cd40*/
              if ( v6 ) /*0x57cd43*/
              {
                while ( 1 ) /*0x57cd45*/
                {
                  v8 = v4 == *((int (__thiscall ****)(void *, int))v6 + 2); /*0x57cd45*/
                  v9 = v6; /*0x57cd4b*/
                  v6 = *(int (__thiscall **)(void *, int))v6; /*0x57cd4d*/
                  if ( v8 ) /*0x57cd4f*/
                    break; /*0x57cd4f*/
                  if ( !v6 ) /*0x57cd53*/
                    goto LABEL_11; /*0x57cd53*/
                }
              }
              else
              {
LABEL_11:
                v9 = 0; /*0x57cd55*/
              }
              node = v9; /*0x57cd59*/
              if ( v9 ) /*0x57cd5d*/
                result = (int (__thiscall ***)(void *, int))NiTPointerList_RemoveNode(v7, &node); /*0x57cd64*/
              else
                result = v4; /*0x57cd6b*/
              if ( result ) /*0x57cd6f*/
                result = (int (__thiscall ***)(void *, int))(**result)(result, 1); /*0x57cd79*/
              break; /*0x57cd79*/
          }
        }
      }
      if ( !v3 ) /*0x57cd7d*/
        break; /*0x57cd7d*/
      v2 = v10; /*0x57ccf0*/
    }
  }
  unk_B3A6D4 = 0; /*0x57cd85*/
  return result; /*0x57cd84*/
}
