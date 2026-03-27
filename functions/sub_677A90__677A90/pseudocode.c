void __thiscall sub_677A90(_DWORD *this)
{
  int v2; // edi
  Actor *v3; // esi
  TESObjectREFR *i; // edi
  tListActor *p_highActors; // eax
  float Distance; // [esp+8h] [ebp-4h]

  if ( *(this + 0x19) )
  {
    do
    {
      v2 = *(_DWORD *)(*(this + 0x19) + 4);
      FormHeapFree(*(this + 0x19));
      *(this + 0x19) = v2;
    }
    while ( v2 );
  }
  *(this + 0x18) = 0;
  v3 = sub_7616D0((ActorList *)(this + 0x1A));
  for ( i = 0; v3; v3 = *(Actor **)&v3->members.super.super.super.type )
  {
    if ( !*(_DWORD *)&v3->members.super.super.super.type && !v3->vtbl )
      break;
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v3->vtbl->super.super.super.super.InitializeComponent + 0x64))(v3->vtbl) )
      i = (TESObjectREFR *)v3->vtbl;
    if ( i )
    {
      Distance = TesObjectREF_GetDistance(i, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0);
      if ( flt_B36CD8 > (double)Distance )
      {
        p_highActors = &ActorProcessManager_ptr.highActors;
        while ( (TESObjectREFR *)p_highActors->node.data != i )
        {
          p_highActors = (tListActor *)p_highActors->node.next;
          if ( !p_highActors )
          {
            BSSimpleList_PushFront(&ActorProcessManager_ptr.highActors.node.data, (int)i);
            break;
          }
        }
      }
    }
  }
}
