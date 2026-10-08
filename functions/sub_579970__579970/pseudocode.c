// [Controller decode 2026-07-09] Non-player QueryControlState consumer: Attack control 4 released dispatches MessageMenu cursor click/release.
double __usercall InterfaceManager_UpdateMessageMenuCursorClick@<st0>(double result@<st0>)
{
  float *Singleton; // eax
  signed int ControlState; // ebx
  float *v3; // eax
  BSFogProperty *v4; // eax
  BSFogProperty *v5; // esi
  int *v6; // edi
  void *ParentMenu; // eax
  int v8; // ebx
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // ebx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // [esp-10h] [ebp-14h]

  if ( InterfaceManager_GetSingleton(0, 1) && InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x579991*/
  {
    Singleton = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5799a0*/
    sub_57E7C0(Singleton); /*0x5799aa*/
    ControlState = InputGlobals::QueryControlState(MEMORY[0xB33398]->input, 4, 2); /*0x5799c4*/
    v3 = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5799c6*/
    v4 = sub_581390(v3, 0); /*0x5799d0*/
    v5 = v4; /*0x5799d5*/
    v6 = 0; /*0x5799d7*/
    if ( v4 ) /*0x5799db*/
    {
      ParentMenu = (void *)Tile_GetParentMenu(v4); /*0x5799eb*/
      v6 = (int *)OblivionDynamicCast( /*0x5799f9*/
                    ParentMenu,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                    &MessageMenu `RTTI Type Descriptor',
                    0);
    }
    if ( v6 != (int *)unk_B3A6DC ) /*0x579a01*/
    {
      unk_B3A6DC = 0; /*0x579a03*/
      unk_B3A6D8 = 0; /*0x579a09*/
    }
    if ( !ControlState ) /*0x579a11*/
      goto LABEL_11; /*0x579a11*/
    if ( !v6 ) /*0x579a15*/
      return result; /*0x579a15*/
    if ( sub_588B50(v5, 0xFA8) ) /*0x579a22*/
    {
      v8 = *v6; /*0x579a2b*/
      Tile_GetFloat(v5, 0xFA8); /*0x579a35*/
      v9 = Double_To_SInt32(result); /*0x579a3a*/
      (*(void (__thiscall **)(int *, int, BSFogProperty *))(v8 + 0xC))(v6, v9, v5); /*0x579a45*/
      unk_B3A6D8 = 0; /*0x579a4a*/
      unk_B3A6DC = 0; /*0x579a50*/
    }
    else
    {
LABEL_11:
      if ( v6 ) /*0x579a5a*/
      {
        if ( sub_588B50(v5, 0xFA8) ) /*0x579a63*/
        {
          v10 = (_DWORD *)unk_B3A6D8; /*0x579a6c*/
          if ( v5 != (BSFogProperty *)unk_B3A6D8 ) /*0x579a74*/
          {
            if ( v10 ) /*0x579a78*/
            {
              if ( unk_B3A6DC ) /*0x579a7a*/
              {
                v11 = *(_DWORD *)unk_B3A6DC; /*0x579a83*/
                v15 = unk_B3A6D8; /*0x579a85*/
                Tile_GetFloat(v10, 0xFA8); /*0x579a8b*/
                v12 = Double_To_SInt32(result); /*0x579a90*/
                (*(void (__thiscall **)(int, int, int))(v11 + 0x14))(unk_B3A6DC, v12, v15); /*0x579a9f*/
              }
            }
            if ( v5 ) /*0x579aa3*/
            {
              v13 = *v6; /*0x579aa5*/
              Tile_GetFloat(v5, 0xFA8); /*0x579aaf*/
              v14 = Double_To_SInt32(result); /*0x579ab4*/
              (*(void (__thiscall **)(int *, int, BSFogProperty *))(v13 + 0x10))(v6, v14, v5); /*0x579abf*/
            }
            unk_B3A6D8 = (int)v5; /*0x579ac1*/
            unk_B3A6DC = (int)v6; /*0x579ac7*/
          }
        }
      }
    }
  }
  return result; /*0x579a56*/
}
