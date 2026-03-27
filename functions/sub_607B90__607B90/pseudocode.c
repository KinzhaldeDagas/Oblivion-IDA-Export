void __cdecl sub_607B90(_DWORD *a1, char a2)
{
  int v2; // ebx
  _DWORD *i; // edi
  _DWORD *v4; // esi
  int v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // eax
  Actor *v8; // eax
  Actor *v9; // ebp
  ActorVtbl *v10; // edi
  char v11; // bl
  _DWORD *v12; // eax
  _DWORD *v13; // esi
  int v14; // eax
  _DWORD *v15; // ecx
  Actor *v16; // eax
  Actor *v17; // ebp
  ActorVtbl *vtbl; // edi
  char v19; // bl
  _DWORD *v20; // eax
  _DWORD *v21; // esi
  int v22; // eax
  _DWORD *v23; // ecx
  char v24; // [esp+Bh] [ebp-5h]
  Actor *v25; // [esp+Ch] [ebp-4h]
  Actor *v26; // [esp+Ch] [ebp-4h]

  if ( a1 && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0xE8))(a1) )
  {
    v24 = 1;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) )
    {
      v2 = a1[0x16];
      if ( v2 )
      {
        if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 0x504))(a1[0x16]) )
        {
          for ( i = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x504))(v2); i; i = (_DWORD *)i[1] )
          {
            if ( !i[1] && !*i )
              break;
            v4 = (_DWORD *)*i;
            if ( *i )
            {
              v5 = v4[0x17];
              if ( v5 )
                v6 = *(_DWORD **)(v5 + 0x28);
              else
                v6 = 0;
              if ( v6 == a1 )
              {
                if ( v5 )
                  *(_DWORD *)(v5 + 0x28) = 0;
                if ( (v4[2] & 0x20) == 0 )
                {
                  if ( a2 )
                    (*(void (__thiscall **)(_DWORD *, int))(*v4 + 0x8C))(v4, 1);
                  else
                    v4[0x18] = 3;
                }
              }
              if ( (v4[2] & 0x20) != 0 )
                (*(void (__thiscall **)(_DWORD *, _DWORD))(*v4 + 0x150))(v4, 0);
            }
          }
          v7 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x504))(v2);
          BSSimpleList_Clear(v7);
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2) )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2) == 1 )
          {
LABEL_50:
            v16 = sub_673A50(&ActorProcessManager_ptr, 1);
            v26 = sub_7616D0((ActorList *)v16);
            v17 = v26;
            while ( v17 )
            {
              if ( !*(_DWORD *)&v17->members.super.super.super.type && !v17->vtbl )
                break;
              vtbl = v17->vtbl;
              v19 = 0;
              if ( !(*((unsigned __int8 (__thiscall **)(ActorVtbl *))v17->vtbl->super.super.super.super.InitializeComponent
                     + 0x3A))(v17->vtbl) )
                goto LABEL_68;
              v20 = OblivionDynamicCast(
                      vtbl,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                      &ArrowProjectile `RTTI Type Descriptor',
                      0);
              v21 = v20;
              if ( !v20 )
                goto LABEL_68;
              v22 = v20[0x17];
              v23 = v22 ? *(_DWORD **)(v22 + 0x28) : 0;
              if ( v23 == a1 )
              {
                if ( v22 )
                  *(_DWORD *)(v22 + 0x28) = 0;
                if ( ((int)vtbl->super.super.super.super.CopyFromBase & 0x20) == 0 )
                {
                  (*(void (__thiscall **)(_DWORD *, int))(*v21 + 0x8C))(v21, 1);
                  v19 = 1;
                }
              }
              if ( (v21[2] & 0x20) != 0 )
                (*(void (__thiscall **)(_DWORD *, _DWORD))(*v21 + 0x150))(v21, 0);
              if ( v19 )
              {
                if ( v17 != v26 )
                  v17 = *(Actor **)&v26->members.super.super.super.type;
              }
              else
              {
LABEL_68:
                v26 = v17;
                v17 = *(Actor **)&v17->members.super.super.super.type;
              }
            }
            return;
          }
        }
        else
        {
          v24 = 0;
        }
      }
    }
    v8 = sub_673A50(&ActorProcessManager_ptr, 0);
    v25 = sub_7616D0((ActorList *)v8);
    v9 = v25;
    while ( v9 )
    {
      if ( !*(_DWORD *)&v9->members.super.super.super.type && !v9->vtbl )
        break;
      v10 = v9->vtbl;
      v11 = 0;
      if ( !(*((unsigned __int8 (__thiscall **)(ActorVtbl *))v9->vtbl->super.super.super.super.InitializeComponent + 0x3A))(v9->vtbl) )
        goto LABEL_47;
      v12 = OblivionDynamicCast(
              v10,
              0,
              (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
              &ArrowProjectile `RTTI Type Descriptor',
              0);
      v13 = v12;
      if ( !v12 )
        goto LABEL_47;
      v14 = v12[0x17];
      v15 = v14 ? *(_DWORD **)(v14 + 0x28) : 0;
      if ( v15 == a1 )
      {
        if ( v14 )
          *(_DWORD *)(v14 + 0x28) = 0;
        if ( ((int)v10->super.super.super.super.CopyFromBase & 0x20) == 0 )
        {
          if ( a2 )
          {
            (*(void (__thiscall **)(_DWORD *, int))(*v13 + 0x8C))(v13, 1);
            v11 = 1;
          }
          else
          {
            v13[0x18] = 3;
          }
        }
      }
      if ( (v13[2] & 0x20) != 0 )
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v13 + 0x150))(v13, 0);
      if ( v11 )
      {
        if ( v9 != v25 )
          v9 = *(Actor **)&v25->members.super.super.super.type;
      }
      else
      {
LABEL_47:
        v25 = v9;
        v9 = *(Actor **)&v9->members.super.super.super.type;
      }
    }
    if ( v24 )
      goto LABEL_50;
  }
}
