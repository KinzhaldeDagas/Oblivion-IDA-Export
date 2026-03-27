void __thiscall sub_616DB0(char *this, int a2, ExtraDataList ***a3)
{
  TESForm *ActorBaseForm; // esi
  TESForm *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  char *v10; // ebp
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16; // [esp+0h] [ebp-28h]
  int v17; // [esp+4h] [ebp-24h]
  int v18; // [esp+8h] [ebp-20h]
  int v19; // [esp+Ch] [ebp-1Ch]
  int (__cdecl *v20)(int, _DWORD); // [esp+10h] [ebp-18h]
  double v21; // [esp+14h] [ebp-14h]
  double v22; // [esp+14h] [ebp-14h]
  double v23; // [esp+14h] [ebp-14h]
  bool HasAssocFormEffect; // [esp+2Ch] [ebp+4h]

  if ( !a2 )
    return;
  if ( a3 )
  {
    ActorBaseForm = Actor_GetActorBaseForm((Actor *)TESDataHandler_g_PlayerRef, 0);
    sub_484B70(a3);
    if ( v6 == ActorBaseForm )
      return;
  }
  if ( EffectItemList_HasEffectWithFlags((_DWORD *)(a2 + 0xC), 0x40000) && !sub_419C50((char *)a2) )
    return;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x18))(a2) == 7
    && (unsigned __int8)EffectItemList_AllEffectsHostile((_DWORD *)(a2 + 0xC)) )
  {
    if ( !*((_DWORD *)this + 0x29) )
    {
      v7 = (_DWORD *)FormHeapAlloc(8u);
      if ( v7 )
      {
        *v7 = 0;
        v7[1] = 0;
      }
      else
      {
        v7 = 0;
      }
      *((_DWORD *)this + 0x29) = v7;
    }
    BSSimpleList_PushFront(*((_DWORD **)this + 0x29), a2);
    return;
  }
  v8 = (_DWORD *)FormHeapAlloc(8u);
  if ( v8 )
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x18))(a2);
    *v8 = a2;
    v8[1] = v9 != 7 ? a3 : 0;
  }
  else
  {
    v8 = 0;
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x18))(a2) == 1 )
  {
    if ( *((_DWORD *)this + 0x28) )
      FormHeapFree(*((_DWORD *)this + 0x28));
    *((_DWORD *)this + 0x28) = v8;
    return;
  }
  HasAssocFormEffect = EffectItemList_HasAssocFormEffect(a2 + 0xC);
  if ( HasAssocFormEffect )
  {
    if ( sub_613AF0((void **)this, (unsigned int)v8, 0x40000, (unsigned int *)this + 0x27) )
      return;
    v10 = this + 0x98;
    if ( this != (char *)0xFFFFFF68
      && (!Actor_IsCreature(*((Actor **)this + 0xF)) || sub_5E1CF0(*((void **)this + 0xF)))
      && EffectItemList_HasEffectWithFlags((_DWORD *)(*v8 + 0xC), 0x10000) )
    {
      if ( !*(_DWORD *)v10 )
        goto LABEL_30;
      v21 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(**(_DWORD **)v10 + 0xC))(**(_DWORD **)v10 + 0xC, 0);
      if ( ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*v8 + 0xC))(*v8 + 0xC, 0) > v21 )
      {
LABEL_29:
        FormHeapFree(*(_DWORD *)v10);
        *(_DWORD *)v10 = v8;
        return;
      }
    }
    v10 = this + 0x94;
    if ( this != (char *)0xFFFFFF6C
      && !Actor_IsCreature(*((Actor **)this + 0xF))
      && EffectItemList_HasEffectWithFlags((_DWORD *)(*v8 + 0xC), 0x20000) )
    {
      if ( *(_DWORD *)v10 )
      {
        v22 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(**(_DWORD **)v10 + 0xC))(**(_DWORD **)v10 + 0xC, 0);
        if ( ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*v8 + 0xC))(*v8 + 0xC, 0) > v22 )
          goto LABEL_29;
        goto LABEL_36;
      }
LABEL_30:
      *(_DWORD *)v10 = v8;
      return;
    }
  }
LABEL_36:
  if ( !EffectItemList_HasHostile((_DWORD *)(a2 + 0xC)) || HasAssocFormEffect )
  {
    if ( EffectItemList_HasOnTarget(a2 + 0xC)
      || EffectItemList_HasTouchEffect((_DWORD *)(a2 + 0xC))
      || HasAssocFormEffect )
    {
      FormHeapFree((unsigned int)v8);
    }
    else if ( sub_6126B0(a2) )
    {
      v13 = *((_DWORD *)this + 0x24);
      if ( v13 )
      {
        v23 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*(_DWORD *)v13 + 0xC))(*(_DWORD *)v13 + 0xC, 0);
        if ( ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*v8 + 0xC))(*v8 + 0xC, 0) <= v23 )
          return;
        if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v8 + 0x18))(*v8) != 7 && !v8[1] )
        {
          FormHeapFree(*((_DWORD *)this + 0x24));
          *((_DWORD *)this + 0x24) = v8;
          return;
        }
        if ( !*((_DWORD *)this + 0x1A) )
        {
          v14 = (_DWORD *)FormHeapAlloc(8u);
          if ( v14 )
          {
            *v14 = 0;
            v14[1] = 0;
          }
          else
          {
            v14 = 0;
          }
          *((_DWORD *)this + 0x1A) = v14;
        }
        BSSimpleList_InsertSorted(
          *((_DWORD **)this + 0x1A),
          *((_DWORD *)this + 0x24),
          (int)sub_612740,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      *((_DWORD *)this + 0x24) = v8;
    }
    else
    {
      if ( !*((_DWORD *)this + 0x19) )
      {
        v15 = (_DWORD *)FormHeapAlloc(8u);
        if ( v15 )
        {
          *v15 = 0;
          v15[1] = 0;
        }
        else
        {
          v15 = 0;
        }
        *((_DWORD *)this + 0x19) = v15;
      }
      BSSimpleList_InsertSorted(*((_DWORD **)this + 0x19), (int)v8, (int)sub_612740, v16, v17, v18, v19, v20);
    }
  }
  else if ( EffectItemList_HasOnTarget(a2 + 0xC) )
  {
    if ( !*((_DWORD *)this + 0x17) )
    {
      v11 = (_DWORD *)FormHeapAlloc(8u);
      if ( v11 )
      {
        *v11 = 0;
        v11[1] = 0;
      }
      else
      {
        v11 = 0;
      }
      *((_DWORD *)this + 0x17) = v11;
    }
    BSSimpleList_InsertSorted(*((_DWORD **)this + 0x17), (int)v8, (int)sub_612740, v16, v17, v18, v19, v20);
  }
  else if ( EffectItemList_HasTouchEffect((_DWORD *)(a2 + 0xC)) )
  {
    if ( !*((_DWORD *)this + 0x18) )
    {
      v12 = (_DWORD *)FormHeapAlloc(8u);
      if ( v12 )
      {
        *v12 = 0;
        v12[1] = 0;
      }
      else
      {
        v12 = 0;
      }
      *((_DWORD *)this + 0x18) = v12;
    }
    BSSimpleList_InsertSorted(*((_DWORD **)this + 0x18), (int)v8, (int)sub_612740, v16, v17, v18, v19, v20);
  }
}
