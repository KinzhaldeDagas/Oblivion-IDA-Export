Tile *__usercall sub_5CFB50@<eax>(
        char di0@<dil>,
        double st5_0@<st2>,
        double a3@<st0>,
        double a4@<st1>,
        TESHealthForm *a5)
{
  BSStringT *v6; // eax
  Tile *v7; // edi
  void *ParentMenu; // eax
  Menu *v9; // esi
  CHAR *CompareTo; // eax
  char *v11; // eax
  int SoulLevel; // eax
  const char *SoulValueFromLevel; // eax
  char *m_data; // ebx
  float a2; // [esp+0h] [ebp-34h]
  BSStringT v16; // [esp+18h] [ebp-1Ch] BYREF
  BSStringT v17; // [esp+20h] [ebp-14h] BYREF
  int v18; // [esp+30h] [ebp-4h]

  if ( !a5 ) /*0x5cfb7f*/
    return 0; /*0x5cfb81*/
  v6 = sub_5CE840(st5_0, a3, a4); /*0x5cfb97*/
  v7 = (Tile *)v6; /*0x5cfb9c*/
  if ( v6 ) /*0x5cfba0*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(v6); /*0x5cfbb0*/
    v9 = (Menu *)OblivionDynamicCast( /*0x5cfbbe*/
                   ParentMenu,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                   &RechargeMenu `RTTI Type Descriptor',
                   0);
  }
  else
  {
    v9 = 0; /*0x5cfbc2*/
  }
  if ( !TESHealthForm_GetHealth(a5) ) /*0x5cfbc6*/
    Shared_SetDwordAtOffset04(a5, 1); /*0x5cfbd3*/
  if ( v9 ) /*0x5cfbda*/
  {
    __asm { fldz } /*0x5cfbe0*/
    __asm { fstp    [esp+34h+a2]; value }
    *(_DWORD *)&v9[1].members.ownsTemplates = a5; /*0x5cfbed*/
    Tile_SetFloat(v7, 0xFAEu, a2); /*0x5cfbf0*/
    v16.m_data = 0; /*0x5cfbf5*/
    v16.m_dataLen = 0; /*0x5cfbf9*/
    v16.m_bufLen = 0; /*0x5cfbfe*/
    CompareTo = (CHAR *)a5[1].vtbl[4].CompareTo; /*0x5cfc06*/
    v18 = 0; /*0x5cfc0b*/
    if ( !CompareTo ) /*0x5cfc0f*/
      CompareTo = EmptyString; /*0x5cfc11*/
    BSStringT_Static_Format(&v16, "%s\\%s", "Icons", CompareTo); /*0x5cfc26*/
    Tile_SetString(v7, (_DWORD *)0xFAF, v16.m_data); /*0x5cfc3a*/
    v11 = sub_488DF0((EntryData *)a5); /*0x5cfc41*/
    Tile_SetString(v7, (_DWORD *)0xFB0, v11); /*0x5cfc4e*/
    v17.m_data = 0; /*0x5cfc53*/
    v17.m_dataLen = 0; /*0x5cfc57*/
    v17.m_bufLen = 0; /*0x5cfc5c*/
    LOBYTE(v18) = 1; /*0x5cfc63*/
    SoulLevel = EnchantmentMenu_SoulGemInfo_GetSoulLevel((ExtraDataList ***)a5); /*0x5cfc68*/
    SoulValueFromLevel = Actor::GetSoulValueFromLevel(SoulLevel); /*0x5cfc6e*/
    v9[1].members.fadeState = (OblivionMenuFadeState)SoulValueFromLevel; /*0x5cfc73*/
    BSStringT_Static_Format(&v17, "%d %s", SoulValueFromLevel, MEMORY[0xB33498].value); /*0x5cfc88*/
    m_data = v17.m_data; /*0x5cfc8d*/
    Tile_SetString(v7, (_DWORD *)0xFB2, v17.m_data); /*0x5cfc9c*/
    NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>( /*0x5cfca5*/
      (NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *)v9,
      a3,
      1);
    EnableMenu(v9, st5_0, a4, a3, 0); /*0x5cfcad*/
    FormHeapFree((unsigned int)m_data); /*0x5cfcb3*/
    FormHeapFree((unsigned int)v16.m_data); /*0x5cfcbd*/
  }
  return v7; /*0x5cfb83*/
}
