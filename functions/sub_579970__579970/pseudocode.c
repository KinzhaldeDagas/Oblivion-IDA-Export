_DWORD *__usercall sub_579970@<eax>(double a1@<st0>)
{
  _DWORD *result; // eax
  float *Singleton; // eax
  signed int ControlState; // ebx
  float *v6; // eax
  _DWORD *v7; // esi
  int *v8; // edi
  void *ParentMenu; // eax
  int v10; // ebx
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // ebx
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // [esp-10h] [ebp-14h]

  result = InterfaceManager_GetSingleton(0, 1);
  if ( result )
  {
    result = InterfaceManager_GetSingleton(0, 1);
    if ( result[7] )
    {
      Singleton = (float *)InterfaceManager_GetSingleton(0, 1);
      sub_57E7C0(Singleton);
      ControlState = InputGlobals::QueryControlState(OSGlobals->input, 4, 2);
      v6 = (float *)InterfaceManager_GetSingleton(0, 1);
      result = sub_581390(v6, 0);
      v7 = result;
      v8 = 0;
      if ( result )
      {
        ParentMenu = (void *)Tile_GetParentMenu(result);
        result = OblivionDynamicCast(
                   ParentMenu,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                   &MessageMenu `RTTI Type Descriptor',
                   0);
        v8 = result;
      }
      if ( v8 != (int *)dword_B3A6DC )
      {
        dword_B3A6DC = 0;
        dword_B3A6D8 = 0;
      }
      if ( !ControlState )
        goto LABEL_11;
      if ( !v8 )
        return result;
      result = (_DWORD *)sub_588B50(v7, 0xFA8);
      if ( result )
      {
        v10 = *v8;
        Tile_GetFloat(v7, 0xFA8);
        v11 = Double_To_SInt32(a1);
        result = (_DWORD *)(*(int (__thiscall **)(int *, int, _DWORD *))(v10 + 0xC))(v8, v11, v7);
        dword_B3A6D8 = 0;
        dword_B3A6DC = 0;
      }
      else
      {
LABEL_11:
        if ( v8 )
        {
          result = (_DWORD *)sub_588B50(v7, 0xFA8);
          if ( result )
          {
            v12 = (_DWORD *)dword_B3A6D8;
            if ( v7 != (_DWORD *)dword_B3A6D8 )
            {
              if ( v12 )
              {
                result = (_DWORD *)dword_B3A6DC;
                if ( dword_B3A6DC )
                {
                  v13 = *result;
                  v17 = dword_B3A6D8;
                  Tile_GetFloat(v12, 0xFA8);
                  v14 = Double_To_SInt32(a1);
                  result = (_DWORD *)(*(int (__thiscall **)(int, int, int))(v13 + 0x14))(dword_B3A6DC, v14, v17);
                }
              }
              if ( v7 )
              {
                v15 = *v8;
                Tile_GetFloat(v7, 0xFA8);
                v16 = Double_To_SInt32(a1);
                result = (_DWORD *)(*(int (__thiscall **)(int *, int, _DWORD *))(v15 + 0x10))(v8, v16, v7);
              }
              dword_B3A6D8 = (int)v7;
              dword_B3A6DC = (int)v8;
            }
          }
        }
      }
    }
  }
  return result;
}
