Tile *__usercall sub_5CFCE0@<eax>(double a1@<st2>, double a2@<st1>, double a3@<st0>, UInt32 a4)
{
  BSStringT *v6; // eax
  Tile *v7; // ebx
  void *ParentMenu; // eax
  Menu *v9; // eax
  Menu *v10; // esi
  int v11; // eax

  if ( !a4 )
    return 0;
  v6 = sub_5CE840(a1, a3, a2);
  v7 = (Tile *)v6;
  if ( v6 )
  {
    ParentMenu = (void *)Tile_GetParentMenu(v6);
    v9 = (Menu *)OblivionDynamicCast(
                   ParentMenu,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                   &RechargeMenu `RTTI Type Descriptor',
                   0);
    v10 = v9;
    if ( v9 )
    {
      v9[1].members.id = a4;
      sub_6AC3D0((_DWORD *)OSGlobals->sound);
      v11 = TESTopic::GEtTopic(5, 0xB);
      (*(void (__thiscall **)(UInt32, int, PlayerCharacter *, int, int, _DWORD))(*(_DWORD *)a4 + 0xDC))(
        a4,
        v11,
        TESDataHandler_g_PlayerRef,
        1,
        1,
        0);
      Tile_SetFloat(v7, (_DWORD *)0xFAE, 1.0);
      sub_5CEF60(v10, 0);
      NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>(
        (NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *)v10,
        a1,
        a2,
        1.0,
        1);
      EnableMenu(v10, a1, a2, 1.0, 0);
    }
  }
  return v7;
}
