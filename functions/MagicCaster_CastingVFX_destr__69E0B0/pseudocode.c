void __thiscall MagicCaster_CastingVFX_destr(void *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  void (__thiscall ***v3)(_DWORD, int); // edi
  int v4; // edi
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax
  int v6; // edi
  int v7; // edi
  int v8; // esi
  _DWORD v9[2]; // [esp+14h] [ebp-14h] BYREF
  int v10; // [esp+24h] [ebp-4h]

  v9[1] = this; /*0x69e0d8*/
  v10 = 1; /*0x69e0de*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x69e0e6*/
  v2 = InterlockedDecrement; /*0x69e0ed*/
  if ( *(_DWORD *)this ) /*0x69e0eb*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)this + 0x88))( /*0x69e10b*/
      *(_DWORD *)this,
      v9,
      *((_DWORD *)this + 2));
    if ( v9[0] ) /*0x69e113*/
    {
      v3 = (void (__thiscall ***)(_DWORD, int))v9[0]; /*0x69e115*/
      if ( !v2((volatile LONG *)(v9[0] + 4)) ) /*0x69e11b*/
        (**v3)(v3, 1); /*0x69e12d*/
    }
  }
  v4 = *(_DWORD *)this; /*0x69e12f*/
  if ( *(_DWORD *)this ) /*0x69e12f*/
  {
    if ( !v2((volatile LONG *)(v4 + 4)) ) /*0x69e139*/
    {
      if ( v4 ) /*0x69e141*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x69e14b*/
    }
    *(_DWORD *)this = 0; /*0x69e14d*/
  }
  ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x69e155*/
  if ( ShadowSceneNode ) /*0x69e15f*/
    ShadowSceneNode_RemoveFullLightBySource(ShadowSceneNode, *((void **)this + 2)); /*0x69e167*/
  v6 = *((_DWORD *)this + 2); /*0x69e16c*/
  if ( v6 ) /*0x69e171*/
  {
    if ( !v2((volatile LONG *)(v6 + 4)) ) /*0x69e177*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x69e189*/
    *((_DWORD *)this + 2) = 0; /*0x69e18b*/
  }
  *((_DWORD *)this + 1) = 0; /*0x69e194*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x69e19b*/
  v7 = *((_DWORD *)this + 2); /*0x69e1a0*/
  LOBYTE(v10) = 0; /*0x69e1a8*/
  if ( v7 ) /*0x69e1ad*/
  {
    if ( !v2((volatile LONG *)(v7 + 4)) ) /*0x69e1b3*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x69e1c5*/
  }
  v8 = *(_DWORD *)this; /*0x69e1c7*/
  v10 = 0xFFFFFFFF; /*0x69e1cb*/
  if ( v8 ) /*0x69e1d3*/
  {
    if ( !v2((volatile LONG *)(v8 + 4)) ) /*0x69e1d9*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x69e1eb*/
  }
}
