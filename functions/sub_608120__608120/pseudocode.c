int __cdecl sub_608120(int a1, char a2)
{
  _DWORD *v2; // ebx
  Actor *v3; // eax
  Actor *i; // esi
  ActorVtbl *vtbl; // edi
  void *v6; // eax
  Actor *v7; // eax
  Actor *v8; // eax
  Actor *v9; // edi
  ActorVtbl *v10; // esi
  void *v11; // eax
  float v13; // [esp+8h] [ebp-4h]

  v13 = 0.0;
  v2 = 0;
  v3 = sub_673A50(&ActorProcessManager_ptr, 1);
  for ( i = sub_7616D0((ActorList *)v3); i; i = *(Actor **)&i->members.super.super.super.type )
  {
    if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl )
      break;
    vtbl = i->vtbl;
    if ( i->vtbl )
    {
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x3A))(i->vtbl) )
      {
        v6 = OblivionDynamicCast(
               vtbl,
               0,
               (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
               &ArrowProjectile `RTTI Type Descriptor',
               0);
        if ( v6 )
        {
          if ( v13 < (double)*((float *)v6 + 0x1A) && *((_DWORD *)v6 + 0x18) == 2 )
          {
            v2 = v6;
            v13 = *((float *)v6 + 0x1A);
          }
        }
      }
    }
  }
  v7 = sub_673A50(&ActorProcessManager_ptr, 0);
  v8 = sub_7616D0((ActorList *)v7);
  v9 = v8;
  if ( v2 )
    goto LABEL_23;
  if ( v8 )
  {
    do
    {
      if ( !*(_DWORD *)&v9->members.super.super.super.type && !v9->vtbl )
        break;
      v10 = v9->vtbl;
      if ( v9->vtbl )
      {
        if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v10->super.super.super.super.InitializeComponent + 0x3A))(v9->vtbl) )
        {
          v11 = OblivionDynamicCast(
                  v10,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                  &ArrowProjectile `RTTI Type Descriptor',
                  0);
          if ( v11 )
          {
            if ( v13 < (double)*((float *)v11 + 0x1A) && *((_DWORD *)v11 + 0x18) == 2 )
            {
              v2 = v11;
              v13 = *((float *)v11 + 0x1A);
            }
          }
        }
      }
      v9 = *(Actor **)&v9->members.super.super.super.type;
    }
    while ( v9 );
    if ( v2 )
    {
LABEL_23:
      if ( a2 )
      {
        (*(void (__thiscall **)(_DWORD *, int))(*v2 + 0x8C))(v2, 1);
        return dword_B3B7D0 - 1;
      }
      v2[0x18] = 3;
    }
  }
  return dword_B3B7D0 - 1;
}
