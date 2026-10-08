signed int __usercall sub_5AA2A0@<eax>(int a1@<ebx>, float a2, float HealthFracOrUses)
{
  EntryData *v3; // esi
  EntryData *v4; // edi
  float v5; // eax
  int type; // edx
  float v7; // eax
  int v9; // eax
  int v10; // [esp-4h] [ebp-Ch]

  v3 = *(EntryData **)LODWORD(a2); /*0x5aa2a9*/
  v4 = *(EntryData **)LODWORD(HealthFracOrUses); /*0x5aa2ac*/
  v5 = COERCE_FLOAT(sub_485150(*(EntryData **)LODWORD(a2))); /*0x5aa2b0*/
  type = (int)v3->type; /*0x5aa2b5*/
  a2 = v5; /*0x5aa2b8*/
  sub_5AA210(&a2, type); /*0x5aa2c2*/
  v7 = COERCE_FLOAT(sub_485150(v4)); /*0x5aa2cc*/
  v10 = (int)v4->type; /*0x5aa2d4*/
  HealthFracOrUses = v7; /*0x5aa2da*/
  sub_5AA210(&HealthFracOrUses, v10); /*0x5aa2de*/
  if ( SLODWORD(a2) > SLODWORD(HealthFracOrUses) ) /*0x5aa2f0*/
    return 1; /*0x5aa2f0*/
  if ( SLODWORD(a2) < SLODWORD(HealthFracOrUses) ) /*0x5aa2f2*/
    return 0xFFFFFFFF; /*0x5aa2f9*/
  v9 = sub_584500((char *)&dword_B3B0B4[0xC9] + 3, a1, v3, v4); /*0x5aa301*/
  if ( v9 > 0 ) /*0x5aa308*/
    return 1; /*0x5aa308*/
  if ( v9 < 0 ) /*0x5aa30a*/
    return 0xFFFFFFFF; /*0x5aa30a*/
  HealthFracOrUses = ContainerEntryExtraData_GetHealthFracOrUses((void **)&v3->extendData, 1, 0, 0.0); /*0x5aa31b*/
  a2 = ContainerEntryExtraData_GetHealthFracOrUses((void **)&v4->extendData, 1, 0, 0.0); /*0x5aa32e*/
  if ( HealthFracOrUses < (double)a2 ) /*0x5aa341*/
    return 1; /*0x5aa341*/
  if ( HealthFracOrUses > (double)a2 ) /*0x5aa356*/
    return 0xFFFFFFFF; /*0x5aa356*/
  if ( !ContainerEntryExtraData_HasWorn(v3, 0) && ContainerEntryExtraData_HasWorn(v4, 0) ) /*0x5aa369*/
    return 1; /*0x5aa348*/
  if ( ContainerEntryExtraData_HasWorn(v3, 0) && !ContainerEntryExtraData_HasWorn(v4, 0) ) /*0x5aa38a*/
    return 0xFFFFFFFF; /*0x5aa38a*/
  return 0; /*0x5aa2f4*/
}
