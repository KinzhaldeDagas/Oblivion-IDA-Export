TESObjectREFR **__thiscall sub_674E40(ActorProcessManager *this, int a2, TESObjectREFR *a3)
{
  TESObjectREFR **v3; // ebx
  ActorProcessManager *v4; // esi
  int v5; // eax
  Actor *ListHead; // eax
  Actor *j; // edi
  TESObjectREFR *vtbl; // esi
  TESObjectREFRVtbl *v9; // ecx
  TESObjectREFR **v10; // eax
  TESObjectREFR **v11; // eax
  int i; // [esp+10h] [ebp-8h]

  v3 = 0; /*0x674e48*/
  v4 = this; /*0x674e4a*/
  v5 = 0; /*0x674e4c*/
  for ( i = 0; ; v5 = i )
  {
    if ( v5 )
    {
      if ( v5 == 1 )
        ListHead = ActorProcessManager_GetListHead(v4, 1); /*0x674e71*/
      else
        ListHead = v5 == 2 ? ActorProcessManager_GetListHead(v4, 2) : ActorProcessManager_GetListHead(v4, 3);
    }
    else
    {
      ListHead = ActorProcessManager_GetListHead(v4, 0); /*0x674e69*/
    }
    for ( j = ActorList_ReturnHead((ActorList *)ListHead); j; v4 = this ) /*0x674e8f*/
    {
      if ( !*(_DWORD *)&j->members.super.super.super.type && !j->vtbl ) /*0x674e9a*/
        break; /*0x674e9c*/
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))j->vtbl->super.super.super.super.InitializeComponent + 0x64))(j->vtbl) ) /*0x674eac*/
      {
        vtbl = (TESObjectREFR *)j->vtbl; /*0x674eb6*/
        if ( j->vtbl ) /*0x674eb6*/
        {
          v9 = vtbl[1].vtbl; /*0x674ebc*/
          if ( v9 ) /*0x674ec1*/
            (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v9->super.super.InitializeComponent + 0xCC))(v9, a2); /*0x674ed0*/
          if ( sub_5EAE10(vtbl) ) /*0x674ed4*/
          {
            if ( *(_DWORD *)(sub_5EAE10(vtbl) + 0xC) == a2 && a3 != vtbl ) /*0x674ef1*/
            {
              if ( !v3 ) /*0x674ef5*/
              {
                v10 = (TESObjectREFR **)FormHeapAlloc(8u); /*0x674ef9*/
                if ( v10 ) /*0x674f03*/
                {
                  *v10 = 0; /*0x674f05*/
                  v10[1] = 0; /*0x674f07*/
                }
                else
                {
                  v10 = 0; /*0x674f0c*/
                }
                v3 = v10; /*0x674f0e*/
              }
              if ( *v3 ) /*0x674f10*/
              {
                v11 = (TESObjectREFR **)FormHeapAlloc(8u); /*0x674f16*/
                if ( v11 ) /*0x674f20*/
                {
                  *v11 = *v3; /*0x674f24*/
                  v11[1] = 0; /*0x674f26*/
                }
                else
                {
                  v11 = 0; /*0x674f2b*/
                }
                v11[1] = v3[1]; /*0x674f30*/
                v3[1] = (TESObjectREFR *)v11; /*0x674f33*/
              }
              *v3 = vtbl; /*0x674f36*/
            }
          }
        }
      }
      j = *(Actor **)&j->members.super.super.super.type; /*0x674f38*/
    }
    if ( ++i >= 4 ) /*0x674f55*/
      break; /*0x674f55*/
  }
  return v3; /*0x674f5b*/
}
