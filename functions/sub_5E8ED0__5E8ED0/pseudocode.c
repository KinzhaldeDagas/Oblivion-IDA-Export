_DWORD *__thiscall sub_5E8ED0(Actor *this, char a2)
{
  Actor *v2; // ebp
  int *v3; // eax
  int v4; // ebx
  int *v5; // edi
  int v6; // esi
  int *i; // ebx
  int v8; // esi
  int *v9; // eax
  int v10; // eax
  int v11; // eax
  int *v12; // ebx
  int v13; // esi
  int *v14; // eax
  int v15; // esi
  int v16; // ebx
  int v17; // esi
  int *v18; // ebx
  int v19; // ebp
  int *v20; // eax
  int v21; // esi
  _DWORD *v22; // eax
  int *j; // ebx
  int v24; // ebp
  bool HasHostile; // al
  int v26; // esi
  int *v29; // [esp+20h] [ebp-8h]
  _DWORD *v30; // [esp+20h] [ebp-8h]
  int v31; // [esp+24h] [ebp-4h]

  v2 = this; /*0x5e8ed7*/
  v3 = (int *)FormHeapAlloc(8u); /*0x5e8edf*/
  v4 = 0; /*0x5e8ee4*/
  if ( v3 ) /*0x5e8eeb*/
  {
    *v3 = 0; /*0x5e8eed*/
    v3[1] = 0; /*0x5e8eef*/
    v5 = v3; /*0x5e8ef2*/
  }
  else
  {
    v5 = 0; /*0x5e8ef6*/
  }
  v6 = (int)v2->vtbl->super.super.GetBaseForm((TESObjectREFR *)v2); /*0x5e8f05*/
  if ( v6 ) /*0x5e8f09*/
  {
    if ( v2->vtbl->super.super.IsActor((TESObjectREFR *)v2) ) /*0x5e8f16*/
      v4 = v6; /*0x5e8f1c*/
  }
  for ( i = (int *)(v4 + 0x58); i; i = (int *)i[1] ) /*0x5e8f21*/
  {
    v8 = *i; /*0x5e8f23*/
    if ( !*i ) /*0x5e8f23*/
      break; /*0x5e8f27*/
    if ( *v5 ) /*0x5e8f29*/
    {
      v9 = (int *)FormHeapAlloc(8u); /*0x5e8f30*/
      if ( v9 ) /*0x5e8f3a*/
      {
        *v9 = *v5; /*0x5e8f3e*/
        v9[1] = 0; /*0x5e8f40*/
      }
      else
      {
        v9 = 0; /*0x5e8f49*/
      }
      v9[1] = v5[1]; /*0x5e8f4e*/
      v5[1] = (int)v9; /*0x5e8f51*/
    }
    *v5 = v8; /*0x5e8f54*/
  }
  if ( Actor_IsNPC(v2) ) /*0x5e8f5f*/
  {
    if ( Actor_IsNPC(v2) && (v10 = (int)v2->vtbl->super.super.GetBaseForm((TESObjectREFR *)v2)) != 0 ) /*0x5e8f82*/
      v11 = *(_DWORD *)(v10 + 0xE8); /*0x5e8f84*/
    else
      v11 = 0; /*0x5e8f8c*/
    v12 = (int *)(v11 + 0x30); /*0x5e8f8e*/
    if ( v11 != 0xFFFFFFD0 ) /*0x5e8f93*/
    {
      do /*0x5e8fcd*/
      {
        v13 = *v12; /*0x5e8f95*/
        if ( !*v12 ) /*0x5e8f95*/
          break; /*0x5e8f99*/
        if ( *v5 ) /*0x5e8f9b*/
        {
          v14 = (int *)FormHeapAlloc(8u); /*0x5e8fa2*/
          if ( v14 ) /*0x5e8fac*/
          {
            *v14 = *v5; /*0x5e8fb0*/
            v14[1] = 0; /*0x5e8fb2*/
          }
          else
          {
            v14 = 0; /*0x5e8fbb*/
          }
          v14[1] = v5[1]; /*0x5e8fc0*/
          v5[1] = (int)v14; /*0x5e8fc3*/
        }
        *v5 = v13; /*0x5e8fc6*/
        v12 = (int *)v12[1]; /*0x5e8fc8*/
      }
      while ( v12 ); /*0x5e8fcd*/
    }
  }
  v15 = 0; /*0x5e8fda*/
  v16 = (int)v2->vtbl->super.super.GetBaseForm((TESObjectREFR *)v2); /*0x5e8fde*/
  if ( v16 ) /*0x5e8fe2*/
  {
    if ( v2->vtbl->super.super.IsActor((TESObjectREFR *)v2) ) /*0x5e8fef*/
      v15 = v16; /*0x5e8ff5*/
  }
  v31 = v15 + 0x60; /*0x5e8ffa*/
  if ( v15 != 0xFFFFFFA0 ) /*0x5e8ffe*/
  {
    do /*0x5e9108*/
    {
      v17 = v31; /*0x5e9004*/
      if ( !*(_DWORD *)(v31 + 4) && !*(_DWORD *)v31 ) /*0x5e900e*/
        break; /*0x5e9011*/
      if ( *(_DWORD *)v31 ) /*0x5e9017*/
      {
        v18 = sub_4B0920(*(int **)v31, v2); /*0x5e9027*/
        v29 = v18; /*0x5e902b*/
        if ( v18 ) /*0x5e902f*/
        {
          do /*0x5e90c6*/
          {
            if ( !v29[1] && !*v29 ) /*0x5e903f*/
              break; /*0x5e9042*/
            v19 = *v29; /*0x5e9048*/
            if ( *v29 ) /*0x5e9048*/
            {
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v19 + 0x18) + 0x18))(v19 + 0x18) != 4 /*0x5e9082*/
                && (*(int (__thiscall **)(int))(*(_DWORD *)(v19 + 0x18) + 0x18))(v19 + 0x18) != 1
                && this->members.magicCaster.vtbl->IsMagicItemUsable(
                     &this->members.magicCaster,
                     (MagicItem *)(v19 + 0x18),
                     0,
                     0,
                     0) )
              {
                if ( *v5 ) /*0x5e9088*/
                {
                  v20 = (int *)FormHeapAlloc(8u); /*0x5e908f*/
                  if ( v20 ) /*0x5e9099*/
                  {
                    *v20 = *v5; /*0x5e909d*/
                    v20[1] = 0; /*0x5e909f*/
                  }
                  else
                  {
                    v20 = 0; /*0x5e90a8*/
                  }
                  v20[1] = v5[1]; /*0x5e90ad*/
                  v5[1] = (int)v20; /*0x5e90b0*/
                }
                *v5 = v19; /*0x5e90b3*/
              }
            }
            v2 = this; /*0x5e90be*/
            v29 = (int *)v29[1]; /*0x5e90c2*/
          }
          while ( v29 ); /*0x5e90c6*/
          if ( v18[1] ) /*0x5e90cc*/
          {
            do /*0x5e90e6*/
            {
              v21 = *(_DWORD *)(v18[1] + 4); /*0x5e90d5*/
              FormHeapFree(v18[1]); /*0x5e90d9*/
              v18[1] = v21; /*0x5e90e3*/
            }
            while ( v21 ); /*0x5e90e6*/
            v2 = this; /*0x5e90e8*/
          }
          *v18 = 0; /*0x5e90ed*/
          FormHeapFree((unsigned int)v18); /*0x5e90f3*/
          v17 = v31; /*0x5e90f8*/
        }
      }
      v31 = *(_DWORD *)(v17 + 4); /*0x5e9104*/
    }
    while ( v31 ); /*0x5e9108*/
  }
  v22 = (_DWORD *)FormHeapAlloc(8u); /*0x5e9110*/
  if ( v22 ) /*0x5e911c*/
  {
    *v22 = 0; /*0x5e911e*/
    v22[1] = 0; /*0x5e9120*/
    v30 = v22; /*0x5e9123*/
  }
  else
  {
    v30 = 0; /*0x5e9129*/
  }
  for ( j = v5; j; j = (int *)j[1] ) /*0x5e9131*/
  {
    v24 = *j; /*0x5e9133*/
    if ( !*j ) /*0x5e9137*/
      break; /*0x5e9137*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v24 + 0x18) + 0x18))(v24 + 0x18) != 4 /*0x5e916d*/
      && (*(int (__thiscall **)(int))(*(_DWORD *)(v24 + 0x18) + 0x18))(v24 + 0x18) != 1
      && this->members.magicCaster.vtbl->IsMagicItemUsable(
           &this->members.magicCaster,
           (MagicItem *)(v24 + 0x18),
           0,
           0,
           0) )
    {
      HasHostile = EffectItemList_HasHostile((_DWORD *)(v24 + 0x24)); /*0x5e9176*/
      if ( a2 ) /*0x5e9180*/
      {
        if ( HasHostile ) /*0x5e9184*/
          goto LABEL_66; /*0x5e9184*/
      }
      else if ( !HasHostile ) /*0x5e918a*/
      {
LABEL_66:
        BSSimpleList_PushFront(v30, v24); /*0x5e918c*/
      }
    }
  }
  if ( v5[1] ) /*0x5e919d*/
  {
    do /*0x5e91b7*/
    {
      v26 = *(_DWORD *)(v5[1] + 4); /*0x5e91a6*/
      FormHeapFree(v5[1]); /*0x5e91aa*/
      v5[1] = v26; /*0x5e91b4*/
    }
    while ( v26 ); /*0x5e91b7*/
  }
  *v5 = 0; /*0x5e91ba*/
  FormHeapFree((unsigned int)v5); /*0x5e91c0*/
  return v30; /*0x5e91cc*/
}
