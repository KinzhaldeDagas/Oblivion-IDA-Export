Tile *__usercall sub_5CFB50@<eax>(char di0@<dil>, double st5_0@<st2>, double a3@<st0>, double a4@<st1>, Sky *a5)
{
  BSStringT *v6; // eax
  Tile *v7; // edi
  void *ParentMenu; // eax
  Menu *v9; // esi
  const char *v10; // eax
  char *v11; // eax
  int SoulLevel; // eax
  int SoulValueFromLevel; // eax
  char *m_data; // ebx
  float a2; // [esp+0h] [ebp-34h]
  BSStringT v16; // [esp+18h] [ebp-1Ch] BYREF
  BSStringT v17; // [esp+20h] [ebp-14h] BYREF
  int v18; // [esp+30h] [ebp-4h]

  if ( !a5 )
    return 0;
  v6 = sub_5CE840(st5_0, a3, a4);
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
  }
  else
  {
    v9 = 0;
  }
  if ( !TESHealthForm_GetHealth(a5) )
    sub_60D020(a5, 1);
  if ( v9 )
  {
    __asm { fldz }
    __asm { fstp    [esp+34h+a2]; a3 }
    v9[1].members.unk1C = (UInt32)a5;
    Tile_SetFloat(v7, (_DWORD *)0xFAE, a2);
    v16.m_data = 0;
    v16.m_dataLen = 0;
    v16.m_bufLen = 0;
    v10 = (const char *)LODWORD(a5->nodeMoonsRoot->members.super.m_localTransform.rot.data[2][1]);
    v18 = 0;
    if ( !v10 )
      v10 = EmptyString;
    BSStringT_Static_Format(&v16, "%s\\%s", "Icons", v10);
    Tile_SetString(v7, (_DWORD *)0xFAF, v16.m_data);
    v11 = sub_488DF0((EntryData *)a5);
    Tile_SetString(v7, (_DWORD *)0xFB0, v11);
    v17.m_data = 0;
    v17.m_dataLen = 0;
    v17.m_bufLen = 0;
    LOBYTE(v18) = 1;
    SoulLevel = EnchantmentMenu_SoulGemInfo_GetSoulLevel((ExtraDataList ***)a5);
    SoulValueFromLevel = Actor::GetSoulValueFromLevel(SoulLevel);
    v9[1].members.unk24 = SoulValueFromLevel;
    BSStringT_Static_Format(&v17, "%d %s", SoulValueFromLevel, (const char *)sMagicEffectItemPointsPlural);
    m_data = v17.m_data;
    Tile_SetString(v7, (_DWORD *)0xFB2, v17.m_data);
    NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>(
      (NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *)v9,
      st5_0,
      a4,
      a3,
      1);
    EnableMenu(v9, st5_0, a4, a3, 0);
    FormHeapFree((unsigned int)m_data);
    FormHeapFree((unsigned int)v16.m_data);
  }
  return v7;
}
