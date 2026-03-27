signed int __cdecl sub_5AA2A0(float a1, float HealthFracOrUses)
{
  EntryData *v2; // esi
  EntryData *v3; // edi
  float v4; // eax
  int type; // edx
  float v6; // eax
  int v8; // eax
  int v9; // [esp-4h] [ebp-Ch]

  v2 = *(EntryData **)LODWORD(a1);
  v3 = *(EntryData **)LODWORD(HealthFracOrUses);
  v4 = COERCE_FLOAT(sub_485150(*(EntryData **)LODWORD(a1)));
  type = (int)v2->type;
  a1 = v4;
  sub_5AA210(&a1, type);
  v6 = COERCE_FLOAT(sub_485150(v3));
  v9 = (int)v3->type;
  HealthFracOrUses = v6;
  sub_5AA210(&HealthFracOrUses, v9);
  if ( SLODWORD(a1) > SLODWORD(HealthFracOrUses) )
    return 1;
  if ( SLODWORD(a1) < SLODWORD(HealthFracOrUses) )
    return 0xFFFFFFFF;
  v8 = sub_584500(&byte_B3B3DB, v2, v3);
  if ( v8 > 0 )
    return 1;
  if ( v8 < 0 )
    return 0xFFFFFFFF;
  HealthFracOrUses = ContainerEntryExtraData_GetHealthFracOrUses((void **)&v2->extendData, 1, 0, 0.0);
  a1 = ContainerEntryExtraData_GetHealthFracOrUses((void **)&v3->extendData, 1, 0, 0.0);
  if ( HealthFracOrUses < (double)a1 )
    return 1;
  if ( HealthFracOrUses > (double)a1 )
    return 0xFFFFFFFF;
  if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v2, 0)
    && (unsigned __int8)ContainerEntryExtraData_HasWorn(v3, 0) )
  {
    return 1;
  }
  if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v2, 0)
    && !(unsigned __int8)ContainerEntryExtraData_HasWorn(v3, 0) )
  {
    return 0xFFFFFFFF;
  }
  return 0;
}
