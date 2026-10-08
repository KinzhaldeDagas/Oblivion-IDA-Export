// CustomAnimSupport decode: installs a parsed KFModel into ActorAnimData as AnimSequenceSingle/Multiple or defers it. Historical constructor-style name is not canonical.
char __thiscall ActorAnimData_InstallKFModel(AnimSequenceSingle *this, int a2, volatile LONG *ArgList)
{
  unsigned __int16 Magicka; // ax
  int v6; // edi
  int v7; // eax
  _DWORD *v9; // ecx
  _DWORD *v10; // eax
  int v11; // esi
  AnimSequenceMultiple *v12; // eax
  AnimSequenceMultiple *v13; // eax
  _DWORD *v14; // ecx
  int v15; // eax
  TESAnimGroup *v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int v21; // eax
  int v22; // edi
  unsigned __int16 *v23; // edi
  int v24; // eax
  int v25; // eax
  _WORD *v26; // edx
  _DWORD *v27; // ecx
  int v28; // edi
  int v29; // edi
  volatile LONG *v30; // eax
  BSAnimGroupSequence *v31; // edi
  void (__thiscall *v32)(int, BSAnimGroupSequence *); // eax
  unsigned int v33; // ebp
  volatile LONG *v34; // ebp
  volatile LONG *v35; // [esp+38h] [ebp-18h] BYREF
  AnimSequenceMultiple *v36; // [esp+3Ch] [ebp-14h] BYREF
  int v37; // [esp+40h] [ebp-10h]
  unsigned int v38; // [esp+4Ch] [ebp-4h]
  int AnimationGroup; // [esp+54h] [ebp+4h]

  v35 = *(volatile LONG **)(a2 + 8); /*0x4740a2*/
  if ( v35 ) /*0x4740a6*/
    InterlockedIncrement(v35 + 1); /*0x4740ac*/
  v38 = 0; /*0x4740b4*/
  if ( !v35 ) /*0x4740bc*/
    return 0; /*0x4740bc*/
  AnimationGroup = TESAnimGroup_GetAnimationGroup((TESAnimGroup *)v35); /*0x4740c7*/
  Magicka = Shared_GetWordAtOffset08(v35); /*0x4740cb*/
  v6 = Magicka; /*0x4740d8*/
  v37 = Magicka; /*0x4740db*/
  if ( AnimationGroup == 0xFF ) /*0x4740df*/
  {
    v7 = *(_DWORD *)(a2 + 4); /*0x4740e1*/
    if ( v7 ) /*0x4740e6*/
      PrintError( /*0x4740f5*/
        "Animation sequence '%s' not found in TESAnimGroup::GetSequenceType for file '%s'.",
        *(const char **)(v7 + 8),
        *(const char **)a2);
    v38 = 0xFFFFFFFF; /*0x474101*/
    if ( !InterlockedDecrement(v35 + 1) ) /*0x474109*/
      (**(void (__thiscall ***)(volatile LONG *, int))v35)(v35, 1); /*0x47411b*/
    return 0; /*0x47411f*/
  }
  v9 = *((_DWORD **)this + 0x27); /*0x474129*/
  v36 = 0; /*0x474132*/
  if ( ActorAnimData_FindAnimMapEntry(v9, Magicka, &v36) ) /*0x474136*/
  {
    v11 = (int)v36; /*0x47417a*/
  }
  else
  {
    v10 = (_DWORD *)FormHeapAlloc(8u); /*0x474141*/
    if ( v10 ) /*0x47414b*/
    {
      v10[1] = 0; /*0x47414d*/
      *v10 = &AnimSequenceSingle::`vftable'; /*0x474151*/
      v11 = (int)v10; /*0x47415e*/
      AnimKeyMap_InsertOrAssign(*((_DWORD **)this + 0x27), v6, (int)v10); /*0x474160*/
    }
    else
    {
      v11 = 0; /*0x474171*/
      AnimKeyMap_InsertOrAssign(*((_DWORD **)this + 0x27), v6, 0); /*0x474173*/
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 0xC))(v11) /*0x474198*/
    && (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v11 + 0x10))(v11, 0xFFFFFFFF) )
  {
    if ( *(_BYTE *)(0x24 * AnimationGroup + 0xB102E4) ) /*0x4741a9*/
    {
      ActorAnimData_RemoveAnimMapEntry(*((_DWORD **)this + 0x27), v6); /*0x4741ba*/
      v12 = (AnimSequenceMultiple *)FormHeapAlloc(8u); /*0x4741c1*/
      v36 = v12; /*0x4741c9*/
      LOBYTE(v38) = 1; /*0x4741cf*/
      if ( v12 ) /*0x4741d4*/
        v13 = AnimSequenceMultiple_ctor(v12, v11); /*0x4741d9*/
      else
        v13 = 0; /*0x4741e0*/
      v14 = *((_DWORD **)this + 0x27); /*0x4741e2*/
      LOBYTE(v38) = 0; /*0x4741ea*/
      v11 = (int)v13; /*0x4741ef*/
      AnimKeyMap_InsertOrAssign(v14, v6, (int)v13); /*0x4741f1*/
    }
    else
    {
      v15 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v11 + 0x10))(v11, 0xFFFFFFFF); /*0x474204*/
      v16 = *(TESAnimGroup **)(a2 + 8); /*0x474209*/
      if ( *(TESAnimGroup **)(v15 + 0x68) == v16 ) /*0x47420e*/
      {
        if ( TESAnimGroup_GetAnimationGroup(v16) == 1 ) /*0x474218*/
          InterlockedDecrement((volatile LONG *)(a2 + 0xC)); /*0x47421e*/
        v38 = 0xFFFFFFFF; /*0x474228*/
        NiPointerSlot_Release((NiD3DVertexShader *)&v35); /*0x474230*/
        return 1; /*0x474235*/
      }
      v17 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v11 + 0x10))(v11, 0xFFFFFFFF); /*0x474243*/
      if ( TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(v17 + 0x68)) == 1 ) /*0x474250*/
      {
        v18 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v11 + 0x10))(v11, 0xFFFFFFFF); /*0x47425b*/
        ModelLoader_ReleaseModelPath(MEMORY[0xB33A1C], *(_DWORD *)(v18 + 8), 1); /*0x474269*/
      }
      v19 = *((_DWORD *)this + 0x35); /*0x47426e*/
      if ( !v19 /*0x474288*/
        || (v20 = *(_DWORD *)(v19 + 0x10),
            v20 != (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v11 + 0x10))(v11, 0xFFFFFFFF)) )
      {
        v21 = *((_DWORD *)this + 0x36); /*0x47428a*/
        if ( !v21 /*0x4742a4*/
          || (v22 = *(_DWORD *)(v21 + 0x10),
              v22 != (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v11 + 0x10))(v11, 0xFFFFFFFF)) )
        {
          v23 = *((unsigned __int16 **)this + 0x26); /*0x4742ab*/
          v24 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v11 + 0x10))(v11, 0xFFFFFFFF); /*0x4742b5*/
          KeyframeManager_RemoveSequence(v23, (int *)&v36, v24); /*0x4742bf*/
          NiPointerSlot_Release((NiD3DVertexShader *)&v36); /*0x4742c8*/
        }
      }
      v25 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v11 + 0x10))(v11, 0xFFFFFFFF); /*0x4742d6*/
      if ( v25 ) /*0x4742da*/
      {
        v26 = (_WORD *)((char *)this + 0x3C); /*0x4742dc*/
        v27 = (_DWORD *)((char *)this + 0xA0); /*0x4742df*/
        v28 = 5; /*0x4742e5*/
        do /*0x474308*/
        {
          if ( *v27 == v25 ) /*0x4742f2*/
          {
            *v27 = 0; /*0x4742f4*/
            *v26 = 0; /*0x4742fa*/
          }
          ++v27; /*0x4742ff*/
          ++v26; /*0x474302*/
          --v28; /*0x474305*/
        }
        while ( v28 ); /*0x474308*/
      }
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 4))(v11, 0); /*0x474313*/
    }
  }
  if ( (_BYTE)ArgList /*0x47433f*/
    && AnimationGroup
    && (!InterfaceManager_IsMenuVisibleByID(0x40C, 0) || AnimationGroup != 0x21)
    && AnimationGroup != 0x20 )
  {
    BSSimpleList_PushBack((_DWORD *)this + 0x2D, a2); /*0x474348*/
LABEL_63:
    v38 = 0xFFFFFFFF; /*0x4744c9*/
    if ( !InterlockedDecrement(v35 + 1) ) /*0x4744d9*/
      (**(void (__thiscall ***)(volatile LONG *, int))v35)(v35, 1); /*0x4744eb*/
    return 1; /*0x4744ed*/
  }
  v29 = *(_DWORD *)(a2 + 4); /*0x474352*/
  v30 = (volatile LONG *)FormHeapAlloc(0x6Cu); /*0x474357*/
  ArgList = v30; /*0x47435f*/
  LOBYTE(v38) = 2; /*0x474365*/
  if ( v30 ) /*0x47436a*/
    v31 = BSAnimGroupSequence::BSAnimGroupSequence((BSAnimGroupSequence *)v30, *(_DWORD *)(a2 + 8), v29); /*0x474378*/
  else
    v31 = 0; /*0x47437c*/
  v32 = *(void (__thiscall **)(int, BSAnimGroupSequence *))(*(_DWORD *)v11 + 4); /*0x474380*/
  LOBYTE(v38) = 0; /*0x474386*/
  v32(v11, v31); /*0x47438b*/
  if ( NiControllerManager_AddSequence(*((_DWORD **)this + 0x26), (int)v31, 0, 1) ) /*0x474398*/
  {
    if ( !*((_DWORD *)this + 2) ) /*0x4744aa*/
      *((_DWORD *)this + 2) = sub_471600(*((_DWORD *)this + 0x26)); /*0x4744bb*/
    sub_472640(this, *(_WORD **)(a2 + 8)); /*0x4744c4*/
    goto LABEL_63; /*0x4744c4*/
  }
  PrintError( /*0x4743b5*/
    "Unable to add '%s' to keyframe manager on '%s'.\r\n"
    "Make sure the animation is not skinned to bones that don't exist in our skeleton.",
    *((const char **)v31 + 2),
    *(const char **)(*((_DWORD *)this + 1) + 8));
  v33 = 0; /*0x4743ba*/
  for ( bDisableWarning_MESSAGES = 1; v33 < *((_DWORD *)v31 + 3); ++v33 ) /*0x4743c6*/
  {
    sub_6C66B0(v31, v33, (char **)&ArgList); /*0x4743d8*/
    if ( !(*(int (__thiscall **)(_DWORD, volatile LONG *))(**((_DWORD **)this + 1) + 0x58))( /*0x4743ea*/
            *((_DWORD *)this + 1),
            ArgList) )
      PrintError("Object '%s' in sequence but not skeleton.", (const char *)ArgList); /*0x4743fa*/
    FormHeapFree((unsigned int)ArgList); /*0x474407*/
  }
  bDisableWarning_MESSAGES = 0; /*0x47441c*/
  KeyframeManager_RemoveSequence(*((unsigned __int16 **)this + 0x26), (int *)&ArgList, (int)v31); /*0x47442a*/
  if ( ArgList ) /*0x474435*/
  {
    v34 = ArgList; /*0x474437*/
    if ( !InterlockedDecrement(ArgList + 1) ) /*0x47443d*/
      (**(void (__thiscall ***)(volatile LONG *, int))v34)(v34, 1); /*0x474454*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, BSAnimGroupSequence *))(*(_DWORD *)v11 + 8))(v11, v31) ) /*0x47445e*/
  {
    ActorAnimData_RemoveAnimMapEntry(*((_DWORD **)this + 0x27), v37); /*0x47446f*/
    (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x47447c*/
  }
  v38 = 0xFFFFFFFF; /*0x474486*/
  if ( InterlockedDecrement(v35 + 1) ) /*0x47448e*/
    return 0; /*0x474496*/
  (**(void (__thiscall ***)(volatile LONG *, int))v35)(v35, 1); /*0x4744a4*/
  return 0; /*0x4744ef*/
}
