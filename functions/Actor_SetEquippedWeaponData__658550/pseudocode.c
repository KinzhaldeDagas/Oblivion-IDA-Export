char __fastcall Actor_SetEquippedWeaponData(HighProcess *a1, int a2, EntryData *a3, _DWORD *a4)
{
  EntryData *equippedWeaponData; // edi
  TESForm *type; // ebp
  ActorAnimData *animData; // eax
  NiNode *RootNode; // ecx
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  char result; // al

  equippedWeaponData = a1->equippedWeaponData;
  if ( equippedWeaponData != a3 )
  {
    if ( equippedWeaponData )
    {
      ContainerEntryExtraData_DestroyDataTable((unsigned int *)a1->equippedWeaponData, a2);
      FormHeapFree((unsigned int)equippedWeaponData);
    }
    a1->equippedWeaponData = a3;
    a1->unk0F4 = 0;
    a1->unk0F5 = 0;
    if ( a3 )
    {
      type = a3->type;
      if ( type )
      {
        if ( LOBYTE(type[6].vtbl) == 4 )
        {
          a1->unk0F5 = 1;
        }
        else if ( LOBYTE(type[6].vtbl) == 5 )
        {
          a1->unk0F4 = 1;
        }
      }
    }
  }
  animData = a1->animData;
  if ( animData && a1->equippedWeaponData )
  {
    RootNode = animData->RootNode;
    if ( RootNode )
      sub_6541A0((int *)a1, (int)animData->manager, RootNode);
    else
      sub_6541A0((int *)a1, 0, a4);
    if ( a1->animData == Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0) )
    {
      v9 = *((_DWORD **)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1) + 1);
      v10 = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
      sub_6541A0((int *)a1, v10[0x26], v9);
    }
    return 1;
  }
  a1->unk0FC = 0;
  a1->unk100 = 0;
  a1->unk104 = 0;
  a1->unk108 = 0;
  a1->unk10C = 0;
  a1->unk110 = 0;
  if ( !TESDataHandler_g_PlayerRef )
    return 1;
  result = 1;
  if ( TESDataHandler_g_PlayerRef->super.super.super.process == a1 )
  {
    dword_B3BA84 = 0;
    dword_B3BA88 = 0;
    dword_B3BA8C = 0;
    dword_B3BA90 = 0;
    dword_B3BA94 = 0;
    dword_B3BA98 = 0;
  }
  return result;
}
