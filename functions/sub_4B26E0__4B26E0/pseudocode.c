char __thiscall sub_4B26E0(void *this, int a2)
{
  CHAR *FormModelPAth; // eax
  NiAVObject *v4; // esi

  FormModelPAth = GetFormModelPAth(this);
  QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, (int)FormModelPAth, 1, 1);
  v4 = (NiAVObject *)(*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x110))(this, 0);
  NiAVObject_InitializePropertyState(v4);
  NiNode_UpdateDynamicEffectState((NiNode *)v4);
  NiAVObject_UpdateNiAVObject(v4, 0.0, 0);
  return 1;
}
