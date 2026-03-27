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

  v2 = this;
  v3 = (int *)FormHeapAlloc(8u);
  v4 = 0;
  if ( v3 )
  {
    *v3 = 0;
    v3[1] = 0;
    v5 = v3;
  }
  else
  {
    v5 = 0;
  }
  v6 = (int)v2->vtbl->super.super.GetBaseForm((TESObjectREFR *)v2);
  if ( v6 )
  {
    if ( v2->vtbl->super.super.IsActor((TESObjectREFR *)v2) )
      v4 = v6;
  }
  for ( i = (int *)(v4 + 0x58); i; i = (int *)i[1] )
  {
    v8 = *i;
    if ( !*i )
      break;
    if ( *v5 )
    {
      v9 = (int *)FormHeapAlloc(8u);
      if ( v9 )
      {
        *v9 = *v5;
        v9[1] = 0;
      }
      else
      {
        v9 = 0;
      }
      v9[1] = v5[1];
      v5[1] = (int)v9;
    }
    *v5 = v8;
  }
  if ( Actor_IsNPC(v2) )
  {
    if ( Actor_IsNPC(v2) && (v10 = (int)v2->vtbl->super.super.GetBaseForm((TESObjectREFR *)v2)) != 0 )
      v11 = *(_DWORD *)(v10 + 0xE8);
    else
      v11 = 0;
    v12 = (int *)(v11 + 0x30);
    if ( v11 != 0xFFFFFFD0 )
    {
      do
      {
        v13 = *v12;
        if ( !*v12 )
          break;
        if ( *v5 )
        {
          v14 = (int *)FormHeapAlloc(8u);
          if ( v14 )
          {
            *v14 = *v5;
            v14[1] = 0;
          }
          else
          {
            v14 = 0;
          }
          v14[1] = v5[1];
          v5[1] = (int)v14;
        }
        *v5 = v13;
        v12 = (int *)v12[1];
      }
      while ( v12 );
    }
  }
  v15 = 0;
  v16 = (int)v2->vtbl->super.super.GetBaseForm((TESObjectREFR *)v2);
  if ( v16 )
  {
    if ( v2->vtbl->super.super.IsActor((TESObjectREFR *)v2) )
      v15 = v16;
  }
  v31 = v15 + 0x60;
  if ( v15 != 0xFFFFFFA0 )
  {
    do
    {
      v17 = v31;
      if ( !*(_DWORD *)(v31 + 4) && !*(_DWORD *)v31 )
        break;
      if ( *(_DWORD *)v31 )
      {
        v18 = sub_4B0920(*(int **)v31, v2);
        v29 = v18;
        if ( v18 )
        {
          do
          {
            if ( !v29[1] && !*v29 )
              break;
            v19 = *v29;
            if ( *v29 )
            {
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v19 + 0x18) + 0x18))(v19 + 0x18) != 4
                && (*(int (__thiscall **)(int))(*(_DWORD *)(v19 + 0x18) + 0x18))(v19 + 0x18) != 1
                && this->members.magicCaster.vtbl->IsMagicItemUsable(
                     &this->members.magicCaster,
                     (MagicItem *)(v19 + 0x18),
                     0,
                     0,
                     0) )
              {
                if ( *v5 )
                {
                  v20 = (int *)FormHeapAlloc(8u);
                  if ( v20 )
                  {
                    *v20 = *v5;
                    v20[1] = 0;
                  }
                  else
                  {
                    v20 = 0;
                  }
                  v20[1] = v5[1];
                  v5[1] = (int)v20;
                }
                *v5 = v19;
              }
            }
            v2 = this;
            v29 = (int *)v29[1];
          }
          while ( v29 );
          if ( v18[1] )
          {
            do
            {
              v21 = *(_DWORD *)(v18[1] + 4);
              FormHeapFree(v18[1]);
              v18[1] = v21;
            }
            while ( v21 );
            v2 = this;
          }
          *v18 = 0;
          FormHeapFree((unsigned int)v18);
          v17 = v31;
        }
      }
      v31 = *(_DWORD *)(v17 + 4);
    }
    while ( v31 );
  }
  v22 = (_DWORD *)FormHeapAlloc(8u);
  if ( v22 )
  {
    *v22 = 0;
    v22[1] = 0;
    v30 = v22;
  }
  else
  {
    v30 = 0;
  }
  for ( j = v5; j; j = (int *)j[1] )
  {
    v24 = *j;
    if ( !*j )
      break;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v24 + 0x18) + 0x18))(v24 + 0x18) != 4
      && (*(int (__thiscall **)(int))(*(_DWORD *)(v24 + 0x18) + 0x18))(v24 + 0x18) != 1
      && this->members.magicCaster.vtbl->IsMagicItemUsable(
           &this->members.magicCaster,
           (MagicItem *)(v24 + 0x18),
           0,
           0,
           0) )
    {
      HasHostile = EffectItemList_HasHostile((_DWORD *)(v24 + 0x24));
      if ( a2 )
      {
        if ( HasHostile )
          goto LABEL_66;
      }
      else if ( !HasHostile )
      {
LABEL_66:
        BSSimpleList_PushFront(v30, v24);
      }
    }
  }
  if ( v5[1] )
  {
    do
    {
      v26 = *(_DWORD *)(v5[1] + 4);
      FormHeapFree(v5[1]);
      v5[1] = v26;
    }
    while ( v26 );
  }
  *v5 = 0;
  FormHeapFree((unsigned int)v5);
  return v30;
}
