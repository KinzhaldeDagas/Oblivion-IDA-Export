int __userpurge sub_584500@<eax>(char *this@<ecx>, int a2@<ebx>, EntryData *a3, EntryData *a4)
{
  CHAR *v5; // esi
  CHAR *v6; // eax
  int v7; // eax
  double v9; // st7
  float v10; // [esp+0h] [ebp-10h]
  float v11; // [esp+0h] [ebp-10h]
  double v12; // [esp+8h] [ebp-8h]
  double v13; // [esp+8h] [ebp-8h]
  double v14; // [esp+8h] [ebp-8h]
  double HealthFracOrUses; // [esp+8h] [ebp-8h]
  int v16; // [esp+14h] [ebp+4h]

  switch ( *this & 0x7F ) /*0x584518*/
  {
    case 0: /*0x584518*/
      v5 = sub_488DF0(a4); /*0x58452c*/
      v6 = sub_488DF0(a3); /*0x58452e*/
      v7 = _mbsicmp((const unsigned __int8 *)v6, (const unsigned __int8 *)v5); /*0x584535*/
      return def_584518(this, v7, (int)a3, (int)a4); /*0x58453f*/
    case 1: /*0x584518*/
      v12 = sub_488E50((void **)&a3->extendData, 0, 0, 0, v10); /*0x584553*/
      v9 = v12 - sub_488E50((void **)&a4->extendData, 0, 0, 0, v11); /*0x584566*/
      goto LABEL_7; /*0x58456a*/
    case 2: /*0x584518*/
      v13 = sub_485260((void **)&a3->extendData, 0, 0, 0); /*0x58457b*/
      v9 = v13 - sub_485260((void **)&a4->extendData, 0, 0, 0); /*0x58458e*/
      goto LABEL_7; /*0x584592*/
    case 3: /*0x584518*/
      v14 = Player_CalcInventoryEntryRating(a3, a2, 0, 0, 0); /*0x5845a3*/
      v9 = v14 - Player_CalcInventoryEntryRating(a4, a2, 0, 0, 0); /*0x5845b6*/
      goto LABEL_7; /*0x5845ba*/
    case 4: /*0x584518*/
      HealthFracOrUses = ContainerEntryExtraData_GetHealthFracOrUses((void **)&a3->extendData, 1, 0, 0.0); /*0x5845cd*/
      v9 = HealthFracOrUses - ContainerEntryExtraData_GetHealthFracOrUses((void **)&a4->extendData, 1, 0, 0.0); /*0x5845e2*/
LABEL_7:
      *(float *)&v16 = v9; /*0x5845e6*/
      if ( *(float *)&v16 < 0.0 ) /*0x5845f7*/
        return def_584518(this, 0xFFFFFFFF, v16, (int)a4); /*0x584600*/
      if ( *(float *)&v16 <= 0.0 ) /*0x584609*/
LABEL_11:
        JUMPOUT(0x584610); /*0x584610*/
      return def_584518(this, 1, v16, (int)a4);
    default:
      goto LABEL_11;
  }
}
