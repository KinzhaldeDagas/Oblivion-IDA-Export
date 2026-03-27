int __thiscall sub_5E91E0(Actor *this, int a2, int a3, int a4)
{
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // edi
  int *v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  int *v12; // ebp
  int v13; // edi
  ActorVtbl **i; // edi
  ActorVtbl *v15; // esi
  ActorVtbl **v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // ebx
  int v19; // ebp
  int StrongestItem; // eax
  int v21; // esi
  bool v22; // zf
  int v23; // esi
  int *v25; // [esp+0h] [ebp-44h]
  int v26; // [esp+10h] [ebp-34h]
  int v27; // [esp+14h] [ebp-30h]
  _DWORD *v28; // [esp+18h] [ebp-2Ch]
  _DWORD *v29; // [esp+28h] [ebp-1Ch]
  char v30; // [esp+30h] [ebp-14h]

  v5 = (_DWORD *)FormHeapAlloc(8u);
  if ( v5 )
  {
    *v5 = 0;
    v5[1] = 0;
  }
  v6 = 0;
  v7 = (int)this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this);
  if ( v7 )
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
      v6 = v7;
  }
  v8 = (int *)(v6 + 0x58);
  if ( v6 != 0xFFFFFFA8 )
  {
    do
    {
      v9 = *v8;
      if ( !*v8 )
        break;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v9 + 0x18) + 0x18))(v9 + 0x18) != 4
        && (*(int (__thiscall **)(int))(*(_DWORD *)(v9 + 0x18) + 0x18))(v9 + 0x18) != 1 )
      {
        v28 = (_DWORD *)(v9 + 0x18);
        if ( ((unsigned __int8 (__thiscall *)(MagicCasterVtbl **))this->members.magicCaster.vtbl->IsMagicItemUsable)(&this->members.magicCaster.vtbl) )
          BSSimpleList_PushFront(v29, v9);
      }
      v8 = (int *)v8[1];
    }
    while ( v8 );
  }
  if ( Actor_IsNPC(this) )
  {
    v10 = (int)this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this);
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 0xE8);
      if ( v11 )
      {
        v12 = (int *)(v11 + 0x30);
        if ( v11 != 0xFFFFFFD0 )
        {
          do
          {
            v13 = *v12;
            if ( !*v12 )
              break;
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v13 + 0x18) + 0x18))(v13 + 0x18) != 4
              && (*(int (__thiscall **)(int))(*(_DWORD *)(v13 + 0x18) + 0x18))(v13 + 0x18) != 1 )
            {
              v27 = 0;
              v26 = 0;
              if ( ((unsigned __int8 (__thiscall *)(MagicCasterVtbl **, int, _DWORD))this->members.magicCaster.vtbl->IsMagicItemUsable)(
                     &this->members.magicCaster.vtbl,
                     v13 + 0x18,
                     0)
                || !v30 )
              {
                BSSimpleList_PushFront(v28, v13);
              }
            }
            v12 = (int *)v12[1];
          }
          while ( v12 );
        }
      }
    }
  }
  v25 = (int *)this;
  for ( i = (ActorVtbl **)((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_114)(this->members.super.process);
        i;
        i = (ActorVtbl **)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    v15 = *i;
    if ( *i )
    {
      if ( this->members.magicCaster.vtbl->IsMagicItemUsable(
             &this->members.magicCaster,
             (MagicItem *)&v15->super.super.super.Unk_06,
             0,
             0,
             0)
        || !(_BYTE)v28 )
      {
        if ( this->vtbl )
        {
          v16 = (ActorVtbl **)FormHeapAlloc(8u);
          if ( v16 )
          {
            *v16 = this->vtbl;
            v16[1] = 0;
          }
          else
          {
            v16 = 0;
          }
          v16[1] = *(ActorVtbl **)&this->members.super.super.super.type;
          *(_DWORD *)&this->members.super.super.super.type = v16;
        }
        this->vtbl = v15;
      }
    }
  }
  v17 = (_DWORD *)FormHeapAlloc(8u);
  if ( v17 )
  {
    *v17 = 0;
    v17[1] = 0;
    v18 = v17;
  }
  else
  {
    v18 = 0;
  }
  if ( !v25 || (v19 = *v25) == 0 )
    JUMPOUT(0x5E94B1);
  StrongestItem = EffectItemList_GetStrongestItem(3, 0);
  v21 = v19 != 0 ? v19 + 0x24 : 0;
  switch ( v26 )
  {
    case 0x1A:
      goto LABEL_62;
    case 0x1B:
      v22 = *(_DWORD *)(StrongestItem + 0x10) == 2;
      goto LABEL_61;
    case 0x1C:
      v22 = *(_DWORD *)(StrongestItem + 0x10) == 1;
      goto LABEL_61;
    case 0x1D:
      if ( *(_DWORD *)(StrongestItem + 0x10) )
        goto LABEL_63;
      if ( v27 == 0xFFFFFFFF )
        goto LABEL_62;
      if ( !v21 )
        goto LABEL_63;
      do
      {
        if ( !*(_DWORD *)(v21 + 8) && !*(_DWORD *)(v21 + 4) )
          goto LABEL_63;
        if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v21 + 4) + 0x1C) + 0x98) == v27 )
          BSSimpleList_PushFront(v18, v19);
        v23 = *(_DWORD *)(v21 + 8);
        if ( !v23 )
LABEL_63:
          JUMPOUT(0x5E949E);
        v21 = v23 - 4;
      }
      while ( v21 );
      break;
    case 0x1E:
      v22 = *(_DWORD *)(*(_DWORD *)(StrongestItem + 0x1C) + 0x64) == 0;
      goto LABEL_61;
    case 0x1F:
      v22 = *(_DWORD *)(*(_DWORD *)(StrongestItem + 0x1C) + 0x64) == 1;
      goto LABEL_61;
    case 0x20:
      v22 = *(_DWORD *)(*(_DWORD *)(StrongestItem + 0x1C) + 0x64) == 2;
      goto LABEL_61;
    case 0x21:
      v22 = *(_DWORD *)(*(_DWORD *)(StrongestItem + 0x1C) + 0x64) == 3;
      goto LABEL_61;
    case 0x22:
      v22 = *(_DWORD *)(*(_DWORD *)(StrongestItem + 0x1C) + 0x64) == 4;
      goto LABEL_61;
    case 0x23:
      v22 = *(_DWORD *)(*(_DWORD *)(StrongestItem + 0x1C) + 0x64) == 5;
LABEL_61:
      if ( !v22 )
        goto LABEL_63;
LABEL_62:
      BSSimpleList_PushFront(v18, v19);
      break;
    default:
      goto LABEL_63;
  }
  return def_5E9404(a2, a3, a4);
}
