BSTreeNode_OblivionLayout_0F0 *__thiscall TESBoundObject_ActivatePickup(
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *this,
        TESObjectREFR *reference,
        int unused)
{
  double v3; // st5
  double v4; // st6
  double v5; // st7
  BSTreeNode_OblivionLayout_0F0 *result; // eax
  PlayerCharacter *v8; // edi
  signed __int16 ExtraCount; // ax
  bool v10; // zf
  int v11; // [esp+18h] [ebp+Ch]

  result = (BSTreeNode_OblivionLayout_0F0 *)OblivionDynamicCast( /*0x4b28f8*/
                                              (void *)unused,
                                              0,
                                              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                              &Actor `RTTI Type Descriptor',
                                              0);
  v8 = (PlayerCharacter *)result; /*0x4b28fd*/
  if ( result && reference ) /*0x4b290c*/
  {
    ExtraCount = ExtraDataList_GetExtraCount(&reference->member.baseExtraList);// Pickup obtains ExtraCount from the activated world reference and transfers that count through the activating Actor's pickup virtual. /*0x4b2911*/
    v10 = this->prefix_000_047[4] == 0x19; /*0x4b2916*/
    unused = ExtraCount; /*0x4b291d*/
    if ( v10 && v8 == ::reference && ExtraCount > 1 ) /*0x4b292e*/
    {
      LOBYTE(result) = sub_5C05D0(v3, v4, v5, (int)&unused, 0xFFFFFFFF, 0, ExtraCount, (int)reference); /*0x4b293b*/
    }
    else
    {
      result = (BSTreeNode_OblivionLayout_0F0 *)((int (__thiscall *)(PlayerCharacter *, TESObjectREFR *, _DWORD, int))v8->vtbl->super.Unk_B3)( /*0x4b295a*/
                                                  v8,
                                                  reference,
                                                  ExtraCount,
                                                  v11);// Transfer activated reference/count to Actor inventory. Recovery is ordinary base-object pickup, not restoration of the shooter's previously consumed stack entry.
      LOBYTE(result) = 1; /*0x4b295e*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x4b2966*/
  }
  return result; /*0x4b2943*/
}
