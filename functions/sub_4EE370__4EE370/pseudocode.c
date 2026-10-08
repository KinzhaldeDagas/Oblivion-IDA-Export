char __thiscall sub_4EE370(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // ebp
  int v5; // eax
  TESForm *v6; // edi
  TESForm *v7; // ebx
  int v8; // edx
  TESForm *v9; // eax
  int v10; // ecx
  TESForm *i; // eax
  TESFormVtbl *vtbl; // edx
  TESFormVtbl *v13; // ecx
  unsigned int j; // eax
  int v15; // esi
  unsigned int v16; // eax
  unsigned __int8 *v17; // ecx
  unsigned __int8 *v18; // edx
  unsigned int v19; // eax
  unsigned __int8 *v20; // ecx
  unsigned __int8 *v21; // edx
  unsigned __int8 *v22; // ecx
  unsigned __int8 *v23; // edx
  int v24; // eax
  signed int v25; // esi
  TESForm *v28; // [esp+10h] [ebp+4h]

  v3 = (TESForm *)OblivionDynamicCast( /*0x4ee38c*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESWeather `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4ee391*/
  v28 = v3; /*0x4ee398*/
  if ( v3 ) /*0x4ee39c*/
  {
    v6 = v3 + 0xB; /*0x4ee3a7*/
    v7 = this + 0xB; /*0x4ee3ad*/
    v8 = 0; /*0x4ee3b3*/
    v9 = v3 + 0xB; /*0x4ee3b7*/
    if ( v4 != (TESForm *)0xFFFFFEF8 ) /*0x4ee3b9*/
    {
      do /*0x4ee3cd*/
      {
        if ( v9->vtbl ) /*0x4ee3c0*/
          ++v8; /*0x4ee3c5*/
        v9 = *(TESForm **)&v9->member.type; /*0x4ee3c8*/
      }
      while ( v9 ); /*0x4ee3cd*/
    }
    v10 = 0; /*0x4ee3cf*/
    for ( i = v7; i; i = *(TESForm **)&i->member.type ) /*0x4ee3d5*/
    {
      if ( i->vtbl ) /*0x4ee3d7*/
        ++v10; /*0x4ee3dc*/
    }
    if ( v8 == v10 ) /*0x4ee3e8*/
    {
      if ( v4 != (TESForm *)0xFFFFFEF8 ) /*0x4ee3f1*/
      {
        do /*0x4ee3f9*/
        {
          if ( !v7 ) /*0x4ee3f9*/
            break; /*0x4ee3f9*/
          vtbl = v6->vtbl; /*0x4ee3ff*/
          if ( !v6->vtbl ) /*0x4ee3ff*/
            break; /*0x4ee3ff*/
          v13 = v7->vtbl; /*0x4ee409*/
          if ( !v7->vtbl ) /*0x4ee409*/
            break; /*0x4ee409*/
          for ( j = 8; j >= 4; j -= 4 ) /*0x4ee413*/
          {
            if ( vtbl->super.InitializeComponent != v13->super.InitializeComponent ) /*0x4ee41c*/
              goto LABEL_20; /*0x4ee41c*/
            v13 = (TESFormVtbl *)((char *)v13 + 4); /*0x4ee421*/
            vtbl = (TESFormVtbl *)((char *)vtbl + 4); /*0x4ee424*/
          }
          if ( !j ) /*0x4ee42e*/
            goto LABEL_30; /*0x4ee42e*/
LABEL_20:
          v15 = LOBYTE(vtbl->super.InitializeComponent) - LOBYTE(v13->super.InitializeComponent); /*0x4ee430*/
          if ( !v15 ) /*0x4ee438*/
          {
            v16 = j - 1; /*0x4ee43a*/
            v17 = (unsigned __int8 *)&v13->super.InitializeComponent + 1; /*0x4ee43d*/
            v18 = (unsigned __int8 *)&vtbl->super.InitializeComponent + 1; /*0x4ee440*/
            if ( !v16 ) /*0x4ee445*/
              goto LABEL_29; /*0x4ee445*/
            v15 = *v18 - *v17; /*0x4ee44d*/
            if ( !v15 ) /*0x4ee44f*/
            {
              v19 = v16 - 1; /*0x4ee451*/
              v20 = v17 + 1; /*0x4ee454*/
              v21 = v18 + 1; /*0x4ee457*/
              if ( !v19 /*0x4ee47d*/
                || (v15 = *v21 - *v20) == 0 && ((v22 = v20 + 1, v23 = v21 + 1, v19 == 1) || (v15 = *v23 - *v22) == 0) )
              {
LABEL_29:
                v4 = v28; /*0x4ee491*/
LABEL_30:
                v24 = 0; /*0x4ee495*/
                goto LABEL_31; /*0x4ee495*/
              }
            }
          }
          v4 = v28; /*0x4ee481*/
          v24 = 1; /*0x4ee485*/
          if ( v15 <= 0 ) /*0x4ee48a*/
            v24 = 0xFFFFFFFF; /*0x4ee48c*/
LABEL_31:
          if ( v24 ) /*0x4ee499*/
            goto LABEL_39; /*0x4ee499*/
          v6 = *(TESForm **)&v6->member.type; /*0x4ee49f*/
          v7 = *(TESForm **)&v7->member.type; /*0x4ee4a4*/
        }
        while ( v6 ); /*0x4ee3f9*/
      }
      v25 = 0; /*0x4ee4ad*/
      while ( !(*(unsigned __int8 (__thiscall **)(char *, int))(*((_DWORD *)this + 3 * v25 + 6) + 0xC))( /*0x4ee4cb*/
                 (char *)this + 0xC * v25 + 0x18,
                 (int)&v4[1] + 0xC * v25) )
      {
        v25 = (v25 + 1) % 3u; /*0x4ee4dd*/
        if ( v25 >= 2 ) /*0x4ee4e2*/
        {
          if ( TESForm_CompareAllComponentsTo(this, v4) /*0x4ee749*/
            || (*(unsigned __int8 (__thiscall **)(TESForm *, TESForm *))(*((_DWORD *)this + 0xC) + 0xC))(
                 this + 2,
                 v4 + 2)
            || memcmp(this + 3, &v4[3], 0xFu)
            || memcmp((char *)this + 0x68, &v4[4].member.flags, 0xA0u)
            || memcmp((char *)this + 0x58, &v4[3].member.modlist, 0x10u)
            || (v5 = memcmp((char *)this + 0x110, &v4[0xB].member.flags, 0x38u)) != 0 )
          {
            LOBYTE(v5) = 1; /*0x4ee756*/
          }
          return v5; /*0x4ee75d*/
        }
      }
LABEL_39:
      LOBYTE(v5) = 1; /*0x4ee58b*/
    }
    else
    {
      LOBYTE(v5) = 1; /*0x4ee762*/
    }
  }
  else
  {
    LOBYTE(v5) = 1; /*0x4ee39f*/
  }
  return v5; /*0x4ee39e*/
}
