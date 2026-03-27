void __usercall sub_6768C0(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  Actor *v4; // edi
  TESObjectREFR *vtbl; // esi
  double Distance; // st5

  v4 = sub_7616D0((ActorList *)(a1 + 0x68));
  while ( v4 )
  {
    if ( !v4->vtbl )
      break;
    vtbl = 0;
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v4->vtbl->super.super.super.super.InitializeComponent + 0x64))(v4->vtbl) )
      vtbl = (TESObjectREFR *)v4->vtbl;
    v4 = *(Actor **)&v4->members.super.super.super.type;
    if ( vtbl )
    {
      if ( !vtbl->vtbl->IsDead(vtbl, 0) )
      {
        if ( sub_660E90((Concurrency::details::SchedulerBase *)vtbl) )
        {
          Distance = TesObjectREF_GetDistance((TESObjectREFR *)TESDataHandler_g_PlayerRef, vtbl, 0);
          if ( Distance > flt_A44F64 )
            sub_5F9200((PlayerCharacter *)vtbl, Distance, a2, a3, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
        }
      }
    }
  }
}
