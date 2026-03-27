void __usercall sub_679A70(
        ActorProcessManager *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5@<ebx>,
        TESObjectREFR *a6@<ebp>,
        MobileObject *a7@<edi>)
{
  ActorProcessManager *v7; // esi
  int v8; // edi
  Actor *v9; // eax
  Actor *v10; // ebx
  Actor *i; // ebp
  int vtbl; // esi
  TESObjectCELL *v13; // eax
  int v14; // eax
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v16; // eax
  int v20; // [esp+4h] [ebp-8h]

  v7 = a1;
  if ( !byte_B3A6D4 )
  {
    v8 = 0;
    v20 = 0;
    do
    {
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          v9 = sub_673A50(v7, 1);
        }
        else if ( v8 == 2 )
        {
          v9 = sub_673A50(v7, 2);
        }
        else
        {
          v9 = sub_673A50(v7, 3);
        }
      }
      else
      {
        v9 = sub_673A50(v7, 0);
      }
      v10 = sub_7616D0((ActorList *)v9);
      for ( i = v10; v10; v8 = v20 )
      {
        if ( !v10->vtbl )
          break;
        vtbl = 0;
        if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v10->vtbl->super.super.super.super.InitializeComponent
              + 0x64))(v10->vtbl) )
          vtbl = (int)v10->vtbl;
        v10 = *(Actor **)&v10->members.super.super.super.type;
        if ( vtbl )
        {
          if ( !(*(int (__thiscall **)(int))(*(_DWORD *)vtbl + 0x154))(vtbl)
            || TESObjectREFR_GetParentCell((TESObjectREFR *)vtbl)
            && (v13 = TESObjectREFR_GetParentCell((TESObjectREFR *)vtbl), TESObjectCELL_IsProcessLevel_LowHigh(v13, 0)) )
          {
            if ( !(*(int (__thiscall **)(int))(*(_DWORD *)vtbl + 0x154))(vtbl) && !sub_4354F0(ModelLoaderPtr, vtbl) )
            {
              v14 = *(_DWORD *)(vtbl + 8);
              if ( (v14 & 0x800) == 0 && (v14 & 0x20) == 0 )
              {
                if ( TESObjectREFR_GetParentCell((TESObjectREFR *)vtbl) )
                {
                  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)vtbl);
                  if ( TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 1) )
                  {
                    v16 = TESObjectREFR_GetParentCell((TESObjectREFR *)vtbl);
                    sub_4D35D0(v16, a2, a3, a4, (TESObjectREFR *)vtbl);
                    v10 = i;
                  }
                }
              }
            }
          }
          else
          {
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)vtbl + 0x150))(vtbl, 0);
          }
        }
        v7 = a1;
      }
      v20 = ++v8;
    }
    while ( v8 < 4 );
    sub_441610(TES);
    sub_678750((int)v7, a5, a6, a7, (int)v7, a2, a3, a4);
  }
}
