void __thiscall sub_43D000(int *this, void *a2, unsigned __int8 a3, volatile LONG *a4, int a5, char a6, char a7)
{
  char *v8; // eax
  char *v9; // edx
  char v10; // cl
  char *v11; // edi
  char *v12; // eax
  unsigned int v14; // eax
  char *v15; // edi
  char *v17; // esi
  char **v18; // edi
  char **v19; // esi
  char *v20; // eax
  int v21; // ecx
  char *v22; // esi
  char *v23; // esi
  char *v24; // eax
  char *v25; // esi
  char **v26; // eax
  char **v27; // ebp
  char *i; // ebx
  const char *v29; // esi
  char *v30; // edi
  char **v31; // eax
  char *v32; // eax
  char *v33; // edx
  char v34; // cl
  char *v35; // eax
  size_t v36; // [esp-4h] [ebp-230h]
  size_t v37; // [esp-4h] [ebp-230h]
  int v39; // [esp+1Ch] [ebp-210h] BYREF
  char v40[260]; // [esp+20h] [ebp-20Ch] BYREF
  char Str[260]; // [esp+124h] [ebp-108h] BYREF

  v8 = (char *)(*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x14))(a2); /*0x43d043*/
  v9 = Str; /*0x43d045*/
  do /*0x43d05c*/
  {
    v10 = *v8; /*0x43d050*/
    *v9++ = *v8++; /*0x43d052*/
  }
  while ( v10 ); /*0x43d05c*/
  v11 = strrchr(Str, 0x5C); /*0x43d072*/
  if ( a5 && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x198))(a5, 0) ) /*0x43d086*/
  {
    if ( v11 ) /*0x43d092*/
    {
      LODWORD(v36) = 8; /*0x43d098*/
      if ( !_strnicmp(v11 + 1, "Skeleton", v36) ) /*0x43d0a3*/
      {
        LODWORD(v37) = 7; /*0x43d0c0*/
        strcpy(v40, "Data\\"); /*0x43d0cf*/
        if ( _strnicmp(Str, "Meshes\\", v37) ) /*0x43d0d8*/
        {
          v12 = (char *)&v39 + 3; /*0x43d0e8*/
          while ( *++v12 ) /*0x43d0f8*/
            ; /*0x43d0f0*/
          strcpy(v12, "Meshes\\"); /*0x43d106*/
        }
        v14 = strlen(Str) + 1; /*0x43d11b*/
        v15 = (char *)&v39 + 3; /*0x43d123*/
        while ( *++v15 ) /*0x43d12e*/
          ; /*0x43d126*/
        qmemcpy(v15, Str, v14); /*0x43d135*/
        v17 = strrchr(v40, 0x5C); /*0x43d150*/
        strcpy(v17, "\\Idle.KF"); /*0x43d152*/
        v18 = ModelLoader_BuildFileListWildcard(v40, Str, 1, 0); /*0x43d185*/
        sub_43BDA0(this, (int)v18, a3, a4, 0); /*0x43d192*/
        FormHeapFree((unsigned int)v18); /*0x43d198*/
        strcpy(v17, "\\Death.KF"); /*0x43d1a3*/
        v19 = ModelLoader_BuildFileListWildcard(v40, Str, 1, 0); /*0x43d1d1*/
        sub_43BDA0(this, (int)v19, a3, a4, 0); /*0x43d1de*/
        FormHeapFree((unsigned int)v19); /*0x43d1e4*/
      }
    }
  }
  else
  {
    v20 = strrchr(Str, 0x5C); /*0x43d1f3*/
    v21 = *this; /*0x43d1f8*/
    v22 = v20; /*0x43d1fa*/
    v39 = 0; /*0x43d206*/
    if ( !(*(unsigned __int8 (__thiscall **)(int, char *, int *))(*(_DWORD *)v21 + 4))(v21, Str, &v39) /*0x43d240*/
      && v22
      && (LODWORD(v36) = 8, !_strnicmp(v22 + 1, "Skeleton", v36))
      || a7 )
    {
      if ( a6 ) /*0x43d24a*/
      {
        v23 = BuildKFListForModelDirectory(Str, 1); /*0x43d26a*/
        sub_43BDA0(this, (int)v23, a3, a4, 0); /*0x43d270*/
        FormHeapFree((unsigned int)v23); /*0x43d276*/
      }
    }
    v24 = (char *)OblivionDynamicCast( /*0x43d28b*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESModel `RTTI Type Descriptor',
                    &TESAnimation `RTTI Type Descriptor',
                    0);
    v25 = v24; /*0x43d290*/
    if ( v24 ) /*0x43d297*/
    {
      if ( TESAnimation_HasAnimations(v24) ) /*0x43d29f*/
      {
        v26 = (char **)FormHeapAlloc(8u); /*0x43d2ae*/
        if ( v26 ) /*0x43d2b8*/
        {
          *v26 = 0; /*0x43d2ba*/
          v26[1] = 0; /*0x43d2bc*/
          v27 = v26; /*0x43d2bf*/
        }
        else
        {
          v27 = 0; /*0x43d2c3*/
        }
        for ( i = EmbeddedList_GetHead(v25); i; i = *((char **)i + 1) ) /*0x43d2d0*/
        {
          v29 = *(const char **)i; /*0x43d2d2*/
          v30 = (char *)FormHeapAlloc(*(_DWORD *)i + strlen(*(const char **)i) + 1 - *(_DWORD *)i); /*0x43d2f4*/
          strcpy(v30, v29); /*0x43d2fb*/
          if ( v30 ) /*0x43d30e*/
          {
            if ( *v27 ) /*0x43d310*/
            {
              v31 = (char **)FormHeapAlloc(8u); /*0x43d318*/
              if ( v31 ) /*0x43d322*/
              {
                *v31 = *v27; /*0x43d327*/
                v31[1] = 0; /*0x43d329*/
              }
              else
              {
                v31 = 0; /*0x43d332*/
              }
              v31[1] = v27[1]; /*0x43d337*/
              v27[1] = (char *)v31; /*0x43d33a*/
            }
            *v27 = v30; /*0x43d33d*/
          }
        }
        v32 = (char *)(*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x14))(a2); /*0x43d350*/
        v33 = v40; /*0x43d352*/
        do /*0x43d362*/
        {
          v34 = *v32; /*0x43d356*/
          *v33++ = *v32++; /*0x43d358*/
        }
        while ( v34 ); /*0x43d362*/
        v35 = strrchr(v40, 0x5C); /*0x43d36b*/
        if ( v35 ) /*0x43d375*/
          strcpy(v35, "\\SpecialAnims\\"); /*0x43d37d*/
        sub_43BDA0(this, (int)v27, a3, a4, v40); /*0x43d3bc*/
        FormHeapFree((unsigned int)v27); /*0x43d3c2*/
      }
    }
  }
}
