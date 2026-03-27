AnimSequenceSingle *__thiscall AnimSequenceSingle::AnimSequenceSingle(
        AnimSequenceSingle *this,
        int a2,
        volatile LONG *ArgList)
{
  unsigned __int16 Magicka; // ax
  int v9; // edi
  int v10; // eax
  _DWORD *v12; // ecx
  _DWORD *v13; // eax
  int v14; // esi
  AnimSequenceMultiple *v15; // eax
  AnimSequenceMultiple *v16; // eax
  _DWORD *v17; // ecx
  int v18; // eax
  TESAnimGroup *v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // edi
  int v24; // eax
  int v25; // edi
  unsigned __int16 *v26; // edi
  int v27; // eax
  int v28; // eax
  _WORD *v29; // edx
  _DWORD *v30; // ecx
  int v31; // edi
  int v32; // edi
  char *v33; // eax
  BSAnimGroupSequence *v34; // edi
  void (__thiscall *v35)(int, BSAnimGroupSequence *); // eax
  unsigned int v36; // ebp
  volatile LONG *v37; // ebp
  volatile LONG *v38; // [esp+38h] [ebp-18h] BYREF
  AnimSequenceMultiple *v39; // [esp+3Ch] [ebp-14h] BYREF
  int v40; // [esp+40h] [ebp-10h]
  unsigned int v41; // [esp+4Ch] [ebp-4h]
  int AnimationGroup; // [esp+54h] [ebp+4h]

  v38 = *(volatile LONG **)(a2 + 8);
  if ( v38 )
    InterlockedIncrement(v38 + 1);
  v41 = 0;
  if ( !v38 )
    return 0;
  AnimationGroup = TESAnimGroup_GetAnimationGroup((TESAnimGroup *)v38);
  Magicka = TESActorBaseData_GetMagicka(v38);
  v9 = Magicka;
  v40 = Magicka;
  if ( AnimationGroup == 0xFF )
  {
    v10 = *(_DWORD *)(a2 + 4);
    if ( v10 )
      PrintError(
        "Animation sequence '%s' not found in TESAnimGroup::GetSequenceType for file '%s'.",
        *(const char **)(v10 + 8),
        *(const char **)a2);
    v41 = 0xFFFFFFFF;
    if ( !InterlockedDecrement(v38 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v38)(v38, 1);
    return 0;
  }
  v12 = *((_DWORD **)this + 0x27);
  v39 = 0;
  if ( sub_470960(v12, Magicka, &v39) )
  {
    v14 = (int)v39;
  }
  else
  {
    v13 = (_DWORD *)FormHeapAlloc(8u);
    if ( v13 )
    {
      v13[1] = 0;
      *v13 = &AnimSequenceSingle::`vftable';
      v14 = (int)v13;
      sub_470820(*((_DWORD **)this + 0x27), v9, (int)v13);
    }
    else
    {
      v14 = 0;
      sub_470820(*((_DWORD **)this + 0x27), v9, 0);
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 0xC))(v14)
    && (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v14 + 0x10))(v14, 0xFFFFFFFF) )
  {
    if ( *(_BYTE *)(0x24 * AnimationGroup + 0xB102E4) )
    {
      sub_4708B0(*((_DWORD **)this + 0x27), v9);
      v15 = (AnimSequenceMultiple *)FormHeapAlloc(8u);
      v39 = v15;
      LOBYTE(v41) = 1;
      if ( v15 )
        v16 = AnimSequenceMultiple::AnimSequenceMultiple(v15, v14);
      else
        v16 = 0;
      v17 = *((_DWORD **)this + 0x27);
      LOBYTE(v41) = 0;
      v14 = (int)v16;
      sub_470820(v17, v9, (int)v16);
    }
    else
    {
      v18 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v14 + 0x10))(v14, 0xFFFFFFFF);
      v19 = *(TESAnimGroup **)(a2 + 8);
      if ( *(TESAnimGroup **)(v18 + 0x68) == v19 )
      {
        if ( TESAnimGroup_GetAnimationGroup(v19) == 1 )
          InterlockedDecrement((volatile LONG *)(a2 + 0xC));
        v41 = 0xFFFFFFFF;
        sub_7016A0((NiD3DVertexShader *)&v38);
        return (AnimSequenceSingle *)1;
      }
      v20 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v14 + 0x10))(v14, 0xFFFFFFFF);
      if ( TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(v20 + 0x68)) == 1 )
      {
        v21 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v14 + 0x10))(v14, 0xFFFFFFFF);
        sub_438540(ModelLoaderPtr, *(_DWORD *)(v21 + 8), 1);
      }
      v22 = *((_DWORD *)this + 0x35);
      if ( !v22
        || (v23 = *(_DWORD *)(v22 + 0x10),
            v23 != (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v14 + 0x10))(v14, 0xFFFFFFFF)) )
      {
        v24 = *((_DWORD *)this + 0x36);
        if ( !v24
          || (v25 = *(_DWORD *)(v24 + 0x10),
              v25 != (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v14 + 0x10))(v14, 0xFFFFFFFF)) )
        {
          v26 = *((unsigned __int16 **)this + 0x26);
          v27 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v14 + 0x10))(v14, 0xFFFFFFFF);
          sub_6C4A10(v26, (int *)&v39, v27);
          sub_7016A0((NiD3DVertexShader *)&v39);
        }
      }
      v28 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v14 + 0x10))(v14, 0xFFFFFFFF);
      if ( v28 )
      {
        v29 = (_WORD *)((char *)this + 0x3C);
        v30 = (_DWORD *)((char *)this + 0xA0);
        v31 = 5;
        do
        {
          if ( *v30 == v28 )
          {
            *v30 = 0;
            *v29 = 0;
          }
          ++v30;
          ++v29;
          --v31;
        }
        while ( v31 );
      }
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v14 + 4))(v14, 0);
    }
  }
  if ( (_BYTE)ArgList && AnimationGroup && (!sub_5790E0(0x40C, 0) || AnimationGroup != 0x21) && AnimationGroup != 0x20 )
  {
    BSSimpleList_PushBack((_DWORD *)this + 0x2D, a2);
LABEL_63:
    v41 = 0xFFFFFFFF;
    if ( !InterlockedDecrement(v38 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v38)(v38, 1);
    return (AnimSequenceSingle *)1;
  }
  v32 = *(_DWORD *)(a2 + 4);
  v33 = (char *)FormHeapAlloc(0x6Cu);
  ArgList = (volatile LONG *)v33;
  LOBYTE(v41) = 2;
  if ( v33 )
    v34 = BSAnimGroupSequence::BSAnimGroupSequence((BSAnimGroupSequence *)v33, *(_DWORD *)(a2 + 8), v32);
  else
    v34 = 0;
  v35 = *(void (__thiscall **)(int, BSAnimGroupSequence *))(*(_DWORD *)v14 + 4);
  LOBYTE(v41) = 0;
  v35(v14, v34);
  if ( sub_6C5760(*((_DWORD **)this + 0x26), (int)v34, 0, 1) )
  {
    if ( !*((_DWORD *)this + 2) )
      *((_DWORD *)this + 2) = sub_471600(*((_DWORD *)this + 0x26));
    sub_472640(this, *(_WORD **)(a2 + 8));
    goto LABEL_63;
  }
  PrintError(
    "Unable to add '%s' to keyframe manager on '%s'.\r\n"
    "Make sure the animation is not skinned to bones that don't exist in our skeleton.",
    *((const char **)v34 + 2),
    *(const char **)(*((_DWORD *)this + 1) + 8));
  v36 = 0;
  for ( bDisableWarning_MESSAGES = 1; v36 < *((_DWORD *)v34 + 3); ++v36 )
  {
    sub_6C66B0(v34, v36, (char **)&ArgList);
    if ( !(*(int (__thiscall **)(_DWORD, volatile LONG *))(**((_DWORD **)this + 1) + 0x58))(
            *((_DWORD *)this + 1),
            ArgList) )
      PrintError("Object '%s' in sequence but not skeleton.", (const char *)ArgList);
    FormHeapFree((unsigned int)ArgList);
  }
  bDisableWarning_MESSAGES = 0;
  sub_6C4A10(*((unsigned __int16 **)this + 0x26), (int *)&ArgList, (int)v34);
  if ( ArgList )
  {
    v37 = ArgList;
    if ( !InterlockedDecrement(ArgList + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v37)(v37, 1);
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, BSAnimGroupSequence *))(*(_DWORD *)v14 + 8))(v14, v34) )
  {
    sub_4708B0(*((_DWORD **)this + 0x27), v40);
    (**(void (__thiscall ***)(int, int))v14)(v14, 1);
  }
  v41 = 0xFFFFFFFF;
  if ( InterlockedDecrement(v38 + 1) )
    return 0;
  (**(void (__thiscall ***)(volatile LONG *, int))v38)(v38, 1);
  return 0;
}
