Actor *__thiscall sub_676480(int this, TESObjectREFR *reference)
{
  Actor *vtbl; // esi
  Actor *v3; // ebp
  TESForm *ActorBaseForm; // eax
  TESForm *v6; // [esp-Ch] [ebp-18h]
  Actor *v7; // [esp+8h] [ebp-4h]

  vtbl = 0; /*0x676483*/
  v7 = 0; /*0x676488*/
  v3 = ActorList_ReturnHead((ActorList *)(this + 0x68)); /*0x676491*/
  if ( !v3 ) /*0x676495*/
    return 0; /*0x67658e*/
  while ( v3->vtbl && !vtbl ) /*0x6764b4*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v3->vtbl->super.super.super.super.InitializeComponent + 0x64))(v3->vtbl) ) /*0x6764c2*/
      vtbl = (Actor *)v3->vtbl; /*0x6764c8*/
    if ( vtbl ) /*0x6764cf*/
    {
      if ( TESObjectREFR_IsOwnedBy(reference, (TESObjectREFR *)vtbl, 1) ) /*0x6764da*/
      {
        v6 = reference->vtbl->GetBaseForm(reference); /*0x6764ef*/
        ActorBaseForm = Actor_GetActorBaseForm(vtbl, 0); /*0x6764f4*/
        if ( TESAIForm_OffersServiceForItem(&ActorBaseForm[4].member.flags, (int)v6) ) /*0x6764fe*/
          v7 = vtbl; /*0x676507*/
      }
    }
    v3 = *(Actor **)&v3->members.super.super.super.type; /*0x676577*/
    if ( !v3 ) /*0x67657c*/
      return v7; /*0x67658b*/
    vtbl = v7; /*0x6764a3*/
  }
  return vtbl; /*0x676588*/
}
