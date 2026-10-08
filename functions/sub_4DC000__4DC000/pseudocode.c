void __cdecl sub_4DC000(int a1, TESChildCELL *a2)
{
  if ( a2 ) /*0x4dc007*/
  {
    if ( a1 ) /*0x4dc010*/
    {
      if ( (PlayerCharacter *)a1 != reference /*0x4dc02c*/
        && !TESObjectREFR_IsPersistent((TESObjectREFR *)a2)
        && !(*((unsigned __int8 (__thiscall **)(TESChildCELL *))a2->vtbl + 0x1E))(a2) )
      {
        sub_424B60((ExtraDataList *)(a1 + 0x44), (BSExtraDataVtbl *)a2); /*0x4dc036*/
        ExtraDataList_SetItemDropper((ExtraDataList *)&a2[0x11], (BSExtraDataVtbl *)a1); /*0x4dc03f*/
        if ( !(*((unsigned __int8 (__thiscall **)(TESChildCELL *))a2->vtbl + 0x1E))(a2) ) /*0x4dc04b*/
          (*((void (__thiscall **)(TESChildCELL *, int))a2->vtbl + 0x10))(a2, 0x20000); /*0x4dc05d*/
      }
    }
  }
}
