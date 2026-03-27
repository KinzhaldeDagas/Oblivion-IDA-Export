void __thiscall sub_685EA0(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  NiNode *v4; // eax
  NiNode *v5; // edi
  NiNode *v6; // ebx
  NiNode *v7; // eax
  NiNode *v8; // edi
  BSShaderProperty *v9; // eax
  BSExtraDataVtbl *v10; // eax
  int *v11; // ecx

  if ( *(this + 0xA) )
    sub_684830((int **)this);
  if ( a2 )
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2);
    sub_68C280(this + 5, v3, 0);
  }
  v4 = sub_68C740((char **)this + 5);
  v5 = (NiNode *)*(this + 0xA);
  v6 = v4;
  if ( v5 != v4 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v5->members) )
        v5->vtbl->super.super.super.Destructor((NiRefObject *)v5, 1);
    }
    *(this + 0xA) = v6;
    if ( v6 )
      InterlockedIncrement((volatile LONG *)&v6->members);
  }
  if ( *(this + 0xA) )
  {
    v7 = sub_689F00(this, a2);
    if ( v7 )
      (*(void (__thiscall **)(_DWORD, NiNode *, int))(*(_DWORD *)*(this + 0xA) + 0x84))(*(this + 0xA), v7, 1);
    v8 = (NiNode *)*(this + 0xA);
    v9 = (BSShaderProperty *)sub_4E70B0();
    sub_405680(v8, v9);
    ((void (__thiscall *)(NiNode *, _DWORD, int))TES->ObjectLODRoot->vtbl->AddObject)(
      TES->ObjectLODRoot,
      *(this + 0xA),
      1);
    NiAVObject_InitializePropertyState((NiAVObject *)*(this + 0xA));
    NiNode_UpdateDynamicEffectState((NiNode *)*(this + 0xA));
    NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 0xA), 0.0, 0);
  }
  if ( a2 )
  {
    v10 = sub_42B410((BSExtraData *)(this + 5));
    sub_68BE80(this + 5, v10, 0);
  }
  v11 = (int *)*(this + 0xC);
  if ( v11 )
    sub_680E20(v11, *(this + 0xA));
}
