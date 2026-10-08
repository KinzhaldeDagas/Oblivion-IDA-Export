Tile *__usercall sub_5CFCE0@<eax>(double a1@<st2>, double a2@<st1>, double a3@<st0>, UInt32 a4)
{
  BSStringT *v5; // eax
  Tile *v6; // ebx
  void *ParentMenu; // eax
  Menu *v8; // eax
  Menu *v9; // esi
  TESTopic *Topic; // eax

  if ( !a4 ) /*0x5cfce7*/
    return 0; /*0x5cfce9*/
  v5 = sub_5CE840(a1, a3, a2); /*0x5cfcee*/
  v6 = (Tile *)v5; /*0x5cfcf3*/
  if ( v5 ) /*0x5cfcf7*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(v5); /*0x5cfd0e*/
    v8 = (Menu *)OblivionDynamicCast( /*0x5cfd14*/
                   ParentMenu,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                   &RechargeMenu `RTTI Type Descriptor',
                   0);
    v9 = v8; /*0x5cfd19*/
    if ( v8 ) /*0x5cfd20*/
    {
      v8[1].members.id = a4; /*0x5cfd22*/
      sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x5cfd2d*/
      Topic = TESTopic::GetTopic(DialogueType_Service, 0xB); /*0x5cfd36*/
      (*(void (__thiscall **)(UInt32, TESTopic *, PlayerCharacter *, int, int, _DWORD))(*(_DWORD *)a4 + 0xDC))( /*0x5cfd56*/
        a4,
        Topic,
        reference,
        1,
        1,
        0);
      Tile_SetFloat(v6, 0xFAEu, 1.0); /*0x5cfd67*/
      sub_5CEF60(v9, 0); /*0x5cfd70*/
      NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>( /*0x5cfd79*/
        (NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *)v9,
        1.0,
        1);
      EnableMenu(v9, a1, a2, 1.0, 0); /*0x5cfd82*/
    }
  }
  return v6; /*0x5cfceb*/
}
