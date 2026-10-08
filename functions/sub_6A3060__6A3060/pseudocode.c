void __thiscall sub_6A3060(char *this)
{
  Actor *ListHead; // eax
  Actor *i; // ebx
  ActorVtbl *vtbl; // esi
  ActorVtbl *v5; // edi
  void *v6; // eax
  char *v7; // ecx
  Actor *v8; // eax
  Actor *j; // ebx
  ActorVtbl *v10; // esi
  ActorVtbl *v11; // edi
  void *v12; // eax
  char *v13; // ecx
  PlayerCharacter *v14; // ecx

  ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x6a306d*/
  if ( ListHead ) /*0x6a3074*/
  {
    for ( i = ActorList_ReturnHead((ActorList *)ListHead); i; i = *(Actor **)&i->members.super.super.super.type ) /*0x6a3085*/
    {
      vtbl = i->vtbl; /*0x6a3090*/
      if ( i->vtbl /*0x6a30a0*/
        && (*((unsigned __int8 (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) )
      {
        v5 = vtbl; /*0x6a30a6*/
      }
      else
      {
        v5 = 0; /*0x6a30aa*/
      }
      if ( vtbl /*0x6a30ba*/
        && (*((unsigned __int8 (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x3A))(vtbl) )
      {
        v6 = OblivionDynamicCast( /*0x6a30cf*/
               vtbl,
               0,
               (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
               &MagicProjectile `RTTI Type Descriptor',
               0);
      }
      else
      {
        v6 = 0; /*0x6a30d9*/
      }
      if ( v5 ) /*0x6a30dd*/
      {
        if ( this ) /*0x6a30e1*/
          sub_5E69E0(v5, (int)(this + 0xC)); /*0x6a30e9*/
        else
          sub_5E69E0(v5, 0); /*0x6a30f5*/
      }
      else if ( v6 ) /*0x6a30fe*/
      {
        if ( this ) /*0x6a3102*/
          v7 = this + 0xC; /*0x6a3104*/
        else
          v7 = 0; /*0x6a3109*/
        (*(void (__thiscall **)(void *, char *))(*(_DWORD *)v6 + 0x218))(v6, v7); /*0x6a3116*/
      }
    }
  }
  v8 = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 1); /*0x6a312a*/
  if ( v8 ) /*0x6a3131*/
  {
    for ( j = ActorList_ReturnHead((ActorList *)v8); j; j = *(Actor **)&j->members.super.super.super.type ) /*0x6a3142*/
    {
      v10 = j->vtbl; /*0x6a3148*/
      if ( j->vtbl /*0x6a3158*/
        && (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v10->super.super.super.super.InitializeComponent + 0x64))(j->vtbl) )
      {
        v11 = v10; /*0x6a315e*/
      }
      else
      {
        v11 = 0; /*0x6a3162*/
      }
      if ( v10 /*0x6a3172*/
        && (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v10->super.super.super.super.InitializeComponent + 0x3A))(v10) )
      {
        v12 = OblivionDynamicCast( /*0x6a3187*/
                v10,
                0,
                (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                &MagicProjectile `RTTI Type Descriptor',
                0);
      }
      else
      {
        v12 = 0; /*0x6a3191*/
      }
      if ( v11 ) /*0x6a3195*/
      {
        if ( this ) /*0x6a3199*/
          sub_5E69E0(v11, (int)(this + 0xC)); /*0x6a31a1*/
        else
          sub_5E69E0(v11, 0); /*0x6a31ad*/
      }
      else if ( v12 ) /*0x6a31b6*/
      {
        if ( this ) /*0x6a31ba*/
          v13 = this + 0xC; /*0x6a31bc*/
        else
          v13 = 0; /*0x6a31c1*/
        (*(void (__thiscall **)(void *, char *))(*(_DWORD *)v12 + 0x218))(v12, v13); /*0x6a31ce*/
      }
    }
  }
  v14 = reference; /*0x6a31db*/
  if ( reference ) /*0x6a31db*/
  {
    if ( this ) /*0x6a31e7*/
      sub_5E69E0(v14, (int)(this + 0xC)); /*0x6a31ed*/
    else
      sub_5E69E0(v14, 0); /*0x6a31fa*/
  }
}
