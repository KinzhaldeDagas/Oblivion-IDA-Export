void __thiscall sub_676A40(ActorProcessManager *this)
{
  int i; // ebp
  Actor *ListHead; // eax
  Actor *v3; // ebx
  TESObjectREFR *vtbl; // esi
  TESObjectCELL *DwordAtOffset40; // edi
  int v7[3]; // [esp+14h] [ebp-Ch] BYREF
  NiPoint3 v8; // 0:^4.12

  for ( i = 0; i < 4; ++i ) /*0x676a4b*/
  {
    if ( !i ) /*0x676a52*/
    {
      ListHead = ActorProcessManager_GetListHead(this, 0); /*0x676a5d*/
      v3 = ActorList_ReturnHead((ActorList *)ListHead); /*0x676a69*/
      while ( v3 ) /*0x676a6d*/
      {
        if ( !v3->vtbl ) /*0x676a73*/
          break; /*0x676a77*/
        vtbl = 0; /*0x676a85*/
        if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v3->vtbl->super.super.super.super.InitializeComponent /*0x676a87*/
              + 0x64))(v3->vtbl) )
          vtbl = (TESObjectREFR *)v3->vtbl; /*0x676a8d*/
        v3 = *(Actor **)&v3->members.super.super.super.type; /*0x676a91*/
        if ( vtbl ) /*0x676a94*/
        {
          if ( !((int (__thiscall *)(TESObjectREFR *))vtbl->vtbl[2].super.Unk_0C)(vtbl) /*0x676ac3*/
            && TesObjectREF_GetDistance(vtbl, (TESObjectREFR *)reference, 0) < flt_A47800 )
          {
            DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(vtbl); /*0x676acc*/
            if ( DwordAtOffset40 ) /*0x676ad0*/
            {
              v8 = *(NiPoint3 *)vtbl->vtbl->GetPos(vtbl); /*0x676aec*/
              Actor_ChoosePathGridSteeringPosition(vtbl, (float *)v7, v8, DwordAtOffset40, 0.0, 0.0, 0); /*0x676b01*/
              ((void (__thiscall *)(TESObjectREFR *, int *))vtbl->vtbl[1].super.Unk_09)(vtbl, v7); /*0x676b15*/
            }
          }
        }
      }
    }
  }
}
