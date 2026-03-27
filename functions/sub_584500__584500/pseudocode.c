int __thiscall sub_584500(char *this, EntryData *a2, EntryData *a3)
{
  CHAR *v4; // esi
  CHAR *v5; // eax
  int v6; // eax
  double v8; // st7
  float v9; // [esp+0h] [ebp-10h]
  float v10; // [esp+0h] [ebp-10h]
  double v11; // [esp+8h] [ebp-8h]
  double v12; // [esp+8h] [ebp-8h]
  double v13; // [esp+8h] [ebp-8h]
  double HealthFracOrUses; // [esp+8h] [ebp-8h]
  int v15; // [esp+14h] [ebp+4h]

  switch ( *this & 0x7F )
  {
    case 0:
      v4 = sub_488DF0(a3);
      v5 = sub_488DF0(a2);
      v6 = _mbsicmp((const unsigned __int8 *)v5, (const unsigned __int8 *)v4);
      return def_584518(this, v6, (int)a2, (int)a3);
    case 1:
      v11 = sub_488E50((void **)&a2->extendData, 0, 0, 0, v9);
      v8 = v11 - sub_488E50((void **)&a3->extendData, 0, 0, 0, v10);
      goto LABEL_7;
    case 2:
      v12 = sub_485260((void **)&a2->extendData, 0, 0, 0);
      v8 = v12 - sub_485260((void **)&a3->extendData, 0, 0, 0);
      goto LABEL_7;
    case 3:
      v13 = sub_4891C0(a2, 0, 0, 0);
      v8 = v13 - sub_4891C0(a3, 0, 0, 0);
      goto LABEL_7;
    case 4:
      HealthFracOrUses = ContainerEntryExtraData_GetHealthFracOrUses((void **)&a2->extendData, 1, 0, 0.0);
      v8 = HealthFracOrUses - ContainerEntryExtraData_GetHealthFracOrUses((void **)&a3->extendData, 1, 0, 0.0);
LABEL_7:
      *(float *)&v15 = v8;
      if ( *(float *)&v15 < 0.0 )
        return def_584518(this, 0xFFFFFFFF, v15, (int)a3);
      if ( *(float *)&v15 <= 0.0 )
LABEL_11:
        JUMPOUT(0x584610);
      return def_584518(this, 1, v15, (int)a3);
    default:
      goto LABEL_11;
  }
}
