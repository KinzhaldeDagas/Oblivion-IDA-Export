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

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESWeather `RTTI Type Descriptor',
                    0);
  v4 = v3;
  v28 = v3;
  if ( v3 )
  {
    v6 = v3 + 0xB;
    v7 = this + 0xB;
    v8 = 0;
    v9 = v3 + 0xB;
    if ( v4 != (TESForm *)0xFFFFFEF8 )
    {
      do
      {
        if ( v9->vtbl )
          ++v8;
        v9 = *(TESForm **)&v9->member.type;
      }
      while ( v9 );
    }
    v10 = 0;
    for ( i = v7; i; i = *(TESForm **)&i->member.type )
    {
      if ( i->vtbl )
        ++v10;
    }
    if ( v8 == v10 )
    {
      if ( v4 != (TESForm *)0xFFFFFEF8 )
      {
        do
        {
          if ( !v7 )
            break;
          vtbl = v6->vtbl;
          if ( !v6->vtbl )
            break;
          v13 = v7->vtbl;
          if ( !v7->vtbl )
            break;
          for ( j = 8; j >= 4; j -= 4 )
          {
            if ( vtbl->super.InitializeComponent != v13->super.InitializeComponent )
              goto LABEL_20;
            v13 = (TESFormVtbl *)((char *)v13 + 4);
            vtbl = (TESFormVtbl *)((char *)vtbl + 4);
          }
          if ( !j )
            goto LABEL_30;
LABEL_20:
          v15 = LOBYTE(vtbl->super.InitializeComponent) - LOBYTE(v13->super.InitializeComponent);
          if ( !v15 )
          {
            v16 = j - 1;
            v17 = (unsigned __int8 *)&v13->super.InitializeComponent + 1;
            v18 = (unsigned __int8 *)&vtbl->super.InitializeComponent + 1;
            if ( !v16 )
              goto LABEL_29;
            v15 = *v18 - *v17;
            if ( !v15 )
            {
              v19 = v16 - 1;
              v20 = v17 + 1;
              v21 = v18 + 1;
              if ( !v19
                || (v15 = *v21 - *v20) == 0 && ((v22 = v20 + 1, v23 = v21 + 1, v19 == 1) || (v15 = *v23 - *v22) == 0) )
              {
LABEL_29:
                v4 = v28;
LABEL_30:
                v24 = 0;
                goto LABEL_31;
              }
            }
          }
          v4 = v28;
          v24 = 1;
          if ( v15 <= 0 )
            v24 = 0xFFFFFFFF;
LABEL_31:
          if ( v24 )
            goto LABEL_39;
          v6 = *(TESForm **)&v6->member.type;
          v7 = *(TESForm **)&v7->member.type;
        }
        while ( v6 );
      }
      v25 = 0;
      while ( !(*(unsigned __int8 (__thiscall **)(char *, int))(*((_DWORD *)this + 3 * v25 + 6) + 0xC))(
                 (char *)this + 0xC * v25 + 0x18,
                 (int)&v4[1] + 0xC * v25) )
      {
        v25 = (v25 + 1) % 3u;
        if ( v25 >= 2 )
        {
          if ( TESForm_CompareAllComponentsTo(this, v4)
            || (*(unsigned __int8 (__thiscall **)(TESForm *, TESForm *))(*((_DWORD *)this + 0xC) + 0xC))(
                 this + 2,
                 v4 + 2)
            || memcmp(this + 3, &v4[3], 0xFu)
            || memcmp((char *)this + 0x68, &v4[4].member.flags, 0xA0u)
            || memcmp((char *)this + 0x58, &v4[3].member.modlist, 0x10u)
            || (v5 = memcmp((char *)this + 0x110, &v4[0xB].member.flags, 0x38u)) != 0 )
          {
            LOBYTE(v5) = 1;
          }
          return v5;
        }
      }
LABEL_39:
      LOBYTE(v5) = 1;
    }
    else
    {
      LOBYTE(v5) = 1;
    }
  }
  else
  {
    LOBYTE(v5) = 1;
  }
  return v5;
}
