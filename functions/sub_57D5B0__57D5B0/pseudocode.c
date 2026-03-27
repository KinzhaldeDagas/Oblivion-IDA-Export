int __usercall sub_57D5B0@<eax>(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>)
{
  _DWORD *v5; // edi
  int ShadowSceneNode; // eax

  v5 = sub_668D00((int)TESDataHandler_g_PlayerRef, a3, a4, 1);
  (*(void (__thiscall **)(_DWORD, _DWORD *, int))(**(_DWORD **)(a1 + 0x60) + 0x84))(*(_DWORD *)(a1 + 0x60), v5, 1);
  sub_5A5900(a2, a3, 0.0, a4, 0.0, 0.0);
  *((_WORD *)v5 + 0xC) &= ~1u;
  *(_WORD *)(*(_DWORD *)(a1 + 0x60) + 0x18) &= ~1u;
  NiNode_UpdateDynamicEffectState(*(NiNode **)(a1 + 0x60));
  NiAVObject_InitializePropertyState(*(NiAVObject **)(a1 + 0x60));
  ShadowSceneNode = GetShadowSceneNode(1);
  sub_7C7050((int)v5, ShadowSceneNode);
  sub_664C40((int)TESDataHandler_g_PlayerRef, a2, (int)v5, a3, a4, 0.0);
  return NiAVObject_UpdateNiAVObject(*(NiAVObject **)(a1 + 0x60), 0.0, 0);
}
