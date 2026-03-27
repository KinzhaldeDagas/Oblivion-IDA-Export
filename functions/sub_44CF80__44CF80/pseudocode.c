void sub_44CF80()
{
  unsigned int v0; // ecx
  int v1; // eax
  bool v2; // zf
  int v3; // edx
  NiTMap_Entry_TESCELL *v4; // eax
  unsigned __int8 *v5; // esi
  void *v6; // edi
  void *v7; // ebp
  _DWORD *v8; // eax
  _DWORD *v9; // ebx
  unsigned int v10; // eax
  CHAR *v11; // eax
  const char *v12; // eax
  CHAR *BipedIconPath; // edi
  unsigned __int8 v14; // bl
  unsigned int v15; // eax
  int v16; // eax
  unsigned __int8 v17; // di
  char *v18; // eax
  CHAR *v19; // eax
  CHAR *v20; // ebp
  unsigned __int8 v21; // di
  unsigned __int8 v22; // di
  char *FormTypeName; // eax
  const char *v24; // eax
  int v25; // [esp-8h] [ebp-12Ch]
  int v26; // [esp-8h] [ebp-12Ch]
  char *v27; // [esp-8h] [ebp-12Ch]
  char *v28; // [esp-8h] [ebp-12Ch]
  const char *v29; // [esp-4h] [ebp-128h]
  const char *v30; // [esp-4h] [ebp-128h]
  int v31; // [esp-4h] [ebp-128h]
  const char *v32; // [esp-4h] [ebp-128h]
  const char *v33; // [esp-4h] [ebp-128h]
  int v34; // [esp-4h] [ebp-128h]
  NiTMap_Entry_TESCELL *v35; // [esp+10h] [ebp-114h] BYREF
  void *v36; // [esp+14h] [ebp-110h] BYREF
  void *v37; // [esp+18h] [ebp-10Ch] BYREF
  char v38[260]; // [esp+1Ch] [ebp-108h] BYREF

  if ( !byte_B055AC )
  {
    v0 = dword_B06140;
    v1 = 0;
    v2 = dword_B06140 == 0;
    v36 = 0;
    if ( v2 )
    {
LABEL_6:
      v4 = 0;
    }
    else
    {
      v3 = dword_B06144;
      while ( !*(_DWORD *)(v3 + 4 * v1) )
      {
        if ( ++v1 >= v0 )
          goto LABEL_6;
      }
      v4 = *(NiTMap_Entry_TESCELL **)(v3 + 4 * v1);
    }
    v35 = v4;
    while ( v35 )
    {
      sub_452600((NiTMap_TESCELL *)&TESForm_FormIDMap, &v35, &v37, (TESObjectCELL **)&v36);
      v5 = (unsigned __int8 *)v36;
      if ( v36 )
      {
        v6 = OblivionDynamicCast(
               v36,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESIcon `RTTI Type Descriptor',
               0);
        v7 = OblivionDynamicCast(
               v5,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESTexture `RTTI Type Descriptor',
               0);
        v8 = OblivionDynamicCast(
               v5,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESBipedModelForm `RTTI Type Descriptor',
               0);
        v9 = v8;
        if ( v6 )
        {
          if ( !byte_B055B4 || v5[4] == 0x1A && (*((_DWORD *)v5 + 0x1F) & 2) == 0 )
            continue;
          LOWORD(v10) = *((_WORD *)v6 + 4);
          if ( (_WORD)v10 == 0xFFFF )
            v10 = strlen(*((const char **)v6 + 1));
          else
            v10 = (unsigned __int16)v10;
          if ( v10 )
          {
            v11 = *((CHAR **)v6 + 1);
            if ( !v11 )
              v11 = EmptyString;
            v12 = (const char *)(*(int (__thiscall **)(void *, CHAR *))(*(_DWORD *)v6 + 0x14))(v6, v11);
            _sprintf(v38, "%s%s", v12, v29);
            if ( OBSE_g_FileFinder && OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, v38, 0, 0, 0xFFFFFFFF) )
              continue;
            BipedIconPath = *((CHAR **)v6 + 1);
            v14 = v5[4];
            if ( !BipedIconPath )
              BipedIconPath = EmptyString;
            goto LABEL_54;
          }
LABEL_50:
          v22 = v5[4];
          v32 = (const char *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)v5 + 0xD4))(v5);
          FormTypeName = TESForm_GetFormTypeName(v22);
          PrintError("Icon missing for %s '%s'.", FormTypeName, v32);
          continue;
        }
        if ( !v7 )
        {
          if ( !v8 || !byte_B055B4 )
            continue;
          BipedIconPath = TESBipedModelForm_GetBipedIconPath(v8, 0);
          if ( strlen(BipedIconPath) )
          {
            v24 = (const char *)(*(int (__thiscall **)(_DWORD *, CHAR *))(v9[0x1A] + 0x14))(v9 + 0x1A, BipedIconPath);
            _sprintf(v38, "%s%s", v24, v33);
            if ( OBSE_g_FileFinder && OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, v38, 0, 0, 0xFFFFFFFF) )
              continue;
            v14 = v5[4];
LABEL_54:
            v34 = (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)v5 + 0xD4))(v5);
            v28 = TESForm_GetFormTypeName(v14);
            PrintError("Icon '%s' missing for %s '%s'.", BipedIconPath, v28, v34);
            continue;
          }
          goto LABEL_50;
        }
        if ( byte_B055BC )
        {
          LOWORD(v15) = *((_WORD *)v7 + 4);
          if ( (_WORD)v15 == 0xFFFF )
            v15 = strlen(*((const char **)v7 + 1));
          else
            v15 = (unsigned __int16)v15;
          if ( v15 )
          {
            v19 = *((CHAR **)v7 + 1);
            if ( v5[4] == 0xE )
            {
              if ( !v19 )
                v19 = EmptyString;
              v26 = (*(int (__thiscall **)(void *, CHAR *))(*(_DWORD *)v7 + 0x14))(v7, v19);
              _sprintf(v38, "%s\\Landscape\\%s", v26);
            }
            else
            {
              if ( !v19 )
                v19 = EmptyString;
              v25 = (*(int (__thiscall **)(void *, CHAR *))(*(_DWORD *)v7 + 0x14))(v7, v19);
              _sprintf(v38, "%s%s", v25);
            }
            if ( !OBSE_g_FileFinder || !OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, v38, 0, 0, 0xFFFFFFFF) )
            {
              v20 = *((CHAR **)v7 + 1);
              v21 = v5[4];
              if ( !v20 )
                v20 = EmptyString;
              v31 = (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)v5 + 0xD4))(v5);
              v27 = TESForm_GetFormTypeName(v21);
              PrintError("Texture '%s' missing for %s '%s'.", v20, v27, v31);
            }
            continue;
          }
          v16 = v5[4];
          if ( v16 != 5 )
          {
            if ( v16 == 0x35 )
              continue;
LABEL_34:
            v17 = v5[4];
            v30 = (const char *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)v5 + 0xD4))(v5);
            v18 = TESForm_GetFormTypeName(v17);
            PrintError("Texture missing for %s '%s'.", v18, v30);
            continue;
          }
          if ( TESClass_IsPlayable(v5) )
            goto LABEL_34;
        }
      }
    }
  }
}
