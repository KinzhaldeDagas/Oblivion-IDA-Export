void __usercall RaceSexMenu::~RaceSexMenu(Menu *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>)
{
  char *v5; // eax
  unsigned int v6; // esi
  char *v7; // eax
  unsigned int v8; // esi
  PlayerCharacter *v9; // esi
  bhkCharacterProxy *CharProxy; // esi
  unsigned int v12; // esi
  NiObject *v13; // eax
  NiObject *v14; // eax
  ActorAnimData *AnimDataByPerspective; // eax
  ActorAnimData *v16; // eax
  ActorAnimData *v17; // eax
  ActorAnimData *v18; // eax
  float a2; // [esp+0h] [ebp-28h]

  this->__vftable = (MenuVtbl *)&RaceSexMenu::`vftable'; /*0x5c4c1b*/
  v5 = *((char **)this + 0x235); /*0x5c4c21*/
  if ( v5 ) /*0x5c4c31*/
  {
    v6 = (unsigned int)(v5 + 0xFFFFFFFC); /*0x5c4c36*/
    _LN21(v5, 0x18u, *((_DWORD *)v5 + 0xFFFFFFFF), (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c4c42*/
    FormHeapFree(v6); /*0x5c4c48*/
  }
  v7 = *((char **)this + 0x236); /*0x5c4c50*/
  if ( v7 ) /*0x5c4c58*/
  {
    v8 = (unsigned int)(v7 + 0xFFFFFFFC); /*0x5c4c5d*/
    _LN21(v7, 0x18u, *((_DWORD *)v7 + 0xFFFFFFFF), (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c4c69*/
    FormHeapFree(v8); /*0x5c4c6f*/
  }
  if ( MEMORY[0xB33398] ) /*0x5c4c77*/
  {
    __asm { fld     dword ptr ds:0B0313Ch } /*0x5c4c80*/
    __asm { fstp    [esp+28h+a2]; a2 }
    SetCameraFOV_0((SceneGraph *)g_WorldSceneReceiverRoot, a2, 0.0); /*0x5c4c92*/
  }
  if ( reference ) /*0x5c4c97*/
  {
    if ( PlayerCharacter_GetAnimDataByPerspective(reference, 1) ) /*0x5c4ca3*/
    {
      if ( PlayerCharacter_GetAnimDataByPerspective(reference, 1)->unkC8[0] ) /*0x5c4cb9*/
      {
        v9 = reference; /*0x5c4cca*/
        PlayerCharacter_GetAnimDataByPerspective(reference, 0)->unkC8[0] = (UInt32)v9; /*0x5c4cd1*/
      }
    }
    CharProxy = MobileObject_GetCharProxy((MobileObject *)reference); /*0x5c4ce2*/
    if ( CharProxy ) /*0x5c4ce6*/
    {
      reference->vtbl->super.super.super.GetScale((TESObjectREFR *)reference); /*0x5c4cf6*/
      __asm /*0x5c4cf8*/
      {
        fstp    [esp+20h+var_14]
        fld     [esp+20h+var_14]
        fstp    dword ptr [esi+334h]
      }
      *((float *)CharProxy + 0xCD) = _ET1; /*0x5c4d00*/
    }
  }
  v12 = *((_DWORD *)this + 0x23B); /*0x5c4d06*/
  if ( v12 ) /*0x5c4d0e*/
  {
    sub_57FEB0(*((_DWORD **)this + 0x23B)); /*0x5c4d12*/
    FormHeapFree(v12); /*0x5c4d18*/
  }
  v13 = *((NiObject **)TESObjectREFR_GetAnimData((TESObjectREFR *)reference)->manager + 0x1F); /*0x5c4d31*/
  if ( v13 ) /*0x5c4d36*/
  {
    v14 = NiRTTI_Cast((BSStringT *)stru_B3FCB8, v13); /*0x5c4d3e*/
    if ( v14 ) /*0x5c4d48*/
      sub_716690(v14); /*0x5c4d4c*/
  }
  AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, 0); /*0x5c4d5b*/
  ActorAnimData_ResetControllerSequences(AnimDataByPerspective, 0); /*0x5c4d62*/
  v16 = PlayerCharacter_GetAnimDataByPerspective(reference, 0); /*0x5c4d71*/
  ActorAnimData_ResetControllerSequences(v16, 1); /*0x5c4d78*/
  v17 = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x5c4d87*/
  ActorAnimData_ResetControllerSequences(v17, 0); /*0x5c4d8e*/
  v18 = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x5c4d9d*/
  ActorAnimData_ResetControllerSequences(v18, 1); /*0x5c4da4*/
  QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)"Characters\\_Male\\Skeleton.nif", 1, 1); /*0x5c4db8*/
  QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)"Characters\\_Male\\SkeletonBeast.nif", 1, 1); /*0x5c4dcc*/
  _LN21((char *)this + 0x930, 8u, 0x10, (void (__thiscall *)(void *))BSStringT_Clear); /*0x5c4de6*/
  Menu::~Menu(this, st5_0, a3, a4); /*0x5c4df5*/
}
