void __thiscall sub_689C60(_DWORD *this)
{
  _DWORD *v1; // edi
  int *v2; // ebx
  _BYTE *v3; // eax
  ExtraTeleport *TeleportExtraData; // eax
  BSExtraData *p_super; // esi
  TESObjectCELL **v6; // eax
  int v7; // eax
  int *v8; // edi
  int *v9; // esi
  int *v10; // ebp
  TESObjectCELL **v11; // eax
  int v12; // eax
  char v13; // bl
  unsigned int v14; // esi
  int *v15; // eax
  int *v16; // edi
  unsigned int v17; // esi
  int v18; // [esp+8h] [ebp-Ch]
  int v20; // [esp+10h] [ebp-4h]

  v1 = this;
  v2 = (int *)*(this + 2);
  if ( v2 )
  {
    while ( v2[1] || *v2 )
    {
      v18 = *v2;
      v3 = (_BYTE *)sub_68B0F0((_BYTE *)*v2);
      if ( v3 )
      {
        TeleportExtraData = GetTeleportExtraData(v3);
        p_super = &TeleportExtraData->super;
        if ( TeleportExtraData )
        {
          if ( sub_42B410(&TeleportExtraData->super) )
          {
            v6 = (TESObjectCELL **)sub_42B410(p_super);
            sub_4D8AF0(v6);
            v20 = v7;
            if ( v7 )
            {
              v8 = v1 + 1;
              v9 = v8;
              v10 = 0;
              if ( v8 )
              {
                while ( (v9[1] || *v9) && v9 != v2 )
                {
                  v11 = (TESObjectCELL **)sub_68B0F0((_BYTE *)*v9);
                  if ( v11 )
                  {
                    sub_4D8AF0(v11);
                    if ( v12 == v20 )
                    {
                      v13 = 1;
                      if ( v10 )
                      {
                        do
                        {
                          v16 = (int *)v10[1];
                          v17 = *v16;
                          if ( *v16 == v18 )
                            v13 = 0;
                          if ( v17 )
                          {
                            sub_68B1C0(*v16);
                            FormHeapFree(v17);
                          }
                          BSSimpleList_Remove(v10, *v16);
                        }
                        while ( v10[1] && v13 );
                        v2 = (int *)v10[1];
                      }
                      else
                      {
                        do
                        {
                          v14 = *v8;
                          if ( *v8 == v18 )
                            v13 = 0;
                          if ( v14 )
                          {
                            sub_68B1C0(*v8);
                            FormHeapFree(v14);
                          }
                          v15 = (int *)v8[1];
                          if ( v15 )
                          {
                            v8[1] = v15[1];
                            *v8 = *v15;
                            FormHeapFree((unsigned int)v15);
                          }
                          else
                          {
                            *v8 = 0;
                          }
                        }
                        while ( (v8[1] || *v8) && v13 );
                        v2 = v8;
                      }
                      goto LABEL_18;
                    }
                  }
                  v10 = v9;
                  v9 = (int *)v9[1];
                  if ( !v9 )
                    break;
                }
              }
            }
          }
        }
      }
      v2 = (int *)v2[1];
LABEL_18:
      if ( !v2 )
        break;
      v1 = this;
    }
  }
}
