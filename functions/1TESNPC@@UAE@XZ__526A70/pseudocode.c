void __thiscall TESNPC::~TESNPC(TESNPC *this)
{
  UInt32 unk6; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  BSFaceGenNiNode *face1; // edi
  BSFaceGenNiNode *face0; // edi
  void *data; // [esp-4h] [ebp-24h]

  this->vtbl = (TESActorBaseVtbl *)&TESNPC::`vftable'{for `TESNPC'}; /*0x526a9a*/
  this->member.super.actorBaseData.vtbl = &TESNPC::`vftable'{for `TESActorBaseData'}; /*0x526aa0*/
  this->member.super.container.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESContainer'}; /*0x526aa7*/
  this->member.super.spellList.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESSpellList'}; /*0x526aae*/
  this->member.super.aiForm.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESAIForm'}; /*0x526ab5*/
  this->member.super.health.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESHealthForm'}; /*0x526abc*/
  this->member.super.attributes.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESAttributes'}; /*0x526ac6*/
  this->member.super.animation.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESAnimation'}; /*0x526ad0*/
  this->member.super.fullName.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESFullName'}; /*0x526ada*/
  this->member.super.model.vtbl = (TESModelVtbl *)&TESNPC::`vftable'{for `TESModel'}; /*0x526ae4*/
  this->member.super.scriptable.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESScriptableForm'}; /*0x526aee*/
  this->member.form.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESRaceForm'}; /*0x526af8*/
  sub_521DA0(this); /*0x526b0a*/
  data = this->member.facegenUndo.data; /*0x526b15*/
  this->member.facegenUndo._vtbl = &NiTArray<FaceGenUndo *>::`vftable'; /*0x526b16*/
  FormHeapFree((unsigned int)data); /*0x526b20*/
  unk6 = this->member.unk6; /*0x526b25*/
  v3 = InterlockedDecrement; /*0x526b2b*/
  if ( unk6 ) /*0x526b3b*/
  {
    if ( !v3((volatile LONG *)(unk6 + 4)) ) /*0x526b41*/
      (**(void (__thiscall ***)(UInt32, int))unk6)(unk6, 1); /*0x526b53*/
  }
  face1 = this->member.face1; /*0x526b55*/
  if ( face1 ) /*0x526b62*/
  {
    if ( !v3((volatile LONG *)face1 + 1) ) /*0x526b68*/
      (**(void (__thiscall ***)(BSFaceGenNiNode *, int))face1)(face1, 1); /*0x526b7a*/
  }
  face0 = this->member.face0; /*0x526b7c*/
  if ( face0 ) /*0x526b89*/
  {
    if ( !v3((volatile LONG *)face0 + 1) ) /*0x526b8f*/
      (**(void (__thiscall ***)(BSFaceGenNiNode *, int))face0)(face0, 1); /*0x526ba1*/
  }
  _LN21((char *)this->member.unk2, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x526bb8*/
  _LN21((char *)this->member.unk1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x526bd2*/
  TESActorBase::~TESActorBase((TESActorBase *)this); /*0x526be1*/
}
