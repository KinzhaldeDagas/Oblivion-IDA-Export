void __cdecl sub_4DE010(Atmosphere *a1, int a2)
{
  NiAVObject *v2; // edi
  PlayerCharacter *v3; // esi
  int v4; // eax
  int v5; // eax
  NiAVObject *v6; // eax

  if ( preventHavokAddAll )
  {
    v6 = sub_452A60(a1);
    v6->members.m_flags = v6->members.m_flags & 0xFFE9 | 0x10;
    *(_BYTE *)(a2 + 4) = 0;
  }
  else if ( preventHavokAddClutter
         && a1
         && (v2 = sub_452A60(a1), (v3 = sub_4DC270((int)v2)) != 0)
         && v3->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v3)
         && (v4 = (int)v3->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v3),
             TESContainer_IsInventoryItemType(*(_BYTE *)(v4 + 4)))
         && (v3->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v3)->member.type != kFormType_Light
          || (v5 = (int)v3->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v3)) == 0
          || (*(_DWORD *)(v5 + 0x7C) & 2) != 0) )
  {
    v2->members.m_flags = v2->members.m_flags & 0xFFE9 | 0x10;
    *(_BYTE *)(a2 + 4) = 0;
  }
  else
  {
    sub_88A870((int)a1, (_DWORD *)a2);
  }
}
