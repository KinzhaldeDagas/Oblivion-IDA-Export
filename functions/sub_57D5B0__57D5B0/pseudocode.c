int __usercall sub_57D5B0@<eax>(int a1@<ecx>, double a2@<st2>, double a3@<st1>)
{
  Ni2DBuffer *inited; // edi
  int ShadowSceneNode; // eax

  inited = ObservedActorRef_InitDefaultIdleVariants((TESObjectREFR *)reference, a2, a3, 1); /*0x57d5c4*/
  (*(void (__thiscall **)(_DWORD, Ni2DBuffer *, int))(**(_DWORD **)(a1 + 0x60) + 0x84))( /*0x57d5d1*/
    *(_DWORD *)(a1 + 0x60),
    inited,
    1);
  sub_5A5900(0.0, 0.0); /*0x57d5df*/
  LOWORD(inited[1].members.super.m_uiRefCount) &= ~1u; /*0x57d5e9*/
  *(_WORD *)(*(_DWORD *)(a1 + 0x60) + 0x18) &= ~1u; /*0x57d5f0*/
  NiNode_UpdateDynamicEffectState(*(NiNode **)(a1 + 0x60)); /*0x57d5fa*/
  NiAVObject_InitializePropertyState(*(NiAVObject **)(a1 + 0x60)); /*0x57d602*/
  ShadowSceneNode = GetShadowSceneNode(1); /*0x57d609*/
  sub_7C7050((int)inited, ShadowSceneNode); /*0x57d610*/
  Actor_UpdateAnimationAndFirstPerson(reference); /*0x57d61e*/
  return NiAVObject_UpdateNiAVObject(*(NiAVObject **)(a1 + 0x60), 0.0, 0); /*0x57d633*/
}
