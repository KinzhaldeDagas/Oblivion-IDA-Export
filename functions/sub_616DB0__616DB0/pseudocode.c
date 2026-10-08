void __thiscall CombatController_CategorizeAvailableMagicItem(char *this, int a2, ExtraDataList ***a3)
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

  if ( !a2 ) /*0x616ddf*/
    return; /*0x616ddf*/
  if ( a3 ) /*0x616deb*/
  {
    ActorBaseForm = Actor_GetActorBaseForm((Actor *)reference, 0); /*0x616dfc*/
    sub_484B70(a3); /*0x616dfe*/
    if ( v6 == ActorBaseForm ) /*0x616e05*/
      return; /*0x616e05*/
  }
  if ( EffectItemList_HasEffectWithFlags((_DWORD *)(a2 + 0xC), 0x40000) && !sub_419C50((char *)a2) ) /*0x616e20*/
    return; /*0x616e27*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x18))(a2) == 7 /*0x616e3d*/
    && (unsigned __int8)EffectItemList_AllEffectsHostile((_DWORD *)(a2 + 0xC)) )
  {
    if ( !*((_DWORD *)this + 0x29) ) /*0x616e46*/
    {
      v7 = (_DWORD *)FormHeapAlloc(8u); /*0x616e51*/
      if ( v7 ) /*0x616e5b*/
      {
        *v7 = 0; /*0x616e5d*/
        v7[1] = 0; /*0x616e63*/
      }
      else
      {
        v7 = 0; /*0x616e6c*/
      }
      *((_DWORD *)this + 0x29) = v7; /*0x616e6e*/
    }
    BSSimpleList_PushFront(*((_DWORD **)this + 0x29), a2); /*0x616e7b*/
    return; /*0x616e80*/
  }
  v8 = (_DWORD *)FormHeapAlloc(8u); /*0x616e8c*/
  if ( v8 )
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x18))(a2); /*0x616ea8*/
    *v8 = a2; /*0x616eb3*/
    v8[1] = v9 != 7 ? a3 : 0;
  }
  else
  {
    v8 = 0; /*0x616eba*/
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x18))(a2) == 1 ) /*0x616ed0*/
  {
    if ( *((_DWORD *)this + 0x28) ) /*0x616ed2*/
      FormHeapFree(*((_DWORD *)this + 0x28)); /*0x616edd*/
    *((_DWORD *)this + 0x28) = v8; /*0x616ee5*/
    return; /*0x616eeb*/
  }
  HasAssocFormEffect = EffectItemList_HasAssocFormEffect(a2 + 0xC); /*0x616efa*/
  if ( HasAssocFormEffect ) /*0x616efe*/
  {
    if ( sub_613AF0((void **)this, (unsigned int)v8, 0x40000, (unsigned int *)this + 0x27) ) /*0x616f13*/
      return; /*0x616f1a*/
    v10 = this + 0x98; /*0x616f20*/
    if ( this != (char *)0xFFFFFF68 /*0x616f4c*/
      && (!Actor_IsCreature(*((Actor **)this + 0xF)) || sub_5E1CF0(*((void **)this + 0xF)))
      && EffectItemList_HasEffectWithFlags((_DWORD *)(*v8 + 0xC), 0x10000) )
    {
      if ( !*(_DWORD *)v10 ) /*0x616f5a*/
        goto LABEL_30; /*0x616f5a*/
      v21 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(**(_DWORD **)v10 + 0xC))(**(_DWORD **)v10 + 0xC, 0);// Bound-item candidates are compared by the EffectItemList virtual magicka-cost result; the higher-cost candidate wins. /*0x616f6a*/
      if ( ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*v8 + 0xC))(*v8 + 0xC, 0) > v21 ) /*0x616f85*/
      {
LABEL_29:
        FormHeapFree(*(_DWORD *)v10); /*0x616f87*/
        *(_DWORD *)v10 = v8; /*0x616f90*/
        return; /*0x616f93*/
      }
    }
    v10 = this + 0x94; /*0x616fa0*/
    if ( this != (char *)0xFFFFFF6C /*0x616fc0*/
      && !Actor_IsCreature(*((Actor **)this + 0xF))
      && EffectItemList_HasEffectWithFlags((_DWORD *)(*v8 + 0xC), 0x20000) )
    {
      if ( *(_DWORD *)v10 ) /*0x616fc9*/
      {
        v22 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(**(_DWORD **)v10 + 0xC))(**(_DWORD **)v10 + 0xC, 0); /*0x616fde*/
        if ( ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*v8 + 0xC))(*v8 + 0xC, 0) > v22 ) /*0x616ff9*/
          goto LABEL_29; /*0x616ff9*/
        goto LABEL_36; /*0x616ff9*/
      }
LABEL_30:
      *(_DWORD *)v10 = v8; /*0x616f98*/
      return; /*0x616f9b*/
    }
  }
LABEL_36:
  if ( !EffectItemList_HasHostile((_DWORD *)(a2 + 0xC)) || HasAssocFormEffect )// Available magic is categorized using the engine-maintained hostile-effect count, then split by target/touch/self delivery. /*0x617012*/
  {
    if ( EffectItemList_HasOnTarget(a2 + 0xC) /*0x6170ca*/
      || EffectItemList_HasTouchEffect((_DWORD *)(a2 + 0xC))
      || HasAssocFormEffect )
    {
      FormHeapFree((unsigned int)v8); /*0x6171c8*/
    }
    else if ( sub_6126B0(a2) ) /*0x6170d3*/
    {
      v13 = *((_DWORD *)this + 0x24); /*0x6170e0*/
      if ( v13 ) /*0x6170e8*/
      {
        v23 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*(_DWORD *)v13 + 0xC))(*(_DWORD *)v13 + 0xC, 0); /*0x6170fc*/
        if ( ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*v8 + 0xC))(*v8 + 0xC, 0) <= v23 ) /*0x617117*/
          return; /*0x617117*/
        if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v8 + 0x18))(*v8) != 7 && !v8[1] ) /*0x61712b*/
        {
          FormHeapFree(*((_DWORD *)this + 0x24)); /*0x617138*/
          *((_DWORD *)this + 0x24) = v8; /*0x617140*/
          return; /*0x617146*/
        }
        if ( !*((_DWORD *)this + 0x1A) ) /*0x61714b*/
        {
          v14 = (_DWORD *)FormHeapAlloc(8u); /*0x617153*/
          if ( v14 ) /*0x61715d*/
          {
            *v14 = 0; /*0x61715f*/
            v14[1] = 0; /*0x617165*/
          }
          else
          {
            v14 = 0; /*0x61716e*/
          }
          *((_DWORD *)this + 0x1A) = v14; /*0x617170*/
        }
        BSSimpleList_InsertSorted( /*0x617182*/
          *((_DWORD **)this + 0x1A),
          *((_DWORD *)this + 0x24),
          (int)sub_612740,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      *((_DWORD *)this + 0x24) = v8; /*0x617187*/
    }
    else
    {
      if ( !*((_DWORD *)this + 0x19) ) /*0x61718f*/
      {
        v15 = (_DWORD *)FormHeapAlloc(8u); /*0x617197*/
        if ( v15 ) /*0x6171a1*/
        {
          *v15 = 0; /*0x6171a3*/
          v15[1] = 0; /*0x6171a9*/
        }
        else
        {
          v15 = 0; /*0x6171b2*/
        }
        *((_DWORD *)this + 0x19) = v15; /*0x6171b4*/
      }
      BSSimpleList_InsertSorted(*((_DWORD **)this + 0x19), (int)v8, (int)sub_612740, v16, v17, v18, v19, v20); /*0x6171c0*/
    }
  }
  else if ( EffectItemList_HasOnTarget(a2 + 0xC) ) /*0x61701a*/
  {
    if ( !*((_DWORD *)this + 0x17) ) /*0x617023*/
    {
      v11 = (_DWORD *)FormHeapAlloc(8u); /*0x61702b*/
      if ( v11 ) /*0x617035*/
      {
        *v11 = 0; /*0x617037*/
        v11[1] = 0; /*0x61703d*/
      }
      else
      {
        v11 = 0; /*0x617046*/
      }
      *((_DWORD *)this + 0x17) = v11; /*0x617048*/
    }
    BSSimpleList_InsertSorted(*((_DWORD **)this + 0x17), (int)v8, (int)sub_612740, v16, v17, v18, v19, v20); /*0x617054*/
  }
  else if ( EffectItemList_HasTouchEffect((_DWORD *)(a2 + 0xC)) ) /*0x617060*/
  {
    if ( !*((_DWORD *)this + 0x18) ) /*0x61706d*/
    {
      v12 = (_DWORD *)FormHeapAlloc(8u); /*0x617075*/
      if ( v12 ) /*0x61707f*/
      {
        *v12 = 0; /*0x617081*/
        v12[1] = 0; /*0x617087*/
      }
      else
      {
        v12 = 0; /*0x617090*/
      }
      *((_DWORD *)this + 0x18) = v12; /*0x617092*/
    }
    BSSimpleList_InsertSorted(*((_DWORD **)this + 0x18), (int)v8, (int)sub_612740, v16, v17, v18, v19, v20); /*0x61709e*/
  }
}
