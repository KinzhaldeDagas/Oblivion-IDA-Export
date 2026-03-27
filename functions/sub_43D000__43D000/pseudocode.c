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
  int i; // ebx
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

  v8 = (char *)(*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x14))(a2);
  v9 = Str;
  do
  {
    v10 = *v8;
    *v9++ = *v8++;
  }
  while ( v10 );
  v11 = strrchr(Str, 0x5C);
  if ( a5 && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x198))(a5, 0) )
  {
    if ( v11 )
    {
      LODWORD(v36) = 8;
      if ( !_strnicmp(v11 + 1, "Skeleton", v36) )
      {
        LODWORD(v37) = 7;
        strcpy(v40, "Data\\");
        if ( _strnicmp(Str, "Meshes\\", v37) )
        {
          v12 = (char *)&v39 + 3;
          while ( *++v12 )
            ;
          strcpy(v12, "Meshes\\");
        }
        v14 = strlen(Str) + 1;
        v15 = (char *)&v39 + 3;
        while ( *++v15 )
          ;
        qmemcpy(v15, Str, v14);
        v17 = strrchr(v40, 0x5C);
        strcpy(v17, "\\Idle.KF");
        v18 = sub_431970(v40, Str, 1, 0);
        sub_43BDA0(this, (int)v18, a3, a4, 0);
        FormHeapFree((unsigned int)v18);
        strcpy(v17, "\\Death.KF");
        v19 = sub_431970(v40, Str, 1, 0);
        sub_43BDA0(this, (int)v19, a3, a4, 0);
        FormHeapFree((unsigned int)v19);
      }
    }
  }
  else
  {
    v20 = strrchr(Str, 0x5C);
    v21 = *this;
    v22 = v20;
    v39 = 0;
    if ( !(*(unsigned __int8 (__thiscall **)(int, char *, int *))(*(_DWORD *)v21 + 4))(v21, Str, &v39)
      && v22
      && (LODWORD(v36) = 8, !_strnicmp(v22 + 1, "Skeleton", v36))
      || a7 )
    {
      if ( a6 )
      {
        v23 = sub_435830(Str, 1);
        sub_43BDA0(this, (int)v23, a3, a4, 0);
        FormHeapFree((unsigned int)v23);
      }
    }
    v24 = (char *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESModel `RTTI Type Descriptor',
                    &TESAnimation `RTTI Type Descriptor',
                    0);
    v25 = v24;
    if ( v24 )
    {
      if ( TESAnimation_HasAnimations(v24) )
      {
        v26 = (char **)FormHeapAlloc(8u);
        if ( v26 )
        {
          *v26 = 0;
          v26[1] = 0;
          v27 = v26;
        }
        else
        {
          v27 = 0;
        }
        for ( i = sub_6899C0(v25); i; i = *(_DWORD *)(i + 4) )
        {
          v29 = *(const char **)i;
          v30 = (char *)FormHeapAlloc(*(_DWORD *)i + strlen(*(const char **)i) + 1 - *(_DWORD *)i);
          strcpy(v30, v29);
          if ( v30 )
          {
            if ( *v27 )
            {
              v31 = (char **)FormHeapAlloc(8u);
              if ( v31 )
              {
                *v31 = *v27;
                v31[1] = 0;
              }
              else
              {
                v31 = 0;
              }
              v31[1] = v27[1];
              v27[1] = (char *)v31;
            }
            *v27 = v30;
          }
        }
        v32 = (char *)(*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x14))(a2);
        v33 = v40;
        do
        {
          v34 = *v32;
          *v33++ = *v32++;
        }
        while ( v34 );
        v35 = strrchr(v40, 0x5C);
        if ( v35 )
          strcpy(v35, "\\SpecialAnims\\");
        sub_43BDA0(this, (int)v27, a3, a4, v40);
        FormHeapFree((unsigned int)v27);
      }
    }
  }
}
