void __userpurge sub_5E91E0(Actor *this@<ecx>, int a2, int a3, int a4, int a5)
{
  _DWORD *v6; // eax
  TESForm *v7; // esi
  TESForm *v8; // edi
  int *p_modlist; // edi
  int v10; // ebp
  TESForm *v11; // eax
  Data *data; // eax
  int *v13; // ebp
  int v14; // edi
  ActorVtbl **i; // edi
  ActorVtbl *v16; // esi
  ActorVtbl **v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // ebx
  int vtbl; // ebp
  int StrongestItem; // eax
  int v22; // esi
  bool v23; // zf
  int v24; // esi
  int p_Unk_06; // [esp-10h] [ebp-54h]
  int v26; // [esp-Ch] [ebp-50h]
  int v27; // [esp-8h] [ebp-4Ch]
  int v28; // [esp-4h] [ebp-48h]
  Actor *v29; // [esp+0h] [ebp-44h]
  int v30; // [esp+10h] [ebp-34h]
  int v31; // [esp+14h] [ebp-30h]
  _DWORD *v32; // [esp+18h] [ebp-2Ch]
  _DWORD *v33; // [esp+28h] [ebp-1Ch]
  char v34; // [esp+30h] [ebp-14h]

  v6 = (_DWORD *)FormHeapAlloc(8u); /*0x5e91ef*/
  if ( v6 ) /*0x5e91fb*/
  {
    *v6 = 0; /*0x5e91fd*/
    v6[1] = 0; /*0x5e91ff*/
  }
  v7 = 0; /*0x5e9216*/
  v8 = this->vtbl->super.super.GetBaseForm(this); /*0x5e921a*/
  if ( v8 ) /*0x5e921e*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e922a*/
      v7 = v8; /*0x5e9230*/
  }
  p_modlist = (int *)&v7[3].member.modlist; /*0x5e9232*/
  if ( v7 != (TESForm *)0xFFFFFFA8 ) /*0x5e9237*/
  {
    do /*0x5e928b*/
    {
      v10 = *p_modlist; /*0x5e9240*/
      if ( !*p_modlist ) /*0x5e9240*/
        break; /*0x5e9244*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v10 + 0x18) + 0x18))(v10 + 0x18) != 4 /*0x5e9264*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)(v10 + 0x18) + 0x18))(v10 + 0x18) != 1 )
      {
        v32 = (_DWORD *)(v10 + 0x18); /*0x5e9275*/
        if ( ((unsigned __int8 (__thiscall *)(MagicCaster *))this->members.magicCaster.vtbl->IsMagicItemUsable)(&this->members.magicCaster) ) /*0x5e9276*/
          BSSimpleList_PushFront(v33, v10); /*0x5e9281*/
      }
      p_modlist = (int *)p_modlist[1]; /*0x5e9286*/
    }
    while ( p_modlist ); /*0x5e928b*/
  }
  if ( Actor_IsNPC(this) ) /*0x5e928f*/
  {
    v11 = this->vtbl->super.super.GetBaseForm(this); /*0x5e92a2*/
    if ( v11 ) /*0x5e92a6*/
    {
      data = v11[9].member.modlist.data; /*0x5e92a8*/
      if ( data ) /*0x5e92b0*/
      {
        v13 = (int *)&data->name[0x14]; /*0x5e92b2*/
        if ( data != (Data *)0xFFFFFFD0 ) /*0x5e92b7*/
        {
          do /*0x5e9312*/
          {
            v14 = *v13; /*0x5e92c0*/
            if ( !*v13 ) /*0x5e92c0*/
              break; /*0x5e92c5*/
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v14 + 0x18) + 0x18))(v14 + 0x18) != 4 /*0x5e92e5*/
              && (*(int (__thiscall **)(int))(*(_DWORD *)(v14 + 0x18) + 0x18))(v14 + 0x18) != 1 )
            {
              v31 = 0; /*0x5e92ed*/
              v30 = 0; /*0x5e92ef*/
              if ( ((unsigned __int8 (__thiscall *)(MagicCaster *, int, _DWORD))this->members.magicCaster.vtbl->IsMagicItemUsable)( /*0x5e9301*/
                     &this->members.magicCaster,
                     v14 + 0x18,
                     0)
                || !v34 )
              {
                BSSimpleList_PushFront(v32, v14); /*0x5e9308*/
              }
            }
            v13 = (int *)v13[1]; /*0x5e930d*/
          }
          while ( v13 ); /*0x5e9312*/
        }
      }
    }
  }
  v29 = this; /*0x5e9321*/
  for ( i = (ActorVtbl **)((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_114)(this->members.super.process); /*0x5e9328*/
        i;
        i = (ActorVtbl **)i[1] )
  {
    if ( !i[1] && !*i ) /*0x5e9336*/
      break; /*0x5e9339*/
    v16 = *i; /*0x5e933b*/
    if ( *i ) /*0x5e933b*/
    {
      v28 = 0; /*0x5e9347*/
      v27 = 0; /*0x5e9349*/
      v26 = 0; /*0x5e934e*/
      p_Unk_06 = (int)&v16->super.super.super.Unk_06; /*0x5e9353*/
      if ( ((unsigned __int8 (__thiscall *)(MagicCaster *))this->members.magicCaster.vtbl->IsMagicItemUsable)(&this->members.magicCaster) /*0x5e935e*/
        || !(_BYTE)v32 )
      {
        if ( this->vtbl ) /*0x5e9364*/
        {
          v17 = (ActorVtbl **)FormHeapAlloc(8u); /*0x5e936c*/
          if ( v17 ) /*0x5e9376*/
          {
            *v17 = this->vtbl; /*0x5e937b*/
            v17[1] = 0; /*0x5e937d*/
          }
          else
          {
            v17 = 0; /*0x5e9386*/
          }
          v17[1] = *(ActorVtbl **)&this->members.super.super.super.type; /*0x5e938b*/
          *(_DWORD *)&this->members.super.super.super.type = v17; /*0x5e938e*/
        }
        this->vtbl = v16; /*0x5e9391*/
      }
    }
  }
  v18 = (_DWORD *)FormHeapAlloc(8u); /*0x5e939d*/
  if ( v18 ) /*0x5e93a7*/
  {
    *v18 = 0; /*0x5e93a9*/
    v18[1] = 0; /*0x5e93af*/
    v19 = v18; /*0x5e93b6*/
  }
  else
  {
    v19 = 0; /*0x5e93ba*/
  }
  if ( !v29 || (vtbl = (int)v29->vtbl) == 0 ) /*0x5e93d4*/
    JUMPOUT(0x5E94B1); /*0x5e94b1*/
  StrongestItem = EffectItemList_GetStrongestItem((_DWORD *)(vtbl + 0x24), 3, 0, p_Unk_06, v26, v27, v28, (char)v29); /*0x5e93e7*/
  v22 = vtbl != 0 ? vtbl + 0x24 : 0;
  switch ( v30 ) /*0x5e9404*/
  {
    case 0x1A: /*0x5e9404*/
      goto LABEL_62;
    case 0x1B: /*0x5e9404*/
      v23 = *(_DWORD *)(StrongestItem + 0x10) == 2; /*0x5e9420*/
      goto LABEL_61; /*0x5e9424*/
    case 0x1C: /*0x5e9404*/
      v23 = *(_DWORD *)(StrongestItem + 0x10) == 1; /*0x5e9490*/
      goto LABEL_61; /*0x5e9490*/
    case 0x1D: /*0x5e9404*/
      if ( *(_DWORD *)(StrongestItem + 0x10) ) /*0x5e944a*/
        goto LABEL_63; /*0x5e944e*/
      if ( v31 == 0xFFFFFFFF ) /*0x5e9457*/
        goto LABEL_62; /*0x5e9457*/
      if ( !v22 ) /*0x5e945b*/
        goto LABEL_63; /*0x5e945b*/
      do /*0x5e948c*/
      {
        if ( !*(_DWORD *)(v22 + 8) && !*(_DWORD *)(v22 + 4) ) /*0x5e9466*/
          goto LABEL_63; /*0x5e9466*/
        if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v22 + 4) + 0x1C) + 0x98) == v31 ) /*0x5e9478*/
          BSSimpleList_PushFront(v19, vtbl); /*0x5e947d*/
        v24 = *(_DWORD *)(v22 + 8); /*0x5e9482*/
        if ( !v24 ) /*0x5e9487*/
LABEL_63:
          JUMPOUT(0x5E949E); /*0x5e949e*/
        v22 = v24 - 4; /*0x5e9489*/
      }
      while ( v22 ); /*0x5e948c*/
      break; /*0x5e948c*/
    case 0x1E: /*0x5e9404*/
      v23 = *(_DWORD *)(*(_DWORD *)(StrongestItem + 0x1C) + 0x64) == 0; /*0x5e9429*/
      goto LABEL_61; /*0x5e942d*/
    case 0x1F: /*0x5e9404*/
      v23 = *(_DWORD *)(*(_DWORD *)(StrongestItem + 0x1C) + 0x64) == 1; /*0x5e9432*/
      goto LABEL_61; /*0x5e9436*/
    case 0x20: /*0x5e9404*/
      v23 = *(_DWORD *)(*(_DWORD *)(StrongestItem + 0x1C) + 0x64) == 2; /*0x5e943b*/
      goto LABEL_61; /*0x5e943f*/
    case 0x21: /*0x5e9404*/
      v23 = *(_DWORD *)(*(_DWORD *)(StrongestItem + 0x1C) + 0x64) == 3; /*0x5e9444*/
      goto LABEL_61; /*0x5e9448*/
    case 0x22: /*0x5e9404*/
      v23 = *(_DWORD *)(*(_DWORD *)(StrongestItem + 0x1C) + 0x64) == 4; /*0x5e940e*/
      goto LABEL_61; /*0x5e9412*/
    case 0x23: /*0x5e9404*/
      v23 = *(_DWORD *)(*(_DWORD *)(StrongestItem + 0x1C) + 0x64) == 5; /*0x5e941a*/
LABEL_61:
      if ( !v23 ) /*0x5e9494*/
        goto LABEL_63; /*0x5e9494*/
LABEL_62:
      BSSimpleList_PushFront(v19, vtbl); /*0x5e9496*/
      break; /*0x5e949a*/
    default:
      goto LABEL_63;
  }
  def_5E9404(v19, a2, a3, a4, a5); /*0x5e948e*/
}
