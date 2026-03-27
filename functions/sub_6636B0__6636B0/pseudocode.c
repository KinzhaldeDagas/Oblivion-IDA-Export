void sub_6636B0()
{
  TESObjectREFR **v0; // edi
  Actor **v1; // esi

  v0 = sub_6758E0((int)TESDataHandler_g_PlayerRef, 0xC, 0);
  v1 = (Actor **)v0;
  LOBYTE(TESDataHandler_g_PlayerRef->unk738) = 0;
  if ( v0 )
  {
    while ( !*v1 || !(*v1)->vtbl->super.super.IsActor((TESObjectREFR *)*v1) || !*v1 || !sub_5E6C60(*v1) )
    {
      v1 = (Actor **)v1[1];
      if ( !v1 )
      {
        BSSimpleList_Clear(v0);
        FormHeapFree((unsigned int)v0);
        return;
      }
    }
    LOBYTE(TESDataHandler_g_PlayerRef->unk738) = 1;
    BSSimpleList_Clear(v0);
    FormHeapFree((unsigned int)v0);
  }
}
