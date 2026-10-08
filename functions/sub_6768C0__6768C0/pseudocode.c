void __usercall sub_6768C0(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  Actor *v3; // edi
  TESObjectREFR *vtbl; // esi
  double Distance; // st5

  v3 = ActorList_ReturnHead((ActorList *)(a1 + 0x68)); /*0x6768c9*/
  while ( v3 ) /*0x6768cd*/
  {
    if ( !v3->vtbl ) /*0x6768d0*/
      break; /*0x6768d4*/
    vtbl = 0; /*0x6768de*/
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v3->vtbl->super.super.super.super.InitializeComponent + 0x64))(v3->vtbl) ) /*0x6768e0*/
      vtbl = (TESObjectREFR *)v3->vtbl; /*0x6768e6*/
    v3 = *(Actor **)&v3->members.super.super.super.type; /*0x6768ea*/
    if ( vtbl ) /*0x6768ed*/
    {
      if ( !vtbl->vtbl->IsDead(vtbl, 0) ) /*0x6768fb*/
      {
        if ( sub_660E90((Actor *)vtbl) ) /*0x676908*/
        {
          Distance = TesObjectREF_GetDistance((TESObjectREFR *)reference, vtbl, 0); /*0x67691a*/
          if ( Distance > flt_A44F64 ) /*0x67692a*/
            sub_5F9200((PlayerCharacter *)vtbl, Distance, a2, a3, (TESObjectREFR *)reference); /*0x676934*/
        }
      }
    }
  }
}
