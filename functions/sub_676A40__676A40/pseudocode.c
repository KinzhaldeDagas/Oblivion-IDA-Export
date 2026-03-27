void __thiscall sub_676A40(ActorProcessManager *this)
{
  int i; // ebp
  Actor *v2; // eax
  Actor *v3; // ebx
  TESObjectREFR *vtbl; // esi
  TESObjectCELL *ParentCell; // edi
  int v6; // eax
  int v8[3]; // [esp+14h] [ebp-Ch] BYREF

  for ( i = 0; i < 4; ++i )
  {
    if ( !i )
    {
      v2 = sub_673A50(this, 0);
      v3 = sub_7616D0((ActorList *)v2);
      while ( v3 )
      {
        if ( !v3->vtbl )
          break;
        vtbl = 0;
        if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v3->vtbl->super.super.super.super.InitializeComponent
              + 0x64))(v3->vtbl) )
          vtbl = (TESObjectREFR *)v3->vtbl;
        v3 = *(Actor **)&v3->members.super.super.super.type;
        if ( vtbl )
        {
          if ( !((int (__thiscall *)(TESObjectREFR *))vtbl->vtbl[2].super.Unk_0C)(vtbl)
            && TesObjectREF_GetDistance(vtbl, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0) < flt_A47800 )
          {
            ParentCell = TESObjectREFR_GetParentCell(vtbl);
            if ( ParentCell )
            {
              v6 = (int)vtbl->vtbl->GetPos(vtbl);
              sub_5E2E20(vtbl, v8, *(_DWORD *)v6, *(_DWORD *)(v6 + 4), *(float *)(v6 + 8), ParentCell, 0.0, 0, 0);
              ((void (__thiscall *)(TESObjectREFR *, int *))vtbl->vtbl[1].super.Unk_09)(vtbl, v8);
            }
          }
        }
      }
    }
  }
}
