void __usercall RaceSexMenu::~RaceSexMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int *v6; // eax
  unsigned int v7; // esi
  int *v8; // eax
  unsigned int v9; // esi
  PlayerCharacter *v10; // esi
  bhkCharacterProxy *CharProxy; // esi
  unsigned int v12; // esi
  NiObject *v13; // eax
  NiObject *v14; // eax
  _DWORD *AnimData; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  float v19; // [esp+14h] [ebp-14h]

  this->__vftable = (MenuVtbl *)&RaceSexMenu::`vftable';
  v6 = *((int **)this + 0x235);
  if ( v6 )
  {
    v7 = (unsigned int)(v6 + 0xFFFFFFFF);
    _LN21(v6, 0x18u, v6[0xFFFFFFFF], (void (__thiscall *)(void *))sub_43ACE0);
    FormHeapFree(v7);
  }
  v8 = *((int **)this + 0x236);
  if ( v8 )
  {
    v9 = (unsigned int)(v8 + 0xFFFFFFFF);
    _LN21(v8, 0x18u, v8[0xFFFFFFFF], (void (__thiscall *)(void *))sub_43ACE0);
    FormHeapFree(v9);
  }
  if ( OSGlobals )
  {
    a2 = g_DefaulFOV;
    SetCameraFOV_0(g_worldScenegraph, g_DefaulFOV, 0.0);
  }
  if ( TESDataHandler_g_PlayerRef )
  {
    if ( Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1) )
    {
      if ( *((_DWORD *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1) + 0x32) )
      {
        v10 = TESDataHandler_g_PlayerRef;
        *((_DWORD *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0) + 0x32) = v10;
      }
    }
    CharProxy = MobileObject_GetCharProxy((MobileObject *)TESDataHandler_g_PlayerRef);
    if ( CharProxy )
    {
      TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetScale((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      v19 = a2;
      a2 = v19;
      *((float *)CharProxy + 0xCD) = v19;
    }
  }
  v12 = *((_DWORD *)this + 0x23B);
  if ( v12 )
  {
    sub_57FEB0(*((_DWORD **)this + 0x23B));
    FormHeapFree(v12);
  }
  v13 = *((NiObject **)TESObjectREFR_GetAnimData((Actor *)TESDataHandler_g_PlayerRef)[0x13].Destructor + 0x1F);
  if ( v13 )
  {
    v14 = NiRTTI_Cast((BSStringT *)&stru_B3FCA0.SpinCount, v13);
    if ( v14 )
      sub_716690(v14);
  }
  AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0);
  sub_473200(AnimData, 0);
  v16 = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0);
  sub_473200(v16, 1);
  v17 = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
  sub_473200(v17, 0);
  v18 = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
  sub_473200(v18, 1);
  QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, (int)"Characters\\_Male\\Skeleton.nif", 1, 1);
  QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, (int)"Characters\\_Male\\SkeletonBeast.nif", 1, 1);
  _LN21((char *)this + 0x930, 8u, 0x10, (void (__thiscall *)(void *))BSStringT_Clear);
  Menu::~Menu(this, a2, a3, a4);
}
