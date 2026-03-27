void __cdecl sub_4DC000(int a1, TESForm *a2)
{
  if ( a2 )
  {
    if ( a1 )
    {
      if ( (PlayerCharacter *)a1 != TESDataHandler_g_PlayerRef
        && !TESObjectREFR_IsPersistent_((TESObjectREFR *)a2)
        && !((unsigned __int8 (__thiscall *)(TESForm *))a2->vtbl->Unk_1E)(a2) )
      {
        sub_424B60((ExtraDataList *)(a1 + 0x44), (int)a2);
        sub_4203E0((ExtraDataList *)&a2[2].member.modlist.next, (BSExtraDataVtbl *)a1);
        if ( !((unsigned __int8 (__thiscall *)(TESForm *))a2->vtbl->Unk_1E)(a2) )
          a2->vtbl->MarkAsModified(a2, 0x20000);
      }
    }
  }
}
