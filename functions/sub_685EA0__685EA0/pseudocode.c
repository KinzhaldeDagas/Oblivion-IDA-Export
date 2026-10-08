void __thiscall sub_685EA0(_DWORD *this, int a2)
{
  NiPoint3 *v3; // eax
  NiNode *v4; // eax
  NiNode *v5; // edi
  NiNode *v6; // ebx
  NiNode *v7; // eax
  NiNode *v8; // edi
  BSShaderProperty *VertexColorProperty; // eax
  TESObjectREFR *LinkedDoor; // eax
  int *v11; // ecx

  if ( *(this + 0xA) ) /*0x685ea3*/
    sub_684830((int **)this); /*0x685ea9*/
  if ( a2 ) /*0x685eb6*/
  {
    v3 = (NiPoint3 *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2); /*0x685ec5*/
    sub_68C280((TeleportData **)this + 5, v3, 0); /*0x685ecb*/
  }
  v4 = sub_68C740((NiDX92DBufferData **)this + 5); /*0x685ed4*/
  v5 = (NiNode *)*(this + 0xA); /*0x685ed9*/
  v6 = v4; /*0x685edc*/
  if ( v5 != v4 ) /*0x685ee0*/
  {
    if ( v5 ) /*0x685ee4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v5->members) ) /*0x685eea*/
        v5->vtbl->super.super.super.Destructor((NiRefObject *)v5, 1); /*0x685f00*/
    }
    *(this + 0xA) = v6; /*0x685f04*/
    if ( v6 ) /*0x685f07*/
      InterlockedIncrement((volatile LONG *)&v6->members); /*0x685f0d*/
  }
  if ( *(this + 0xA) ) /*0x685f13*/
  {
    v7 = sub_689F00((float ***)this, a2); /*0x685f1d*/
    if ( v7 ) /*0x685f24*/
      (*(void (__thiscall **)(_DWORD, NiNode *, int))(*(_DWORD *)*(this + 0xA) + 0x84))(*(this + 0xA), v7, 1); /*0x685f34*/
    v8 = (NiNode *)*(this + 0xA); /*0x685f36*/
    VertexColorProperty = (BSShaderProperty *)DebugRender_GetOrCreateVertexColorProperty(); /*0x685f39*/
    sub_405680(v8, VertexColorProperty); /*0x685f41*/
    ((void (__thiscall *)(NiNode *, _DWORD, int))MEMORY[0xB333A0]->ObjectLODRoot->vtbl->AddObject)( /*0x685f5d*/
      MEMORY[0xB333A0]->ObjectLODRoot,
      *(this + 0xA),
      1);
    NiAVObject_InitializePropertyState((NiAVObject *)*(this + 0xA)); /*0x685f62*/
    NiNode_UpdateDynamicEffectState((NiNode *)*(this + 0xA)); /*0x685f6a*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 0xA), 0.0, 0); /*0x685f7a*/
  }
  if ( a2 ) /*0x685f81*/
  {
    LinkedDoor = TeleportData_GetLinkedDoor((TeleportData *)(this + 5)); /*0x685f8a*/
    sub_68BE80((NiSurfaceData **)this + 5, (NiDX92DBufferData *)LinkedDoor, 0); /*0x685f92*/
  }
  v11 = (int *)*(this + 0xC); /*0x685f97*/
  if ( v11 ) /*0x685f9e*/
    sub_680E20(v11, *(this + 0xA)); /*0x685fa8*/
}
