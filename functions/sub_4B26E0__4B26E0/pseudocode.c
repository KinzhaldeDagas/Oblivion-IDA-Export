char __thiscall sub_4B26E0(void *this, int a2)
{
  CHAR *FormModelPAth; // eax
  NiAVObject *v4; // esi

  FormModelPAth = GetFormModelPAth(this); /*0x4b26e4*/
  QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)FormModelPAth, 1, 1); /*0x4b26f7*/
  v4 = (NiAVObject *)(*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x110))(this, 0); /*0x4b270a*/
  NiAVObject_InitializePropertyState(v4); /*0x4b270e*/
  NiNode_UpdateDynamicEffectState((NiNode *)v4); /*0x4b2715*/
  NiAVObject_UpdateNiAVObject(v4, 0.0, 0); /*0x4b2724*/
  return 1; /*0x4b272b*/
}
