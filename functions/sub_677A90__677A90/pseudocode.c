void __thiscall ProcessLists_RebuildNearbyActorCandidates(_DWORD *this)
{
  int v2; // edi
  Actor *v3; // esi
  TESObjectREFR *i; // edi
  float *v5; // eax
  float Distance; // [esp+8h] [ebp-4h]

  if ( *(this + 0x19) ) /*0x677a94*/
  {
    do /*0x677ab4*/
    {
      v2 = *(_DWORD *)(*(this + 0x19) + 4); /*0x677aa3*/
      FormHeapFree(*(this + 0x19)); /*0x677aa7*/
      *(this + 0x19) = v2; /*0x677ab1*/
    }
    while ( v2 ); /*0x677ab4*/
  }
  *(this + 0x18) = 0; /*0x677ab9*/
  v3 = ActorList_ReturnHead((ActorList *)(this + 0x1A)); /*0x677ac5*/
  for ( i = 0; v3; v3 = *(Actor **)&v3->members.super.super.super.type ) /*0x677acb*/
  {
    if ( !*(_DWORD *)&v3->members.super.super.super.type && !v3->vtbl ) /*0x677ad6*/
      break; /*0x677ad9*/
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v3->vtbl->super.super.super.super.InitializeComponent + 0x64))(v3->vtbl) ) /*0x677ae5*/
      i = (TESObjectREFR *)v3->vtbl; /*0x677aeb*/
    if ( i ) /*0x677aef*/
    {
      Distance = TesObjectREF_GetDistance(i, (TESObjectREFR *)reference, 0); /*0x677b00*/
      if ( g_GameSettingStringPointers_B36CD8[0] > (double)Distance ) /*0x677b15*/
      {
        v5 = &qword_B3BB2C[0x8D]; /*0x677b17*/
        while ( *(TESObjectREFR **)v5 != i ) /*0x677b22*/
        {
          v5 = *((float **)v5 + 1); /*0x677b24*/
          if ( !v5 ) /*0x677b29*/
          {
            BSSimpleList_PushFront(&qword_B3BB2C[0x8D], (int)i); /*0x677b31*/
            break; /*0x677b31*/
          }
        }
      }
    }
  }
}
