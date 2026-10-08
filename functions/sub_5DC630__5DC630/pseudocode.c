// Creates exactly 21 native Stats-menu skill rows (AV 0x0C..0x20). Major rows are placed first; every skill absent from majorSkills[7] is placed after the separator as non-major.
void __usercall StatsMenu_CreateSkillRows(Tile **this@<ecx>, double st7_0@<st0>)
{
  int v2; // esi
  Tile **v3; // ebx
  int v4; // edi
  SkillActorValue AVFromGroupOffset; // ebp
  TESClass *BaseClass; // eax
  BSStringT **v7; // edi
  int v8; // ebp
  BSStringT *v9; // esi
  int v10; // eax
  TESDataHandler *v11; // ecx
  _DWORD *v12; // edi
  CHAR *v13; // eax
  CHAR *v14; // ecx
  char *v15; // edx
  CHAR v16; // al
  char *v17; // eax
  char *v18; // ebx
  TESClass *v19; // eax
  const char *Name; // eax
  char *v21; // eax
  size_t v22; // [esp-4h] [ebp-158h]
  Tile *v23; // [esp+0h] [ebp-154h]
  float a2; // [esp+8h] [ebp-14Ch]
  float a2a; // [esp+8h] [ebp-14Ch]
  float a2b; // [esp+8h] [ebp-14Ch]
  float a2c; // [esp+8h] [ebp-14Ch]
  float a2d; // [esp+8h] [ebp-14Ch]
  int v29; // [esp+20h] [ebp-134h]
  int v30; // [esp+24h] [ebp-130h]
  BSStringT v31; // [esp+28h] [ebp-12Ch] BYREF
  Tile **v32; // [esp+30h] [ebp-124h]
  int BaseCalcAVi; // [esp+34h] [ebp-120h]
  Tile **v34; // [esp+38h] [ebp-11Ch]
  int v35; // [esp+3Ch] [ebp-118h]
  char Str[260]; // [esp+40h] [ebp-114h] BYREF
  unsigned int v37; // [esp+150h] [ebp-4h]

  v2 = 0; /*0x5dc66b*/
  v3 = this; /*0x5dc66d*/
  v34 = this; /*0x5dc66f*/
  v35 = 0; /*0x5dc673*/
  v4 = 0; /*0x5dc677*/
  do /*0x5dc6bc*/
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, v2); /*0x5dc691*/
    if ( Actor_GetBaseClass((Actor *)reference) ) /*0x5dc693*/
    {
      BaseClass = (TESClass *)Actor_GetBaseClass((Actor *)reference); /*0x5dc6a3*/
      if ( TESClass_IsMajorSkillAV(BaseClass, AVFromGroupOffset) )// Stats menu counts only native AVs matching majorSkills[7]; every failed match is displayed in the lower non-major section. /*0x5dc6aa*/
        ++v4; /*0x5dc6b3*/
    }
    ++v2; /*0x5dc6b6*/
  }
  while ( v2 < 0x15 ); /*0x5dc6bc*/
  v29 = v4; /*0x5dc6c1*/
  a2 = (float)v4; /*0x5dc6ca*/
  Tile_SetFloat(v3[0xC], 0xFB1u, a2); /*0x5dc6d2*/
  if ( v4 > 0 ) /*0x5dc6d9*/
    v29 = v4 + 1; /*0x5dc6de*/
  v7 = (BSStringT **)(v3 + 0x18); /*0x5dc6e2*/
  v8 = 0; /*0x5dc6e5*/
  v32 = v3 + 0x18; /*0x5dc6e7*/
  while ( 1 ) /*0x5dc704*/
  {
    v31.m_data = 0; /*0x5dc704*/
    v31.m_dataLen = 0; /*0x5dc708*/
    v31.m_bufLen = 0; /*0x5dc70d*/
    BSStringT_Set(&v31, "stat_skill_template", 0); /*0x5dc712*/
    v23 = v3[0xF]; /*0x5dc720*/
    v37 = 0; /*0x5dc723*/
    v9 = (BSStringT *)Menu::RenderTemplate((Menu *)v3, v23, v31.m_data, 0); /*0x5dc72f*/
    if ( !v9 ) /*0x5dc733*/
      break; /*0x5dc733*/
    if ( *v7 ) /*0x5dc739*/
      (*(void (__thiscall **)(BSStringT *, int))(*v7)->m_data)(*v7, 1); /*0x5dc745*/
    *v7 = v9; /*0x5dc74a*/
    v10 = ActorValue_GetAVFromGroupOffset(2, v8); /*0x5dc74c*/
    v11 = g_TESDataHandler; /*0x5dc751*/
    v12 = (_DWORD *)v10; /*0x5dc75a*/
    BaseCalcAVi = v10; /*0x5dc75d*/
    v13 = *(CHAR **)&TESDataHandler_GetTESSkillByCode(v11, v8)->formComponentsAndIcon[0x24]; /*0x5dc769*/
    if ( !v13 ) /*0x5dc76e*/
      v13 = EmptyString; /*0x5dc770*/
    v14 = v13; /*0x5dc775*/
    v15 = Str; /*0x5dc777*/
    do /*0x5dc78c*/
    {
      v16 = *v14; /*0x5dc780*/
      *v15++ = *v14++; /*0x5dc782*/
    }
    while ( v16 ); /*0x5dc78c*/
    v17 = strrchr(Str, 0x2E); /*0x5dc795*/
    v18 = v17; /*0x5dc79a*/
    if ( v17 ) /*0x5dc7a1*/
    {
      strcpy(v17 + 6, v17); /*0x5dc7ba*/
      LODWORD(v22) = 6; /*0x5dc7bf*/
      strncpy(v18, "_small", v22); /*0x5dc7c7*/
    }
    if ( Actor_GetBaseClass((Actor *)reference) /*0x5dc7ec*/
      && (v19 = (TESClass *)Actor_GetBaseClass((Actor *)reference), TESClass_IsMajorSkillAV(v19, (SkillActorValue)v12)) )// Place matching majors before the separator and all other native skills after it.
    {
      v30 = v35++; /*0x5dc7f9*/
    }
    else
    {
      v30 = v29++; /*0x5dc80a*/
    }
    Name = (const char *)ActorValue_GetName((unsigned int)v12); /*0x5dc816*/
    BSStringT_Set(v9 + 1, Name, 0); /*0x5dc825*/
    a2a = (float)v30; /*0x5dc831*/
    Tile_SetFloat((Tile *)v9, 0xFAAu, a2a); /*0x5dc839*/
    a2b = (float)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, _DWORD *, double@<st0>))reference->vtbl->super.GetActorValue)( /*0x5dc85a*/
                   reference,
                   v12,
                   st7_0);
    Tile_SetFloat((Tile *)v9, 0xFB1u, a2b); /*0x5dc862*/
    v21 = (char *)ActorValue_GetName((unsigned int)v12); /*0x5dc868*/
    Tile_SetString(v9, (_DWORD *)0xFB2, v21); /*0x5dc878*/
    Tile_SetString(v9, (_DWORD *)0xFB3, Str); /*0x5dc889*/
    a2c = (float)BaseCalcAVi; /*0x5dc895*/
    Tile_SetFloat((Tile *)v9, 0xFB4u, a2c); /*0x5dc89d*/
    BaseCalcAVi = Actor_GetBaseCalcAVi((int *)reference, 0, (int)v12, (int)v9, (int)v12); /*0x5dc8ae*/
    st7_0 = (double)BaseCalcAVi; /*0x5dc8b2*/
    a2d = st7_0; /*0x5dc8b9*/
    Tile_SetFloat((Tile *)v9, 0xFB5u, a2d); /*0x5dc8c1*/
    StatsMenu_UpdateAttributesAndSkills(v34, v12); /*0x5dc8cb*/
    v37 = 0xFFFFFFFF; /*0x5dc8d5*/
    FormHeapFree((unsigned int)v31.m_data); /*0x5dc8e0*/
    ++v32; /*0x5dc8e5*/
    ++v8; /*0x5dc8ea*/
    v31.m_data = 0; /*0x5dc8f3*/
    v31.m_bufLen = 0; /*0x5dc8f7*/
    v31.m_dataLen = 0; /*0x5dc8fc*/
    if ( v8 >= 0x15 ) /*0x5dc901*/
      return; /*0x5dc901*/
    v7 = (BSStringT **)v32; /*0x5dc6f0*/
    v3 = v34; /*0x5dc6f4*/
  }
  PrintError("Error creating skill item in Stats menu. Template not valid."); /*0x5dc90e*/
  FormHeapFree((unsigned int)v31.m_data); /*0x5dc918*/
}
