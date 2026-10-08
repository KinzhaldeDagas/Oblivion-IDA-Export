void __usercall sub_5DC950(Menu *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>)
{
  Menu *v4; // ebx
  void *v5; // eax
  char *v6; // esi
  int *v7; // eax
  int v8; // esi
  char v9; // al
  UINT32 IsFemale; // eax
  const unsigned __int8 *v11; // eax
  Tile *v12; // eax
  BSStringT *v13; // edi
  char *v14; // ebx
  int i; // edx
  char *v16; // eax
  char v17; // cl
  UINT32 v18; // eax
  char *v19; // eax
  UINT32 v20; // eax
  char *v21; // eax
  char *v22; // eax
  float a2; // [esp+0h] [ebp-124h]
  int v24; // [esp+14h] [ebp-110h]
  int *v25; // [esp+18h] [ebp-10Ch]
  char v27[255]; // [esp+20h] [ebp-104h] BYREF
  char v28; // [esp+11Fh] [ebp-5h]

  v4 = this; /*0x5dc968*/
  v24 = 0; /*0x5dc988*/
  v5 = (void *)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))reference->vtbl->super.super.super.GetBaseForm)( /*0x5dc990*/
                 reference,
                 a4,
                 a3,
                 st5_0);
  v6 = (char *)OblivionDynamicCast( /*0x5dc998*/
                 v5,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                 &TESNPC `RTTI Type Descriptor',
                 0);
  if ( v6 ) /*0x5dc99f*/
  {
    sub_5893F0(*(_DWORD **)&v4[1].members.ownsTemplates); /*0x5dc9a8*/
    v7 = (int *)(v6 + 0x3C); /*0x5dc9ad*/
    if ( v6 != (char *)0xFFFFFFC4 ) /*0x5dc9b2*/
    {
      while ( 1 ) /*0x5dc9c4*/
      {
        v8 = *v7; /*0x5dc9c4*/
        if ( !*v7 ) /*0x5dc9c4*/
          break; /*0x5dc9c4*/
        v25 = (int *)v7[1]; /*0x5dc9d3*/
        v9 = *(_BYTE *)(*(_DWORD *)v8 + 0x34); /*0x5dc9d7*/
        if ( (v9 & 8) == 0 && (v9 & 1) == 0 ) /*0x5dc9eb*/
        {
          IsFemale = Actor_IsFemale((Actor *)reference); /*0x5dc9f7*/
          v11 = (const unsigned __int8 *)sub_51F350(*(int **)v8, *(char *)(v8 + 4), IsFemale); /*0x5dca04*/
          if ( _mbscmp(v11, "DUMMY") ) /*0x5dca0f*/
          {
            v12 = Menu::RenderTemplate(v4, *(Tile **)&v4[1].members.ownsTemplates, "stat_faction_template", 0); /*0x5dca2c*/
            v13 = (BSStringT *)v12; /*0x5dca31*/
            if ( v12 ) /*0x5dca35*/
            {
              a2 = (float)v24; /*0x5dca42*/
              Tile_SetFloat(v12, 0xFAAu, a2); /*0x5dca4a*/
              ++v24; /*0x5dca51*/
              v14 = *(char **)(*(_DWORD *)v8 + 0x1C); /*0x5dca5e*/
              if ( !v14 ) /*0x5dca60*/
                v14 = EmptyString; /*0x5dca62*/
              for ( i = 0; i < 0x100; ++i ) /*0x5dca6d*/
              {
                v16 = &v27[i]; /*0x5dca71*/
                v17 = v27[i + v14 - v27]; /*0x5dca75*/
                v27[i] = v17; /*0x5dca7b*/
                if ( v17 == 0x20 ) /*0x5dca7d*/
                  *v16 = 0x5F; /*0x5dca7f*/
                if ( !*v16 ) /*0x5dca82*/
                  break; /*0x5dca85*/
              }
              v28 = 0; /*0x5dca9c*/
              BSStringT_Set(v13 + 1, v27, 0); /*0x5dcaa4*/
              Tile_SetString(v13, (_DWORD *)0xFAF, v14); /*0x5dcab1*/
              v18 = Actor_IsFemale((Actor *)reference); /*0x5dcabc*/
              v19 = (char *)sub_51F350(*(int **)v8, *(char *)(v8 + 4), v18); /*0x5dcac9*/
              Tile_SetString(v13, (_DWORD *)0xFB0, v19); /*0x5dcad6*/
              v20 = Actor_IsFemale((Actor *)reference); /*0x5dcae1*/
              v21 = (char *)sub_51F350(*(int **)v8, *(char *)(v8 + 4) + 1, v20); /*0x5dcaf1*/
              Tile_SetString(v13, (_DWORD *)0xFB1, v21); /*0x5dcafe*/
              v22 = sub_51F370(*(int **)v8, *(char *)(v8 + 4)); /*0x5dcb0a*/
              Tile_SetString(v13, (_DWORD *)0xFB2, v22); /*0x5dcb17*/
              a4 = fConstant_2; /*0x5dcb1c*/
              Tile_SetFloat((Tile *)v13, 0xFB3u, fConstant_2); /*0x5dcb2d*/
              v4 = this; /*0x5dcb32*/
            }
          }
        }
        if ( !v25 ) /*0x5dcb3b*/
          break; /*0x5dcb3b*/
        v7 = v25; /*0x5dc9c0*/
      }
    }
    sub_58FBA0(*(_DWORD *)&v4[1].members.ownsTemplates, st5_0, a3, a4, 0); /*0x5dcb48*/
  }
}
