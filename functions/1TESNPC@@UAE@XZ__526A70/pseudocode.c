void __thiscall TESNPC::~TESNPC(TESNPC *this)
{
  UInt32 unk6; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  BSFaceGenNiNode *face1; // edi
  BSFaceGenNiNode *face0; // edi
  void *data; // [esp-4h] [ebp-24h]

  this->vtbl = (TESActorBaseVtbl *)&TESNPC::`vftable'{for `TESNPC'};
  this->member.super.actorBaseData.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESActorBaseData'};
  this->member.super.container.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESContainer'};
  this->member.super.spellList.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESSpellList'};
  this->member.super.aiForm.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESAIForm'};
  this->member.super.health.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESHealthForm'};
  this->member.super.attributes.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESAttributes'};
  this->member.super.animation.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESAnimation'};
  this->member.super.fullName.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESFullName'};
  this->member.super.model.vtbl = (TESModelVtbl *)&TESNPC::`vftable'{for `TESModel'};
  this->member.super.scriptable.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESScriptableForm'};
  this->member.form.vtbl = (BaseFormComponentVtbl *)&TESNPC::`vftable'{for `TESRaceForm'};
  sub_521DA0(this);
  data = this->member.facegenUndo.data;
  this->member.facegenUndo._vtbl = &NiTArray<FaceGenUndo *>::`vftable';
  FormHeapFree((unsigned int)data);
  unk6 = this->member.unk6;
  v3 = InterlockedDecrement;
  if ( unk6 )
  {
    if ( !v3((volatile LONG *)(unk6 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))unk6)(unk6, 1);
  }
  face1 = this->member.face1;
  if ( face1 )
  {
    if ( !v3((volatile LONG *)face1 + 1) )
      (**(void (__thiscall ***)(BSFaceGenNiNode *, int))face1)(face1, 1);
  }
  face0 = this->member.face0;
  if ( face0 )
  {
    if ( !v3((volatile LONG *)face0 + 1) )
      (**(void (__thiscall ***)(BSFaceGenNiNode *, int))face0)(face0, 1);
  }
  _LN21(this->member.unk2, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
  _LN21(this->member.unk1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
  TESActorBase::~TESActorBase((TESActorBase *)this);
}
