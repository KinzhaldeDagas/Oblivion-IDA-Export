// Pass228: Representative false positive in +0x178 indirect-call scan; this is TESForm/actor virtual dispatch, not NiDX9Renderer::RenderScreenTexture.
bool __thiscall sub_4AEE40(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  char v6; // bl
  char v7; // bl
  char v8; // bl
  __int16 v9; // bx
  int v10; // ebx
  char v11; // bl
  char v12; // bl
  bool v13; // bl
  double v14; // [esp+8h] [ebp-8h]
  double v15; // [esp+8h] [ebp-8h]
  double v16; // [esp+8h] [ebp-8h]
  double v17; // [esp+8h] [ebp-8h]

  v3 = (TESForm *)OblivionDynamicCast( /*0x4aee5a*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESGrass `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4aee5f*/
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) ) /*0x4aee75*/
    return 1; /*0x4aee69*/
  v6 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].ClearModified)(v4); /*0x4aee8d*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this) != v6 ) /*0x4aee9b*/
    return 1; /*0x4aee9b*/
  v7 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].GetSaveSize)(v4); /*0x4aeeaf*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].GetSaveSize)(this) != v7 ) /*0x4aeebd*/
    return 1; /*0x4aeebd*/
  v8 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].LoadGame)(v4); /*0x4aeed1*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].LoadGame)(this) != v8 ) /*0x4aeedf*/
    return 1; /*0x4aeedf*/
  v9 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].Unk_19)(v4); /*0x4aeef3*/
  if ( ((unsigned __int16 (__thiscall *)(TESForm *))this->vtbl[1].Unk_19)(this) != v9 ) /*0x4aef03*/
    return 1; /*0x4aef03*/
  v10 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].DoPostFixup)(v4); /*0x4aef17*/
  if ( ((int (__thiscall *)(TESForm *))this->vtbl[1].DoPostFixup)(this) != v10 ) /*0x4aef25*/
    return 1; /*0x4aef25*/
  v14 = ((double (__thiscall *)(TESForm *))this->vtbl[1].GetDescription)(this); /*0x4aef37*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].GetDescription)(v4) != v14 ) /*0x4aef50*/
    return 1; /*0x4aef50*/
  v15 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_1F)(this); /*0x4aef62*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_1F)(v4) != v15 ) /*0x4aef7b*/
    return 1; /*0x4aef7b*/
  v16 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_21)(this); /*0x4aef8d*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_21)(v4) != v16 ) /*0x4aefa6*/
    return 1; /*0x4aefa6*/
  v17 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_23)(this); /*0x4aefb4*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_23)(v4) != v17 ) /*0x4aefcd*/
    return 1; /*0x4aefcd*/
  v11 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].SetQuestItem)(v4); /*0x4aefdd*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].SetQuestItem)(this) != v11 ) /*0x4aefeb*/
    return 1; /*0x4aefeb*/
  v12 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].Unk_27)(v4); /*0x4aeffb*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].Unk_27)(this) != v12 ) /*0x4af009*/
    return 1; /*0x4af00d*/
  v13 = v4->vtbl[1].Unk_29(v4); /*0x4af024*/
  return this->vtbl[1].Unk_29(this) != v13; /*0x4aee68*/
}
