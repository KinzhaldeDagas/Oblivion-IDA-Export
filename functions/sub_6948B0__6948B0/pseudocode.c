void __thiscall sub_6948B0(int *this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // edi
  _DWORD *ShadowSceneNode; // eax
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // esi
  int v8; // esi
  int v10; // [esp+8h] [ebp-4h] BYREF

  v2 = (MagicTarget *)*(this + 8);
  if ( v2 )
    ParentActor = MagicTarget_GetParentActor(v2);
  else
    ParentActor = 0;
  if ( *(this + 0xE) )
  {
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
    if ( ShadowSceneNode )
      sub_7C7DC0(ShadowSceneNode, *(this + 0xE));
    v5 = InterlockedDecrement;
    if ( ParentActor )
    {
      v6 = (int)ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor);
      if ( v6 )
      {
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v6 + 0x88))(v6, &v10, *(this + 0xE));
        if ( v10 )
        {
          v7 = (void (__thiscall ***)(_DWORD, int))v10;
          if ( !v5((volatile LONG *)(v10 + 4)) )
            (**v7)(v7, 1);
        }
      }
      sub_4D8190(ParentActor, 1);
    }
    v8 = *(this + 0xE);
    if ( v8 )
    {
      if ( !v5((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      *(this + 0xE) = 0;
    }
    if ( --dword_B3C0B4 < 0 )
      dword_B3C0B4 = 0;
  }
}
