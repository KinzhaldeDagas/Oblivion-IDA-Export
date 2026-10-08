void __cdecl sub_4DE010(Atmosphere *a1, int a2)
{
  NiAVObject *v2; // edi
  PlayerCharacter *v3; // esi
  int v4; // eax
  int v5; // eax
  NiAVObject *PointerAtOffset08; // eax

  if ( preventHavokAddAll ) /*0x4de010*/
  {
    PointerAtOffset08 = Shared_GetPointerAtOffset08(a1); /*0x4de0dc*/
    PointerAtOffset08->members.m_flags = PointerAtOffset08->members.m_flags & 0xFFE9 | 0x10; /*0x4de0f2*/
    *(_BYTE *)(a2 + 4) = 0; /*0x4de0f6*/
  }
  else if ( preventHavokAddClutter /*0x4de0a7*/
         && a1
         && (v2 = Shared_GetPointerAtOffset08(a1), (v3 = sub_4DC270((int)v2)) != 0)
         && v3->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v3)
         && (v4 = (int)v3->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v3),
             TESContainer_IsInventoryItemType(*(_BYTE *)(v4 + 4)))
         && (v3->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v3)->member.type != kFormType_Light
          || (v5 = (int)v3->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v3)) == 0
          || (*(_DWORD *)(v5 + 0x7C) & 2) != 0) )
  {
    v2->members.m_flags = v2->members.m_flags & 0xFFE9 | 0x10; /*0x4de0ba*/
    *(_BYTE *)(a2 + 4) = 0; /*0x4de0c0*/
  }
  else
  {
    sub_88A870((int)a1, (_DWORD *)a2); /*0x4de0cc*/
  }
}
