NiAVObject *__thiscall sub_521A40(TESBoundObject *this, TESObjectREFR *reference)
{
  NiAVObject *result; // eax
  int *v4; // ebx
  NiAVObject *v5; // esi
  int v6; // eax
  int *v7; // eax
  int *v8; // eax

  result = 0; /*0x521a69*/
  if ( reference ) /*0x521a6d*/
  {
    v4 = (int *)((int (__thiscall *)(TESObjectREFR *))reference->vtbl->GetActiveSkinInfo)(reference); /*0x521a84*/
    v5 = (NiAVObject *)TESBoundObject_Create3DImpl(this, reference, 0); /*0x521a8b*/
    v6 = NiObjectNET_LookupObjectByName(v5, "Bip01"); /*0x521a93*/
    if ( v4 ) /*0x521a9d*/
    {
      if ( v6 ) /*0x521aa1*/
      {
        ActorSkinInfo_CacheNamedNodes(v4, v5); /*0x521aa6*/
LABEL_10:
        NiAVObject_InitializePropertyState(v5); /*0x521af0*/
        NiNode_UpdateDynamicEffectState((NiNode *)v5); /*0x521af9*/
        NiAVObject_UpdateNiAVObject(v5, 0.0, 0); /*0x521b08*/
      }
    }
    else if ( v6 ) /*0x521aaf*/
    {
      v7 = (int *)FormHeapAlloc(0x154u); /*0x521ab6*/
      if ( v7 ) /*0x521acc*/
        v8 = ActorSkinInfo_ctor(v7, (int)reference, v5); /*0x521ad2*/
      else
        v8 = 0; /*0x521ad9*/
      ((void (__thiscall *)(TESObjectREFR *, int *))reference->vtbl->Unk_5B)(reference, v8); /*0x521aee*/
      goto LABEL_10; /*0x521aee*/
    }
    return v5; /*0x521b0d*/
  }
  return result; /*0x521b0f*/
}
