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
  Actor *ListHead; // eax
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
    v24 = 1; /*0x607bc1*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) )
    {
      v2 = a1[0x16]; /*0x607bd0*/
      if ( v2 )
      {
        if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 0x504))(a1[0x16]) ) /*0x607be5*/
        {
          for ( i = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x504))(v2); i; i = (_DWORD *)i[1] ) /*0x607bff*/
          {
            if ( !i[1] && !*i ) /*0x607c07*/
              break; /*0x607c0a*/
            v4 = (_DWORD *)*i; /*0x607c0c*/
            if ( *i ) /*0x607c0c*/
            {
              v5 = v4[0x17]; /*0x607c12*/
              if ( v5 ) /*0x607c17*/
                v6 = *(_DWORD **)(v5 + 0x28); /*0x607c19*/
              else
                v6 = 0; /*0x607c1e*/
              if ( v6 == a1 ) /*0x607c24*/
              {
                if ( v5 ) /*0x607c28*/
                  *(_DWORD *)(v5 + 0x28) = 0; /*0x607c2a*/
                if ( (v4[2] & 0x20) == 0 ) /*0x607c39*/
                {
                  if ( a2 ) /*0x607c40*/
                    (*(void (__thiscall **)(_DWORD *, int))(*v4 + 0x8C))(v4, 1); /*0x607c4e*/
                  else
                    v4[0x18] = 3; /*0x607c52*/
                }
              }
              if ( (v4[2] & 0x20) != 0 ) /*0x607c62*/
                (*(void (__thiscall **)(_DWORD *, _DWORD))(*v4 + 0x150))(v4, 0); /*0x607c70*/
            }
          }
          v7 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x504))(v2); /*0x607c83*/
          BSSimpleList_Clear(v7); /*0x607c87*/
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2) )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2) == 1 )
          {
LABEL_50:
            ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 1); /*0x607da6*/
            v26 = ActorList_ReturnHead((ActorList *)ListHead); /*0x607dbb*/
            v17 = v26; /*0x607dbf*/
            while ( v17 )
            {
              if ( !*(_DWORD *)&v17->members.super.super.super.type && !v17->vtbl ) /*0x607dcd*/
                break; /*0x607dd1*/
              vtbl = v17->vtbl; /*0x607dd7*/
              v19 = 0; /*0x607de4*/
              if ( !(*((unsigned __int8 (__thiscall **)(ActorVtbl *))v17->vtbl->super.super.super.super.InitializeComponent /*0x607de6*/
                     + 0x3A))(v17->vtbl) )
                goto LABEL_68; /*0x607de6*/
              v20 = OblivionDynamicCast( /*0x607dff*/
                      vtbl,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                      &ArrowProjectile `RTTI Type Descriptor',
                      0);
              v21 = v20; /*0x607e04*/
              if ( !v20 ) /*0x607e0b*/
                goto LABEL_68; /*0x607e0b*/
              v22 = v20[0x17]; /*0x607e0d*/
              v23 = v22 ? *(_DWORD **)(v22 + 0x28) : 0;
              if ( v23 == a1 ) /*0x607e1f*/
              {
                if ( v22 ) /*0x607e23*/
                  *(_DWORD *)(v22 + 0x28) = 0; /*0x607e25*/
                if ( ((int)vtbl->super.super.super.super.CopyFromBase & 0x20) == 0 ) /*0x607e35*/
                {
                  (*(void (__thiscall **)(_DWORD *, int))(*v21 + 0x8C))(v21, 1); /*0x607e43*/
                  v19 = 1; /*0x607e45*/
                }
              }
              if ( (v21[2] & 0x20) != 0 ) /*0x607e50*/
                (*(void (__thiscall **)(_DWORD *, _DWORD))(*v21 + 0x150))(v21, 0); /*0x607e5e*/
              if ( v19 ) /*0x607e62*/
              {
                if ( v17 != v26 ) /*0x607e6a*/
                  v17 = *(Actor **)&v26->members.super.super.super.type; /*0x607e6c*/
              }
              else
              {
LABEL_68:
                v26 = v17; /*0x607e71*/
                v17 = *(Actor **)&v17->members.super.super.super.type; /*0x607e75*/
              }
            }
            return; /*0x607e7a*/
          }
        }
        else
        {
          v24 = 0; /*0x607c99*/
        }
      }
    }
    v8 = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x607cb8*/
    v25 = ActorList_ReturnHead((ActorList *)v8); /*0x607cc6*/
    v9 = v25; /*0x607cca*/
    while ( v9 )
    {
      if ( !*(_DWORD *)&v9->members.super.super.super.type && !v9->vtbl ) /*0x607cd8*/
        break; /*0x607cdc*/
      v10 = v9->vtbl; /*0x607ce2*/
      v11 = 0; /*0x607cef*/
      if ( !(*((unsigned __int8 (__thiscall **)(ActorVtbl *))v9->vtbl->super.super.super.super.InitializeComponent + 0x3A))(v9->vtbl) ) /*0x607cf1*/
        goto LABEL_47; /*0x607cf1*/
      v12 = OblivionDynamicCast( /*0x607d0a*/
              v10,
              0,
              (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
              &ArrowProjectile `RTTI Type Descriptor',
              0);
      v13 = v12; /*0x607d0f*/
      if ( !v12 ) /*0x607d16*/
        goto LABEL_47; /*0x607d16*/
      v14 = v12[0x17]; /*0x607d18*/
      v15 = v14 ? *(_DWORD **)(v14 + 0x28) : 0;
      if ( v15 == a1 ) /*0x607d2a*/
      {
        if ( v14 ) /*0x607d2e*/
          *(_DWORD *)(v14 + 0x28) = 0; /*0x607d30*/
        if ( ((int)v10->super.super.super.super.CopyFromBase & 0x20) == 0 ) /*0x607d40*/
        {
          if ( a2 ) /*0x607d47*/
          {
            (*(void (__thiscall **)(_DWORD *, int))(*v13 + 0x8C))(v13, 1); /*0x607d55*/
            v11 = 1; /*0x607d57*/
          }
          else
          {
            v13[0x18] = 3; /*0x607d5b*/
          }
        }
      }
      if ( (v13[2] & 0x20) != 0 ) /*0x607d6b*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v13 + 0x150))(v13, 0); /*0x607d79*/
      if ( v11 ) /*0x607d7d*/
      {
        if ( v9 != v25 ) /*0x607d85*/
          v9 = *(Actor **)&v25->members.super.super.super.type; /*0x607d87*/
      }
      else
      {
LABEL_47:
        v25 = v9; /*0x607d8c*/
        v9 = *(Actor **)&v9->members.super.super.super.type; /*0x607d90*/
      }
    }
    if ( v24 ) /*0x607da0*/
      goto LABEL_50; /*0x607da0*/
  }
}
