void __usercall sub_5DC630(Tile **this@<ecx>, double st6_0@<st1>, double a3@<st0>)
{
  int v4; // esi
  Tile **v5; // ebx
  int v6; // edi
  int AVFromGroupOffset; // ebp
  _DWORD *BaseClass; // eax
  double v9; // st5
  BSStringT **v10; // edi
  int v11; // ebp
  BSStringT *TileFromTemplate; // esi
  int v13; // eax
  char *v14; // ecx
  _DWORD *v15; // edi
  CHAR *v16; // eax
  CHAR *v17; // ecx
  char *v18; // edx
  CHAR v19; // al
  char *v20; // eax
  char *v21; // ebx
  _DWORD *v22; // eax
  const char *Name; // eax
  char *v24; // eax
  size_t v25; // [esp-4h] [ebp-158h]
  TileWindow *v26; // [esp+0h] [ebp-154h]
  size_t a2; // [esp+8h] [ebp-14Ch]
  float a2a; // [esp+8h] [ebp-14Ch]
  float a2b; // [esp+8h] [ebp-14Ch]
  float a2c; // [esp+8h] [ebp-14Ch]
  float a2d; // [esp+8h] [ebp-14Ch]
  float a2e; // [esp+8h] [ebp-14Ch]
  int v33; // [esp+20h] [ebp-134h]
  int v34; // [esp+24h] [ebp-130h]
  BSStringT v35; // [esp+28h] [ebp-12Ch] BYREF
  Tile **v36; // [esp+30h] [ebp-124h]
  int BaseCalcAVi; // [esp+34h] [ebp-120h]
  Tile **v38; // [esp+38h] [ebp-11Ch]
  int v39; // [esp+3Ch] [ebp-118h]
  char Str[260]; // [esp+40h] [ebp-114h] BYREF
  unsigned int v41; // [esp+150h] [ebp-4h]

  v4 = 0;
  v5 = this;
  v38 = this;
  v39 = 0;
  v6 = 0;
  do
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, v4);
    if ( Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef) )
    {
      BaseClass = (_DWORD *)Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef);
      if ( sub_51C090(BaseClass, AVFromGroupOffset) )
        ++v6;
    }
    ++v4;
  }
  while ( v4 < 0x15 );
  v33 = v6;
  v9 = (double)v6;
  a2a = v9;
  Tile_SetFloat(v5[0xC], (_DWORD *)0xFB1, a2a);
  if ( v6 > 0 )
    v33 = v6 + 1;
  v10 = (BSStringT **)(v5 + 0x18);
  v11 = 0;
  v36 = v5 + 0x18;
  while ( 1 )
  {
    v35.m_data = 0;
    v35.m_dataLen = 0;
    v35.m_bufLen = 0;
    BSStringT_Set(&v35, "stat_skill_template", 0);
    v26 = v5[0xF];
    v41 = 0;
    TileFromTemplate = (BSStringT *)Menu_CreateTileFromTemplate(v5, v9, st6_0, a3, v26, v35.m_data, 0);
    if ( !TileFromTemplate )
      break;
    if ( *v10 )
      (*(void (__thiscall **)(BSStringT *, int))(*v10)->m_data)(*v10, 1);
    *v10 = TileFromTemplate;
    v13 = ActorValue_GetAVFromGroupOffset(2, v11);
    v14 = (char *)TESDataHandler;
    v15 = (_DWORD *)v13;
    BaseCalcAVi = v13;
    v16 = *((CHAR **)TESDataHandler_GetTESSkillByCode(v14, v11) + 9);
    if ( !v16 )
      v16 = EmptyString;
    v17 = v16;
    v18 = Str;
    do
    {
      v19 = *v17;
      *v18++ = *v17++;
    }
    while ( v19 );
    v20 = strrchr(Str, 0x2E);
    v21 = v20;
    if ( v20 )
    {
      LODWORD(a2) = strlen(v20) + 1;
      memcpy(v21 + 6, v21, a2);
      LODWORD(v25) = 6;
      strncpy(v21, "_small", v25);
    }
    if ( Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef)
      && (v22 = (_DWORD *)Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef), sub_51C090(v22, (int)v15)) )
    {
      v34 = v39++;
    }
    else
    {
      v34 = v33++;
    }
    Name = (const char *)ActorValue_GetName((unsigned int)v15);
    BSStringT_Set(TileFromTemplate + 1, Name, 0);
    a2b = (float)v34;
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, a2b);
    a2c = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue((Actor *)TESDataHandler_g_PlayerRef, (AVCode)v15);
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, a2c);
    v24 = (char *)ActorValue_GetName((unsigned int)v15);
    Tile_SetString(TileFromTemplate, (_DWORD *)0xFB2, v24);
    Tile_SetString(TileFromTemplate, (_DWORD *)0xFB3, Str);
    a2d = (float)BaseCalcAVi;
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB4, a2d);
    BaseCalcAVi = Actor_GetBaseCalcAVi(v15);
    a3 = (double)BaseCalcAVi;
    a2e = a3;
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB5, a2e);
    sub_5DA1A0(v38, v15);
    v41 = 0xFFFFFFFF;
    FormHeapFree((unsigned int)v35.m_data);
    ++v36;
    ++v11;
    v35.m_data = 0;
    v35.m_bufLen = 0;
    v35.m_dataLen = 0;
    if ( v11 >= 0x15 )
      return;
    v10 = (BSStringT **)v36;
    v5 = v38;
  }
  PrintError("Error creating skill item in Stats menu. Template not valid.");
  FormHeapFree((unsigned int)v35.m_data);
}
