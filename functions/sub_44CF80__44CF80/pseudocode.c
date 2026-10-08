void sub_44CF80()
{
  unsigned int v0; // ecx
  int v1; // eax
  bool v2; // zf
  int v3; // edx
  NiTMap_Entry_TESCELL *v4; // eax
  char *v5; // esi
  void *v6; // edi
  void *v7; // ebp
  _DWORD *v8; // eax
  _DWORD *v9; // ebx
  unsigned int v10; // eax
  CHAR *v11; // eax
  const char *v12; // eax
  CHAR *BipedIconPath; // edi
  char v14; // bl
  unsigned int v15; // eax
  int v16; // eax
  char v17; // di
  char *v18; // eax
  CHAR *v19; // eax
  CHAR *v20; // ebp
  char v21; // di
  char v22; // di
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

  if ( !byte_B055AC ) /*0x44cf94*/
  {
    v0 = MEMORY[0xB06140]; /*0x44cfa1*/
    v1 = 0; /*0x44cfa7*/
    v2 = MEMORY[0xB06140] == 0; /*0x44cfa9*/
    v36 = 0; /*0x44cfab*/
    if ( v2 ) /*0x44cfb3*/
    {
LABEL_6:
      v4 = 0; /*0x44cfd1*/
    }
    else
    {
      v3 = MEMORY[0xB06144]; /*0x44cfb5*/
      while ( !*(_DWORD *)(v3 + 4 * v1) ) /*0x44cfc4*/
      {
        if ( ++v1 >= v0 ) /*0x44cfcf*/
          goto LABEL_6; /*0x44cfcf*/
      }
      v4 = *(NiTMap_Entry_TESCELL **)(v3 + 4 * v1); /*0x44d093*/
    }
    v35 = v4; /*0x44cfd5*/
    while ( v35 ) /*0x44cfd8*/
    {
      NiTMap_U32Pointer_GetNextEntry((NiTMap_TESCELL *)&TESForm_FormIDMap, &v35, &v37, (TESObjectCELL **)&v36); /*0x44cff6*/
      v5 = (char *)v36; /*0x44cffb*/
      if ( v36 ) /*0x44d001*/
      {
        v6 = OblivionDynamicCast( /*0x44d02a*/
               v36,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESIcon `RTTI Type Descriptor',
               0);
        v7 = OblivionDynamicCast( /*0x44d040*/
               v5,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESTexture `RTTI Type Descriptor',
               0);
        v8 = OblivionDynamicCast( /*0x44d042*/
               v5,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESBipedModelForm `RTTI Type Descriptor',
               0);
        v9 = v8; /*0x44d04c*/
        if ( v6 ) /*0x44d04e*/
        {
          if ( !byte_B055B4 || v5[4] == 0x1A && (*((_DWORD *)v5 + 0x1F) & 2) == 0 ) /*0x44d070*/
            continue; /*0x44d070*/
          LOWORD(v10) = *((_WORD *)v6 + 4); /*0x44d076*/
          if ( (_WORD)v10 == 0xFFFF ) /*0x44d07e*/
            v10 = strlen(*((const char **)v6 + 1)); /*0x44d083*/
          else
            v10 = (unsigned __int16)v10; /*0x44d09b*/
          if ( v10 ) /*0x44d0a0*/
          {
            v11 = *((CHAR **)v6 + 1); /*0x44d0b6*/
            if ( !v11 ) /*0x44d0bb*/
              v11 = EmptyString; /*0x44d0bd*/
            v12 = (const char *)(*(int (__thiscall **)(void *, CHAR *))(*(_DWORD *)v6 + 0x14))(v6, v11); /*0x44d0ca*/
            _sprintf(v38, "%s%s", v12, v29); /*0x44d0d7*/
            if ( MEMORY[0xB33A04] && MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], v38, 0, 0, 0xFFFFFFFF) ) /*0x44d0f9*/
              continue; /*0x44d0fd*/
            BipedIconPath = *((CHAR **)v6 + 1); /*0x44d103*/
            v14 = v5[4]; /*0x44d108*/
            if ( !BipedIconPath ) /*0x44d10c*/
              BipedIconPath = EmptyString; /*0x44d112*/
            goto LABEL_54; /*0x44d117*/
          }
LABEL_50:
          v22 = v5[4]; /*0x44d27d*/
          v32 = (const char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 0xD4))(v5); /*0x44d28d*/
          FormTypeName = TESForm_GetFormTypeName(v22); /*0x44d28f*/
          PrintError("Icon missing for %s '%s'.", FormTypeName, v32); /*0x44d29d*/
          continue; /*0x44d2a5*/
        }
        if ( !v7 ) /*0x44d11e*/
        {
          if ( !v8 || !byte_B055B4 ) /*0x44d253*/
            continue; /*0x44d25a*/
          BipedIconPath = TESBipedModelForm_GetBipedIconPath(v8, 0); /*0x44d269*/
          if ( strlen(BipedIconPath) ) /*0x44d26b*/
          {
            v24 = (const char *)(*(int (__thiscall **)(_DWORD *, CHAR *))(v9[0x1A] + 0x14))(v9 + 0x1A, BipedIconPath); /*0x44d2b1*/
            _sprintf(v38, "%s%s", v24, v33); /*0x44d2be*/
            if ( MEMORY[0xB33A04] && MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], v38, 0, 0, 0xFFFFFFFF) ) /*0x44d2e0*/
              continue; /*0x44d2e4*/
            v14 = v5[4]; /*0x44d2e6*/
LABEL_54:
            v34 = (*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 0xD4))(v5); /*0x44d2ea*/
            v28 = TESForm_GetFormTypeName(v14); /*0x44d300*/
            PrintError("Icon '%s' missing for %s '%s'.", BipedIconPath, v28, v34); /*0x44d307*/
            continue; /*0x44d307*/
          }
          goto LABEL_50; /*0x44d27b*/
        }
        if ( byte_B055BC ) /*0x44d124*/
        {
          LOWORD(v15) = *((_WORD *)v7 + 4); /*0x44d131*/
          if ( (_WORD)v15 == 0xFFFF ) /*0x44d139*/
            v15 = strlen(*((const char **)v7 + 1)); /*0x44d13e*/
          else
            v15 = (unsigned __int16)v15; /*0x44d14e*/
          if ( v15 ) /*0x44d153*/
          {
            v19 = *((CHAR **)v7 + 1); /*0x44d1a8*/
            if ( v5[4] == 0xE ) /*0x44d1ab*/
            {
              if ( !v19 ) /*0x44d1d0*/
                v19 = EmptyString; /*0x44d1d2*/
              v26 = (*(int (__thiscall **)(void *, CHAR *))(*(_DWORD *)v7 + 0x14))(v7, v19); /*0x44d1e2*/
              _sprintf(v38, "%s\\Landscape\\%s", v26); /*0x44d1ed*/
            }
            else
            {
              if ( !v19 ) /*0x44d1af*/
                v19 = EmptyString; /*0x44d1b1*/
              v25 = (*(int (__thiscall **)(void *, CHAR *))(*(_DWORD *)v7 + 0x14))(v7, v19); /*0x44d1c1*/
              _sprintf(v38, "%s%s", v25); /*0x44d1cc*/
            }
            if ( !MEMORY[0xB33A04] || !MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], v38, 0, 0, 0xFFFFFFFF) ) /*0x44d20f*/
            {
              v20 = *((CHAR **)v7 + 1); /*0x44d219*/
              v21 = v5[4]; /*0x44d21e*/
              if ( !v20 ) /*0x44d222*/
                v20 = EmptyString; /*0x44d224*/
              v31 = (*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 0xD4))(v5); /*0x44d235*/
              v27 = TESForm_GetFormTypeName(v21); /*0x44d23f*/
              PrintError("Texture '%s' missing for %s '%s'.", v20, v27, v31); /*0x44d246*/
            }
            continue; /*0x44d246*/
          }
          v16 = (unsigned __int8)v5[4]; /*0x44d155*/
          if ( v16 != 5 ) /*0x44d15c*/
          {
            if ( v16 == 0x35 ) /*0x44d161*/
              continue; /*0x44d161*/
LABEL_34:
            v17 = v5[4]; /*0x44d177*/
            v30 = (const char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 0xD4))(v5); /*0x44d187*/
            v18 = TESForm_GetFormTypeName(v17); /*0x44d189*/
            PrintError("Texture missing for %s '%s'.", v18, v30); /*0x44d197*/
            continue; /*0x44d19f*/
          }
          if ( TESClass_IsPlayable(v5) ) /*0x44d16a*/
            goto LABEL_34; /*0x44d171*/
        }
      }
    }
  }
}
